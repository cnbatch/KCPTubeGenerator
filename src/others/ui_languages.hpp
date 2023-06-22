#pragma once

#ifndef __UI_LANGUAGES__
#define __UI_LANGUAGES__

#include <map>
#include <string>
#include "configurations.hpp"

namespace languages
{
	enum class entrance_text_id
	{
		please_choose, steps, input_myself, verify_file, readme, cannot_open_file, error_found, no_error
	};

	enum class steps_text_id
	{
		step1, step2, step3, step4,
		steps_readme, steps_port_number, steps_local_bandwidth,
		server_address, server_port_ranges, save_button,
		game_mode_high_loss, game_mode_low_loss, regular_mode_high_loss, regular_mode_low_loss,
		address_not_valid, incorrect_server_address, end_port_larger, port_range_wrong,
		please_input_password, password_not_set, folder_empty, cannot_save, client_conf_path, server_conf_path,
		client_conf_saved, server_conf_saved, client_conf_not_saved, server_conf_not_saved
	};

	enum class userinput_text_id
	{
		client_mode, relay_mode, server_mode,
		kcp_profile_settings, network_settings, security_settings,
		save_log, location, verify_and_save,
		destination_port_select_multiple, destination_port_select_single,
		kcp_profile_settings_fc, kcp_profile_settings_ts,
		network_settings_fc, network_settings_ts, network_settings_relay,
		from_client, to_server, stun_server,
		listen_on_incorrect, address_incorrect, end_port_larger, port_range_wrong,
		please_input_password, password_not_set, folder_empty, cannot_save,
		conf_saved, conf_not_saved
	};

	enum class setting_options_id
	{
		listen_on, listen_port, destination_port, destination_address, dport_refresh,
		encryption_algorithm, encryption_password, udp_timeout, keep_alive, mux_tunnels,
		stun_server, log_path, kcp_mtu, kcp_profile, kcp_sndwnd, kcp_rcvwnd,
		kcp_nodelay, kcp_interval, kcp_resend, kcp_nc,
		outbound_bandwidth, inbound_bandwidth, ipv4_only
	};

	const std::map<entrance_text_id, std::string> entrance_text_id_to_text_chs =
	{
		{entrance_text_id::please_choose, "请选择"},
		{entrance_text_id::steps, "按步骤提示填写"},
		{entrance_text_id::input_myself, "我自己填写"},
		{entrance_text_id::verify_file, "验证现有配置文件"},
		{entrance_text_id::readme, "这是 KCPTube 的配置生成器，不是 KCPTube 程序本身。\n" "记得事先下载 kcptube。\n\n"
		                           "配置生成完成后，Windows 用户可以把配置拖动到\n" "KCPTube 主程序的图标直接启动，无须进入命令行界面。"},
		{entrance_text_id::cannot_open_file, "无法打开文件"},
		{entrance_text_id::error_found, "找到错误"},
		{entrance_text_id::no_error, "检查完成，未发现配置错误。\n\n注意，Log Path 以及主机名的检查并不包括在内，请以 KCPTube 实际运行为准。"}
	};

	const std::map<entrance_text_id, std::string> entrance_text_id_to_text_cht =
	{
		{entrance_text_id::please_choose, "請選擇"},
		{entrance_text_id::steps, "按步驟提示填寫"},
		{entrance_text_id::input_myself, "我自己填寫"},
		{entrance_text_id::verify_file, "驗證現有設定檔"},
		{entrance_text_id::readme, "這是 KCPTube 的配置生成器，不是 KCPTube 程式本身。\n" "記得事先下載 kcptube。\n\n"
		                           "配置生成完成後，Windows 使用者可以把配置拖動到\n" "KCPTube 主程序的 Icon 直接啟動，無須進入命令列介面。"},
		{entrance_text_id::cannot_open_file, "無法打開檔案"},
		{entrance_text_id::error_found, "找到錯誤"},
		{entrance_text_id::no_error, "檢查完成，未發現配置錯誤。\n\n注意，Log Path 以及主機名稱的檢查並不包括在內，請以 KCPTube 實際運行為准。"}
	};

