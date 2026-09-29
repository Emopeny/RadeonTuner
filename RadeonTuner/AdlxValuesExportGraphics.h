#pragma once
#include "pch.h"
#include "MainPage.h"
#include "MainVariables.h"

namespace winrt::RadeonTuner::implementation
{
	void MainPage::AdlxValuesExportGraphics()
	{
		try
		{
			//Show file dialog
			std::wstring exportPath = filepicker_save(NULL, L"Export graphics settings...", { { L"Setting files", L"*.radg"} });

			//Check file path
			if (exportPath.empty())
			{
				ShowNotification(L"显卡设置未导出，未设置路径");
				AVDebugWriteLine(L"Graphics not exported, no path set");
				return;
			}

			//Save settings to file
			bool saveResult = GraphicsSettings_Profile_SaveToFile(graphicsSettingsProfile, exportPath);

			//Set result
			if (saveResult)
			{
				ShowNotification(L"显卡设置已导出");
				AVDebugWriteLine(L"Graphics settings exported");
			}
			else
			{
				ShowNotification(L"显卡设置导出失败");
				AVDebugWriteLine(L"Graphics export failed");
			}
		}
		catch (...)
		{
			//Set result
			ShowNotification(L"显卡未导出，异常");
			AVDebugWriteLine(L"Graphics not exported, exception");
		}
	}
}