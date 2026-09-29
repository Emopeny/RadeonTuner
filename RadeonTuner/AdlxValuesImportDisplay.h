#pragma once
#include "pch.h"
#include "MainPage.h"
#include "MainVariables.h"

namespace winrt::RadeonTuner::implementation
{
	winrt::IAsyncAction MainPage::AdlxValuesImportDisplay()
	{
		try
		{
			//Show file dialog
			std::wstring importPath = filepicker_open(NULL, L"Import display settings...", { { L"Setting files", L"*.radd" } });

			//Check file path
			if (importPath.empty())
			{
				ShowNotification(L"显示未导入，未设置路径");
				AVDebugWriteLine(L"Display not imported, no path set");
				co_return;
			}

			AVDebugWriteLine("Importing display settings: " << importPath.c_str());

			//Load settings from file
			DisplaySettings displaySettings = DisplaySettings_Profile_LoadFromFile(importPath).value();

			//Check device identifier
			std::wstring device_id_import_w = displaySettings.DeviceId.value();
			std::wstring device_id_current_w = adl_Display_DeviceIdentifier;
			if (!device_id_import_w.empty() && !device_id_current_w.empty())
			{
				if (device_id_import_w != device_id_current_w)
				{
					//Show messagebox
					int messageResult = co_await ShowMessageBox(L"显示不匹配", L"显示设置与你选择的显示器不匹配，是否继续导入？", { L"是", L"否" });

					//Check messagebox result
					if (messageResult == 1)
					{
						//Set result
						ShowNotification(L"显示不匹配");
						AVDebugWriteLine(L"Display does not match");
						co_return;
					}
				}
			}

			//Set settings values
			DisplaySettings_Convert_ToUI_Profile(displaySettings, AdlSettingGet::Current);

			//Set result
			ShowNotification(L"显示设置已导入");
			AVDebugWriteLine(L"Display settings imported");
		}
		catch (...)
		{
			//Set result
			ShowNotification(L"显示未导入，发生异常");
			AVDebugWriteLine(L"Display not imported, exception");
		}
	}
}