	const std::map<entrance_text_id, std::string> entrance_text_id_to_text_eng =
	{
		{entrance_text_id::please_choose, "Please Choose an option"},
		{entrance_text_id::steps, "Step by Steps"},
		{entrance_text_id::input_myself, "I want to input by myself"},
		{entrance_text_id::verify_file, "Verify Config File"},
		{entrance_text_id::readme, "This is configuration file generator of KCPTube,\nbut not KCPTube itself. Please download kcptube first。\n\n"
		                           "When configuration is generated, Windows user can\ndrag the file onto KCPTube's programme icon to launch the application.\n"
		                           "Command Line Prmpot Window is not required"},
		{entrance_text_id::cannot_open_file, "Cannot Open File"},
		{entrance_text_id::error_found, "Error Found"},
		{entrance_text_id::no_error, "Verify Completed. No Error is found.\n\nNote: Log Path and hostname are not verified. Please run kcptube directly for further checking."}
	};

	const std::map<steps_text_id, std::string> steps_text_id_to_text_chs =
	{
		{steps_text_id::step1, "第一步"},
		{steps_text_id::step2, "第二步"},
		{steps_text_id::step3, "第三步（可选）"},
		{steps_text_id::step4, "第四步，保存文件"},
		{steps_text_id::steps_readme, "请输入目标程序相互间的通讯端口。\n例如，OpenVPN可能是1194，Wireguard可能是51820。\n"
		                              "注意，这里假定应用程序与 KCPTube 都运行在同一台机器。\n\n" "如果运行在不同机器，请返回入口处使用“我自己填写”按钮，\n或自己手写配置文件。\n"},
		{steps_text_id::steps_port_number, "请键入目标程序的通讯端口号"},
		{steps_text_id::steps_local_bandwidth, "请输入本机或客户端的带宽"},
		{steps_text_id::server_address, "KCPTube 服务器地址（域名或 IP）"},
		{steps_text_id::server_port_ranges, "KCPTube 服务器端口范围"},
		{steps_text_id::save_button, "保存"},
		{steps_text_id::game_mode_high_loss, "游戏模式（高丢包率）"},
		{steps_text_id::game_mode_low_loss, "游戏模式（低丢包率）"},
		{steps_text_id::regular_mode_high_loss, "普通应用模式（高丢包率）"},
		{steps_text_id::regular_mode_low_loss, "普通应用模式（低丢包率）"},
		{steps_text_id::address_not_valid, "并非有效的地址格式"},
		{steps_text_id::incorrect_server_address, "服务器地址不正确"},
		{steps_text_id::end_port_larger, "起始端口不能大于结束端口"},
		{steps_text_id::port_range_wrong, "端口范围不正确"},
		{steps_text_id::please_input_password, "请输入加密用的密码"},
		{steps_text_id::password_not_set, "密码未设置"},
		{steps_text_id::folder_empty, "请选择路径，再按保存"},
		{steps_text_id::cannot_save, "无法保存"},
		{steps_text_id::client_conf_path, "客户端模式配置文件位置"},
		{steps_text_id::server_conf_path, "服务器模式配置文件位置"},
		{steps_text_id::client_conf_saved, "客户端模式配置文件已保存"},
		{steps_text_id::client_conf_not_saved, "客户端模式配置文件无法保存"},
		{steps_text_id::server_conf_saved, "服务器模式配置文件已保存"},
		{steps_text_id::server_conf_not_saved, "服务器模式配置文件无法保存"}
	};

