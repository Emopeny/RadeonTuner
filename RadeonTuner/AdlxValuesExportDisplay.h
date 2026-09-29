#pragma once
#include "pch.h"
#include "MainPage.h"
#include "MainVariables.h"

namespace winrt::RadeonTuner::implementation
{
	void MainPage::AdlxValuesExportDisplay()
	{
		try
		{
			//Show file dialog
			std::wstring exportPath = filepicker_save(NULL, L"Export display settings...", { { L"Setting files", L"*.radd" } });

			//Check file path
			if (exportPath.empty())
			{
				ShowNotification(L"显示未导出，未设置路径");
				AVDebugWriteLine(L"Display not exported, no path set");
				return;
			}

			//Save settings to file
			bool saveResult = DisplaySettings_Profile_SaveToFile(displaySettingsProfile, exportPath);

			//Set result
			if (saveResult)
			{
				ShowNotification(L"显示设置已导出");
				AVDebugWriteLine(L"Display settings exported");
			}
			else
			{
				ShowNotification(L"显示导出失败");
				AVDebugWriteLine(L"Display export failed");
			}
		}
		catch (...)
		{
			//Set result
			ShowNotification(L"显示未导出，发生异常");
			AVDebugWriteLine(L"Display not exported, exception");
		}
	}
}