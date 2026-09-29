#pragma once
#include "pch.h"
#include "MainPage.h"
#include "MainVariables.h"

namespace winrt::RadeonTuner::implementation
{
	void MainPage::AdlxValuesExportTuning()
	{
		try
		{
			//Show file dialog
			std::wstring exportPath = filepicker_save(NULL, L"Export tuning and fans settings...", { { L"Setting files", L"*.radt"} });

			//Check file path
			if (exportPath.empty())
			{
				ShowNotification(L"调校与风扇未导出，未设置路径");
				AVDebugWriteLine(L"Tuning and fans not exported, no path set");
				return;
			}

			//Save settings to file
			bool saveResult = TuningFanSettings_Profile_SaveToFile(tuningFanSettingsProfile, exportPath);

			//Set result
			if (saveResult)
			{
				ShowNotification(L"调校和风扇已导出");
				AVDebugWriteLine(L"Tuning and fans exported");
			}
			else
			{
				ShowNotification(L"调校和风扇导出失败");
				AVDebugWriteLine(L"Tuning and fans export failed");
			}
		}
		catch (...)
		{
			//Set result
			ShowNotification(L"调校和风扇未导出，发生异常");
			AVDebugWriteLine(L"Tuning and fans not exported, exception");
		}
	}
}