	const std::map<steps_text_id, std::string> steps_text_id_to_text_cht =
	{
		{steps_text_id::step1, "第一步"},
		{steps_text_id::step2, "第二步"},
		{steps_text_id::step3, "第三步（非必選）"},
		{steps_text_id::step4, "第四步，保存"},
		{steps_text_id::steps_readme, "請鍵入目的程式相互間的通訊埠。\n例如，OpenVPN可能是1194，Wireguard可能是51820。\n"
		                              "注意，這裡假定應用程式與 KCPTube 都運行在同一台機器。\n\n" "如果運行在不同機器，請返回入口處使用“我自己填寫”按鈕，\n或自己手寫設定檔。\n"},
		{steps_text_id::steps_port_number, "請鍵入目的程式的通訊埠"},
		{steps_text_id::steps_local_bandwidth, "請鍵入本機或用戶端的頻寬"},
		{steps_text_id::server_address, "KCPTube 伺服器地址（域名或 IP）"},
		{steps_text_id::server_port_ranges, "KCPTube 伺服器通訊埠範圍"},
		{steps_text_id::save_button, "保存"},
		{steps_text_id::game_mode_high_loss, "遊戲模式（高丢包率）"},
		{steps_text_id::game_mode_low_loss, "遊戲模式（低丢包率）"},
		{steps_text_id::regular_mode_high_loss, "普通應用模式（高丢包率）"},
		{steps_text_id::regular_mode_low_loss, "普通應用模式（低丢包率）"},
		{steps_text_id::address_not_valid, "並非有效的位址格式"},
		{steps_text_id::incorrect_server_address, "伺服器位址不正確"},
		{steps_text_id::end_port_larger, "起始埠號不能大於結束埠號"},
		{steps_text_id::port_range_wrong, "通訊埠號範圍不正確"},
		{steps_text_id::please_input_password, "請鍵入加密用的密碼"},
		{steps_text_id::password_not_set, "密碼未設置"},
		{steps_text_id::folder_empty, "請選擇路徑，再按保存"},
		{steps_text_id::cannot_save, "無法保存"},
		{steps_text_id::client_conf_path, "用戶端模式設定檔位置"},
		{steps_text_id::server_conf_path, "伺服器模式設定檔位置"},
		{steps_text_id::client_conf_saved, "用戶端模式設定檔已保存"},
		{steps_text_id::client_conf_not_saved, "用戶端模式設定檔無法保存"},
		{steps_text_id::server_conf_saved, "伺服器模式設定檔已保存"},
		{steps_text_id::server_conf_not_saved, "伺服器模式設定檔檔無法保存"}

	};

	const std::map<steps_text_id, std::string> steps_text_id_to_text_eng =
	{
		{steps_text_id::step1, "Step 1"},
		{steps_text_id::step2, "Step 2"},
		{steps_text_id::step3, "Step 3 (Optionals)"},
		{steps_text_id::step4, "Step 4, save file to path"},
		{steps_text_id::steps_readme, "Please enter the communication port of the target program.\nFor example, OpenVPN may be 1194, and Wireguard may be 51820.\n"
									  "Note that this assumes that the target program and KCPTube are both\nrunning on the same machine.\n\n"
		                              "If they are running on different machines, please return to the entrance\nand use the ‘I will enter it myself’ button, or\nmanually write the configuration file.\n"},
		{steps_text_id::steps_port_number, "Please input the Port Number of targe program"},
		{steps_text_id::steps_local_bandwidth, "Please input the bandwidthes of localhost or client"},
		{steps_text_id::server_address, "KCPTube Server Address (domain or IP)"},
		{steps_text_id::server_port_ranges, "KCPTube servers's port ranges"},
		{steps_text_id::save_button, "Save"},
		{steps_text_id::game_mode_high_loss, "Game Mode (High Packet Loss)"},
		{steps_text_id::game_mode_low_loss, "Game Mode (Low Packet Loss)"},
		{steps_text_id::regular_mode_high_loss, "Internet Browsing Mode (High Packet Loss)"},
		{steps_text_id::regular_mode_low_loss, "Internet Browsing Mode (Low Packet Loss)"},
		{steps_text_id::address_not_valid, " is not a valid address"},
		{steps_text_id::incorrect_server_address, "Inccorrect Server Address"},
		{steps_text_id::end_port_larger, "End port must larger than Start port"},
		{steps_text_id::port_range_wrong, "Incorrect Port Range"},
		{steps_text_id::please_input_password, "Please input Encryption Password"},
		{steps_text_id::password_not_set, "Password not set"},
		{steps_text_id::folder_empty, "Path is empty, please select a valid path"},
		{steps_text_id::cannot_save, "File cannot be saved"},
		{steps_text_id::client_conf_path, "Configuration File Path (Client Mode)"},
		{steps_text_id::server_conf_path, "Configuration File Path (Server Mode)"},
		{steps_text_id::client_conf_saved, "Configuration File Path (Client Mode) is saved"},
		{steps_text_id::client_conf_not_saved, "Configuration File Path (Client Mode) can't be saved"},
		{steps_text_id::server_conf_saved, "Configuration File Path (Server Mode) is saved"},
		{steps_text_id::server_conf_not_saved, "Configuration File Path (Server Mode) can't be saved"}
	};


