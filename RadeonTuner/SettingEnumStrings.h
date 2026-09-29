#pragma once
#include "pch.h"

//Registry
const std::vector<std::wstring> REGISTRY_FSR_OTA_CONTROL_STRING =
{
	L"禁用更新", L"最新正式版", L"最新技术预览版"
};

const std::vector<std::wstring> REGISTRY_FRAMEGEN_SEARCH_MODE_STRING =
{
	L"自动", L"标准", L"高"
};

const std::vector<std::wstring> REGISTRY_FRAMEGEN_PERFORMANCE_MODE_STRING =
{
	L"自动", L"质量", L"性能"
};

const std::vector<std::wstring> REGISTRY_FRAMEGEN_RESPONSE_MODE_STRING =
{
	L"重复帧", L"混合帧"
};

const std::vector<std::wstring> REGISTRY_FRAMEGEN_ALGORITHM_MODE_STRING =
{
	L"自动", L"增强", L"标准"
};

const std::vector<std::wstring> REGISTRY_TEXTURE_FILTERING_QUALITY_STRING =
{
	L"高", L"标准", L"性能"
};

//Custom
const std::vector<std::wstring> ADLX_SCE_PROFILE_STRING =
{
	L"已禁用", L"鲜艳游戏", L"动态对比度"
};

const std::vector<std::wstring> ADLX_VARIBRIGHT_LEVEL_STRING =
{
	L"最大化亮度", L"优化亮度", L"均衡", L"优化电池", L"最大化电池续航"
};

const std::vector<std::wstring> ADL_DISPLAY_ORIENTATIONS =
{
	L"横向 (0°)", L"纵向 (90°)", L"横向 (180°)", L"纵向 (270°)"
};

const std::vector<std::wstring> ADL_HDR_TYPE_PREFERENCE =
{
	L"HDR10 配置文件", L"AMD Premium Pro 配置文件"
};

const std::vector<std::wstring> ADL_FSR_MULTIFRAMEGEN_RATIO =
{
	//Index 0, 2, 3, 4
	L"使用应用程序设置", L"2X", L"3X", L"4X"
};

const std::vector<std::wstring> ADL_BOOST2_ALGORITHM =
{
	L"已禁用", L"基于输入", L"基于场景", L"多模式"
};

const std::vector<std::wstring> ADL_BOOST_PERFORMANCE_MODE =
{
	L"质量", L"性能"
};

const std::vector<std::wstring> ADL_FREESYNC_MODE =
{
	L"已禁用", L"可变", L"静态"
};

//ADLX
const std::vector<std::wstring> ADLX_RESULT_STRING =
{
	L"成功", L"已启用", L"已初始化", L"未指定的故障", L"无效参数", L"版本不兼容", L"未知接口", L"ADLX 已终止", L"ADL 初始化失败", L"未找到", L"无效对象", L"孤立对象", L"不支持此功能", L"待处理操作进行中", L"GPU 未活动", L"GPU 正在使用中", L"操作超时", L"功能未启用"
};

const std::vector<std::wstring> ADLX_HG_TYPE_STRING =
{
	L"混合显卡系统", L"AMD 集成显卡", L"非 AMD 集成显卡"
};

const std::vector<std::wstring> ADLX_ASIC_FAMILY_TYPE_STRING =
{
	L"未知", L"Radeon", L"FirePro", L"FireMV", L"FireStream", L"Fusion", L"嵌入式"
};

const std::vector<std::wstring> ADLX_PCI_BUS_TYPE_STRING =
{
	L"未知", L"PCI", L"AGP", L"PCIE 1.0", L"PCIE 2.0", L"PCIE 3.0", L"PCIE 4.0", L"PCIE 5.0", L"PCIE 6.0", L"PCIE 7.0", L"PCIE 8.0", L"PCIE 9.0", L"PCIE 10.0"
};

const std::vector<std::wstring> ADLX_DP_LINK_RATE_STRING =
{
	L"未知", L"1.62 Gbps/Lane", L"2.16 Gbps/Lane", L"2.43 Gbps/Lane", L"2.70 Gbps/Lane", L"4.32 Gbps/Lane", L"5.40 Gbps/Lane", L"8.10 Gbps/Lane", L"10 Gbps/Lane", L"13.5 Gbps/通道", L"20 Gbps/Lane"
};

const std::vector<std::wstring> ADLX_GPU_TYPE_STRING =
{
	L"未知", L"集成显卡", L"独立显卡"
};

