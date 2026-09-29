#pragma once
#include "pch.h"
#include "MainPage.h"
#include "MainVariables.h"

namespace winrt::RadeonTuner::implementation
{
	winrt::IAsyncAction MainPage::AdlxValuesImportTuning()
	{
		try
		{
			//Show file dialog
			std::wstring importPath = filepicker_open(NULL, L"Import tuning and fans settings...", { { L"Setting files", L"*.radt" } });

			//Check file path
			if (importPath.empty())
			{
				ShowNotification(L"调校和风扇未导入，未设置路径");
				AVDebugWriteLine(L"Tuning and fans not imported, no path set");
				co_return;
			}

			AVDebugWriteLine("Importing tuning and fans settings: " << importPath.c_str());

			//Load settings from file
			TuningFanSettings tuningFanSettings = TuningFanSettings_Profile_LoadFromFile(importPath).value();

			//Check device identifier
			std::wstring device_id_import_w = tuningFanSettings.DeviceId.value();
			std::wstring device_id_current_w = adl_Gpu_DeviceIdentifier;
			if (!device_id_import_w.empty() && !device_id_current_w.empty())
			{
				if (device_id_import_w != device_id_current_w)
				{
					//Show messagebox
					int messageResult = co_await ShowMessageBox(L"GPU 不匹配", L"调校和风扇设置与你选择的 GPU 不匹配，是否继续导入？", { L"是", L"否" });

					//Check messagebox result
					if (messageResult == 1)
					{
						//Set result
						ShowNotification(L"GPU 不匹配");
						AVDebugWriteLine(L"GPU does not match");
						co_return;
					}
				}
			}

			//Set settings values to interface
			TuningFanSettings_Convert_ToUI_Profile(tuningFanSettings, AdlSettingGet::Current);

			//Set result
			ShowNotification(L"调校与风扇已导入");
			AVDebugWriteLine(L"Tuning and fans imported");
		}
		catch (...)
		{
			//Set result
			ShowNotification(L"调校和风扇未导入，异常");
			AVDebugWriteLine(L"Tuning and fans not imported, exception");
		}
	}
}