	const std::map<userinput_text_id, std::string> userinput_text_id_to_text_chs =
	{
		{userinput_text_id::client_mode, "客户端模式"},
		{userinput_text_id::relay_mode, "中继模式"},
		{userinput_text_id::server_mode, "服务器模式"},
		{userinput_text_id::kcp_profile_settings, "KCP 配置设定"},
		{userinput_text_id::network_settings, "网络设置"},
		{userinput_text_id::security_settings, "安全设置"},
		{userinput_text_id::save_log, "是否保存日志"},
		{userinput_text_id::location, "位置"},
		{userinput_text_id::verify_and_save, "验证设置并保存文件"},
		{userinput_text_id::destination_port_select_multiple, "端口范围模式"},
		{userinput_text_id::destination_port_select_single, "单端口模式"},
		{userinput_text_id::kcp_profile_settings_fc, "KCP 配置设定（连接客户端）"},
		{userinput_text_id::kcp_profile_settings_ts, "KCP 配置设定（连接服务器）"},
		{userinput_text_id::network_settings_fc, "网络设置（连接客户端）"},
		{userinput_text_id::network_settings_ts, "网络设置（连接服务器）"},
		{userinput_text_id::network_settings_relay, "网络设置（中继自身）"},
		{userinput_text_id::from_client, "连接客户端"},
		{userinput_text_id::to_server, "连接服务器"},
		{userinput_text_id::stun_server, "使用 STUN 服务做 NAT 打洞"},
		{userinput_text_id::listen_on_incorrect, "监听地址无效，请输入有效的 IP 地址"},
		{userinput_text_id::address_incorrect, "目标地址不正确"},
		{userinput_text_id::end_port_larger, "起始端口不能大于结束端口"},
		{userinput_text_id::port_range_wrong, "端口范围不正确"},
		{userinput_text_id::please_input_password, "请输入加密用的密码"},
		{userinput_text_id::password_not_set, "密码未设置"},
		{userinput_text_id::folder_empty, "请选择路径，再按保存"},
		{userinput_text_id::cannot_save, "无法保存"},
		{userinput_text_id::conf_saved, "配置文件已保存"},
		{userinput_text_id::conf_not_saved, "配置文件无法保存"}
	};