const std::vector<std::wstring> ADLX_DISPLAY_CONNECTOR_TYPE_STRING =
{
	L"未知", L"VGA", L"DVI-D", L"DVI-I", L"NTSC", L"JPN", L"Non-I2C JPN", L"Non-I2C NTSC", L"专有", L"HDMI A 型", L"HDMI B 型", L"S-Video", L"复合视频", L"RCA", L"DisplayPort", L"EDP", L"无线显示", L"USB Type-C"
};

const std::vector<std::wstring> ADLX_DISPLAY_TYPE_STRING =
{
	L"未知", L"监视器", L"电视", L"LCD 显示器", L"DFP 显示器", L"分量视频", L"投影仪"
};

const std::vector<std::wstring> ADLX_DISPLAY_SCAN_TYPE_STRING =
{
	L"逐行", L"隔行扫描"//, L"双扫描"
};

const std::vector<std::wstring> ADLX_TIMING_STANDARD_STRING =
{
	L"显示", L"CVT", L"CVT-RB", L"GTF", L"DMT"
};

const std::vector<std::wstring> ADLX_DISPLAY_TIMING_POLARITY_STRING =
{
	L"正值", L"负向"
};

const std::vector<std::wstring> ADLX_SCALE_MODE_STRING =
{
	L"保持宽高比", L"全屏面板", L"居中"
};

const std::vector<std::wstring> ADLX_COLOR_DEPTH_STRING =
{
	L"未知", L"每色 6 位", L"每色 8 位", L"每通道 10 位", L"每色 12 位", L"每色 14 位", L"每颜色 16 位"
};

const std::vector<std::wstring> ADLX_PIXEL_FORMAT_STRING =
{
	L"未知", L"RGB 4:4:4 PC 标准（全 RGB）", L"YCbCr 4:4:4", L"YCbCr 4:2:2", L"RGB 4:4:4 Studio（有限 RGB）", L"YCbCr 4:2:0"
};

const std::vector<std::wstring> ADLX_WAIT_FOR_VERTICAL_REFRESH_MODE_STRING =
{
	L"始终关闭", L"关闭，除非应用程序指定", L"开启，除非应用程序指定", L"始终开启"
};

const std::vector<std::wstring> ADLX_ANTI_ALIASING_MODE_STRING =
{
	L"使用应用程序设置", L"覆盖应用程序设置"
};

const std::vector<std::wstring> ADLX_ANTI_ALIASING_LEVEL_STRING =
{
	//Index 2, 4, 8
	L"2X", L"4X", L"8X"
};

const std::vector<std::wstring> ADLX_ANTI_ALIASING_METHOD_STRING =
{
	L"多重采样", L"自适应多重采样", L"超级采样"
};

const std::vector<std::wstring> ADLX_ANISOTROPIC_FILTERING_LEVEL_STRING =
{
	//Index 0, 2, 4, 8, 16
	L"使用应用程序设置", L"2X", L"4X", L"8X", L"16X"
};

const std::vector<std::wstring> ADLX_TESSELLATION_MODE_STRING =
{
	L"AMD 优化", L"使用应用程序设置", L"覆盖应用程序设置"
};

const std::vector<std::wstring> ADLX_TESSELLATION_LEVEL_STRING =
{
	//Index 1, 2, 4, 6, 8, 16, 32, 64
	L"关闭", L"2X", L"4X", L"6X", L"8X", L"16X", L"32X", L"64X"
};

const std::vector<std::wstring> ADLX_MEMORYTIMING_DESCRIPTION_STRING =
{
	L"默认", L"快速时序"
};

const std::vector<std::wstring> ADLX_SSM_BIAS_MODE_STRING =
{
	L"自动", L"手动"
};

//Memory vendor
std::wstring VramVendorNameFromId(int vramVendorRevId)
{
	switch (vramVendorRevId)
	{
	case ADLvRamVendor_SAMSUNG:
		return L"Samsung";
	case ADLvRamVendor_INFINEON:
		return L"Infineon";
	case ADLvRamVendor_ELPIDA:
		return L"Elpida";
	case ADLvRamVendor_ETRON:
		return L"Etron";
	case ADLvRamVendor_NANYA:
		return L"Nanya";
	case ADLvRamVendor_HYNIX:
		return L"Hynix";
	case ADLvRamVendor_MOSEL:
		return L"Mosel";
	case ADLvRamVendor_WINBOND:
		return L"Winbond";
	case ADLvRamVendor_ESMT:
		return L"Esmt";
	case ADLvRamVendor_MICRON:
		return L"Micron";
	default:
		return L"未知";
	}
}