	const std::map<userinput_text_id, std::string> userinput_text_id_to_text_cht =
	{
		{userinput_text_id::client_mode, "用戶端模式"},
		{userinput_text_id::relay_mode, "中繼模式"},
		{userinput_text_id::server_mode, "伺服器模式"},
		{userinput_text_id::kcp_profile_settings, "KCP 配置設定"},
		{userinput_text_id::network_settings, "網絡設置"},
		{userinput_text_id::security_settings, "安全設置"},
		{userinput_text_id::save_log, "是否保存日誌"},
		{userinput_text_id::location, "位置"},
		{userinput_text_id::verify_and_save, "驗證設置並保存設定檔"},
		{userinput_text_id::destination_port_select_multiple, "通訊埠範圍模式"},
		{userinput_text_id::destination_port_select_single, "單通訊埠模式"},
		{userinput_text_id::kcp_profile_settings_fc, "KCP 配置設定（連接用戶端）"},
		{userinput_text_id::kcp_profile_settings_ts, "KCP 配置設定（連接伺服器）"},
		{userinput_text_id::network_settings_fc, "網絡設置（連接用戶端）"},
		{userinput_text_id::network_settings_ts, "網絡設置（連接伺服器）"},
		{userinput_text_id::network_settings_relay, "網絡設置（中繼自身）"},
		{userinput_text_id::from_client, "連接用戶端"},
		{userinput_text_id::to_server, "連接伺服器"},
		{userinput_text_id::stun_server, "使用 STUN 服務做 NAT 打洞"},
		{userinput_text_id::listen_on_incorrect, "監聽地址無效，請鍵入有效的 IP 位址"},
		{userinput_text_id::address_incorrect, "目標位址不正確"},
		{userinput_text_id::end_port_larger, "起始埠號不能大於結束埠號"},
		{userinput_text_id::port_range_wrong, "通訊埠號範圍不正確"},
		{userinput_text_id::please_input_password, "請鍵入加密用的密碼"},
		{userinput_text_id::password_not_set, "密碼未設置"},
		{userinput_text_id::folder_empty, "請選擇路徑，再按保存"},
		{userinput_text_id::cannot_save, "無法保存"},
		{userinput_text_id::conf_saved, "設定檔已保存"},
		{userinput_text_id::conf_not_saved, "設定檔無法保存"}
	};

	const std::map<userinput_text_id, std::string> userinput_text_id_to_text_eng =
	{
		{userinput_text_id::client_mode, "Client Mode"},
		{userinput_text_id::relay_mode, "Relay Mode"},
		{userinput_text_id::server_mode, "Server Mode"},
		{userinput_text_id::kcp_profile_settings, "KCP Profile Settings"},
		{userinput_text_id::network_settings, "Network Settings"},
		{userinput_text_id::security_settings, "Security Settings"},
		{userinput_text_id::save_log, "Save Log to Path"},
		{userinput_text_id::location, "Location"},
		{userinput_text_id::verify_and_save, "Verify and Save"},
		{userinput_text_id::destination_port_select_multiple, "Port Ranges Mode"},
		{userinput_text_id::destination_port_select_single, "Single Port Mode"},
		{userinput_text_id::kcp_profile_settings_fc, "KCP Profile Settings (From Client)"},
		{userinput_text_id::kcp_profile_settings_ts, "KCP Profile Settings (To Server)"},
		{userinput_text_id::network_settings_fc, "Network Settings (From Client)"},
		{userinput_text_id::network_settings_ts, "Network Settings (To Server)"},
		{userinput_text_id::network_settings_relay, "Network Settings (Relay Node)"},
		{userinput_text_id::from_client, "From Client"},
		{userinput_text_id::to_server, "To Server"},
		{userinput_text_id::stun_server, "Use STUN Server for NAT hole punching"},
		{userinput_text_id::listen_on_incorrect, "listen address is not a valid IP address"},
		{userinput_text_id::address_incorrect, "destation address incorrect"},
		{userinput_text_id::end_port_larger, "End port must larger than Start port"},
		{userinput_text_id::port_range_wrong, "Incorrect Port Range"},
		{userinput_text_id::please_input_password, "Please input Encryption Password"},
		{userinput_text_id::password_not_set, "Password not set"},
		{userinput_text_id::folder_empty, "Path is empty, please select a valid path"},
		{userinput_text_id::cannot_save, "File cannot be saved"},
		{userinput_text_id::conf_saved, "Configuration File Path is saved"},
		{userinput_text_id::conf_not_saved, "Configuration File Path can't be saved"}
	};

	const std::map<setting_options_id, std::string> setting_options_id_to_text_chs =
	{
		{setting_options_id::listen_on, "监听地址"},
		{setting_options_id::listen_port, "监听端口"},
		{setting_options_id::destination_port, "目标端口"},
		{setting_options_id::destination_address, "目标地址"},
		{setting_options_id::dport_refresh, "端口动态刷新时间（秒）"},
		{setting_options_id::encryption_algorithm, "加密算法"},
		{setting_options_id::encryption_password, "加密密码"},
		{setting_options_id::udp_timeout, "UDP 超时时间（秒）"},
		{setting_options_id::keep_alive, "心跳保活（秒）"},
		{setting_options_id::mux_tunnels, "多路复用"},
		{setting_options_id::stun_server, "STUN 服务器"},
		{setting_options_id::log_path, "日志路径"},
		{setting_options_id::kcp_mtu, "最大传输单元 (MTU)"},
		{setting_options_id::kcp_profile, "KCP 配置"},
		{setting_options_id::kcp_sndwnd, "KCP 发送窗口"},
		{setting_options_id::kcp_rcvwnd, "KCP 接收窗口"},
		{setting_options_id::kcp_nodelay, "kcp->nodelay"},
		{setting_options_id::kcp_interval, "kcp->interval"},
		{setting_options_id::kcp_resend, "kcp->resend"},
		{setting_options_id::kcp_nc, "kcp->nc"},
		{setting_options_id::outbound_bandwidth, "出站带宽"},
		{setting_options_id::inbound_bandwidth, "入站带宽"},
		{setting_options_id::ipv4_only, "仅使用 IPv4"}
	};

	const std::map<setting_options_id, std::string> setting_options_id_to_text_cht =
	{
		{setting_options_id::listen_on, "監聽地址"},
		{setting_options_id::listen_port, "監聽通訊埠"},
		{setting_options_id::destination_port, "目標通訊埠"},
		{setting_options_id::destination_address, "目標位址"},
		{setting_options_id::dport_refresh, "通訊埠動態刷新時間（秒）"},
		{setting_options_id::encryption_algorithm, "加密演算法"},
		{setting_options_id::encryption_password, "加密密碼"},
		{setting_options_id::udp_timeout, "UDP 超時時間（秒）"},
		{setting_options_id::keep_alive, "心跳保活（秒）"},
		{setting_options_id::mux_tunnels, "多路複用"},
		{setting_options_id::stun_server, "STUN 伺服器"},
		{setting_options_id::log_path, "日誌路徑"},
		{setting_options_id::kcp_mtu, "最大傳輸單元 (MTU)"},
		{setting_options_id::kcp_profile, "KCP 配置"},
		{setting_options_id::kcp_sndwnd, "KCP 發送窗口"},
		{setting_options_id::kcp_rcvwnd, "KCP 接收窗口"},
		{setting_options_id::kcp_nodelay, "kcp->nodelay"},
		{setting_options_id::kcp_interval, "kcp->interval"},
		{setting_options_id::kcp_resend, "kcp->resend"},
		{setting_options_id::kcp_nc, "kcp->nc"},
		{setting_options_id::outbound_bandwidth, "出站頻寬"},
		{setting_options_id::inbound_bandwidth, "入站頻寬"},
		{setting_options_id::ipv4_only, "僅使用 IPv4"}
	};

	const std::map<setting_options_id, std::string> setting_options_id_to_text_eng =
	{
		{setting_options_id::listen_on, "Listen On Address"},
		{setting_options_id::listen_port, "Listen Port Number"},
		{setting_options_id::destination_port, "Destination Port"},
		{setting_options_id::destination_address, "Destination Address"},
		{setting_options_id::dport_refresh, "Dynamic Port Refresh (seconds)"},
		{setting_options_id::encryption_algorithm, "Encryption Algorithm"},
		{setting_options_id::encryption_password, "Encryption Password"},
		{setting_options_id::udp_timeout, "UDP Timeout (seconds)"},
		{setting_options_id::keep_alive, "Keep Alive (seconds)"},
		{setting_options_id::mux_tunnels, "MUX Tunnels"},
		{setting_options_id::stun_server, "STUN Server"},
		{setting_options_id::log_path, "Log Path"},
		{setting_options_id::kcp_mtu, "Maximum Transmission Unit"},
		{setting_options_id::kcp_profile, "KCP Profile"},
		{setting_options_id::kcp_sndwnd, "KCP Send Window"},
		{setting_options_id::kcp_rcvwnd, "KCP Receive Window"},
		{setting_options_id::kcp_nodelay, "kcp->nodelay"},
		{setting_options_id::kcp_interval, "kcp->interval"},
		{setting_options_id::kcp_resend, "kcp->resend"},
		{setting_options_id::kcp_nc, "kcp->nc"},
		{setting_options_id::outbound_bandwidth, "Outbound Bandwidth"},
		{setting_options_id::inbound_bandwidth, "Inbound Bandwidth"},
		{setting_options_id::ipv4_only, "IPv4 Only"}
	};

	const std::map<kcp_mode, std::string> kcp_mode_to_text_chs =
	{
		{kcp_mode::regular1, "常速1"},
		{kcp_mode::regular2, "常速2"},
		{kcp_mode::regular3, "常速3"},
		{kcp_mode::regular4, "常速4"},
		{kcp_mode::regular5, "常速5"},
		{kcp_mode::fast1, "快速1"},
		{kcp_mode::fast2, "快速2"},
		{kcp_mode::fast3, "快速3"},
		{kcp_mode::fast4, "快速4"},
		{kcp_mode::fast5, "快速5"},
		{kcp_mode::fast6, "快速6"},
		{kcp_mode::manual, "手动输入"}
	};

	const std::map<kcp_mode, std::string> kcp_mode_to_text_cht =
	{
		{kcp_mode::regular1, "常速1"},
		{kcp_mode::regular2, "常速2"},
		{kcp_mode::regular3, "常速3"},
		{kcp_mode::regular4, "常速4"},
		{kcp_mode::regular5, "常速5"},
		{kcp_mode::fast1, "快速1"},
		{kcp_mode::fast2, "快速2"},
		{kcp_mode::fast3, "快速3"},
		{kcp_mode::fast4, "快速4"},
		{kcp_mode::fast5, "快速5"},
		{kcp_mode::fast6, "快速6"},
		{kcp_mode::manual, "手工鍵入"}
	};

	const std::map<kcp_mode, std::string> kcp_mode_to_text_eng =
	{
		{kcp_mode::regular1, "regular1"},
		{kcp_mode::regular2, "regular2"},
		{kcp_mode::regular3, "regular3"},
		{kcp_mode::regular4, "regular4"},
		{kcp_mode::regular5, "regular5"},
		{kcp_mode::fast1, "fast1"},
		{kcp_mode::fast2, "fast2"},
		{kcp_mode::fast3, "fast3"},
		{kcp_mode::fast4, "fast4"},
		{kcp_mode::fast5, "fast5"},
		{kcp_mode::fast6, "fast6"},
		{kcp_mode::manual, "manual"}
	};

	const std::map<encryption_mode, std::string> encryption_mode_to_text_chs =
	{
		{encryption_mode::none, "不加密"},
		{encryption_mode::aes_gcm, "AES-256-GCM"},
		{encryption_mode::aes_ocb, "AES-256-OCB"},
		{encryption_mode::chacha20, "ChaCha20-Poly1305"},
		{encryption_mode::xchacha20, "XChaCha20-Poly1305"}
	};

	const std::map<encryption_mode, std::string> encryption_mode_to_text_cht =
	{
		{encryption_mode::none, "不加密"},
		{encryption_mode::aes_gcm, "AES-256-GCM"},
		{encryption_mode::aes_ocb, "AES-256-OCB"},
		{encryption_mode::chacha20, "ChaCha20-Poly1305"},
		{encryption_mode::xchacha20, "XChaCha20-Poly1305"}
	};

	const std::map<encryption_mode, std::string> encryption_mode_to_text_eng =
	{
		{encryption_mode::none, "No Encryption"},
		{encryption_mode::aes_gcm, "AES-256-GCM"},
		{encryption_mode::aes_ocb, "AES-256-OCB"},
		{encryption_mode::chacha20, "ChaCha20-Poly1305"},
		{encryption_mode::xchacha20, "XChaCha20-Poly1305"}
	};
}

#endif // !__UI_LANGUAGES__
