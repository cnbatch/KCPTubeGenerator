#include "KCPTubeGeneratorStepByStep.h"

KCPTubeGeneratorStepByStep::KCPTubeGeneratorStepByStep(wxWindow* parent)
	:
	StepByStep(parent)
{
	PutTextOnScreen();
	AdjustUI();
}

void KCPTubeGeneratorStepByStep::Step2EncryptionOnChoice(wxCommandEvent& event)
{
	bool use_encryption = m_choice_sbs_s2_encryption->GetSelection() != 0;
	m_textCtrl_sbs_s2_password->Enable(use_encryption);
}

void KCPTubeGeneratorStepByStep::Step3MTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_sbs_s3_mtu->Enable(m_checkBox_sbs_s3_mtu->IsChecked());
}

void KCPTubeGeneratorStepByStep::Step3DPortRefreshOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_sbs_s3_dportre_fresh->Enable(m_checkBox_sbs_s3_dport_refresh->IsChecked());
}

void KCPTubeGeneratorStepByStep::Step3UDPTimeoutOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_sbs_s3_udp_timeout->Enable(m_checkBox_sbs_s3_udp_timtout->IsChecked());
}

void KCPTubeGeneratorStepByStep::Step3KeepAliveOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_sbs_s3_keepalive->Enable(m_checkBox_sbs_s3_keepalive->IsChecked());
}

void KCPTubeGeneratorStepByStep::Step3MuxTunnelsOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_sbs_s3_mux_tunnels->Enable(m_checkBox_sbs_s3_mux_tunnels->IsChecked());
}

void KCPTubeGeneratorStepByStep::Step3FECOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_sbs_s3_fec_data->Enable(m_checkBox_sbs_s3_fec->IsChecked());
	m_spinCtrl_sbs_s3_fec_redundant->Enable(m_checkBox_sbs_s3_fec->IsChecked());
}

void KCPTubeGeneratorStepByStep::Step4SaveFileOnButtonClick(wxCommandEvent& event)
{
	wxString client_file_path = m_filePicker_sbs_s4_client->GetPath();
	wxString server_file_path = m_filePicker_sbs_s4_server->GetPath();
	if (client_file_path.IsEmpty() || server_file_path.IsEmpty())
	{
		wxMessageBox(steps_text_id_to_text[languages::steps_text_id::folder_empty],
			steps_text_id_to_text[languages::steps_text_id::cannot_save],
			wxICON_EXCLAMATION, this);
		return;
	}

	if (VerifyUserSelections())
		CreateUserSettingFile();
}


bool KCPTubeGeneratorStepByStep::VerifyUserSelections()
{
	wxString input_address = m_textCtrl_sbs_s2_server_address->GetValue();
	std::string input_address_std = input_address.ToStdString();
	if (!is_valid_domain(input_address_std) && !is_valid_ip(input_address_std))
	{
		wxMessageBox(input_address + steps_text_id_to_text[languages::steps_text_id::address_not_valid],
			steps_text_id_to_text[languages::steps_text_id::incorrect_server_address],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_spinCtrl_sbs_s2_server_port1->GetValue() > m_spinCtrl_sbs_s2_server_port2->GetValue())
	{
		wxMessageBox(steps_text_id_to_text[languages::steps_text_id::end_port_larger],
			steps_text_id_to_text[languages::steps_text_id::port_range_wrong],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_sbs_s2_encryption->GetSelection() != 0 && m_textCtrl_sbs_s2_password->IsEmpty())
	{
		wxMessageBox(steps_text_id_to_text[languages::steps_text_id::please_input_password],
			steps_text_id_to_text[languages::steps_text_id::password_not_set],
			wxICON_EXCLAMATION, this);
		return false;
	}

	return true;
}

void KCPTubeGeneratorStepByStep::PutTextOnScreen()
{
	wxLocale wx_local;
	wx_local.Init();
	int current_language_region = wx_local.GetSystemLanguage();

	switch (current_language_region)
	{
	case wxLANGUAGE_CHINESE:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_CHINA:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_SIMPLIFIED_EXPLICIT:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_SIMPLIFIED_HONGKONG:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_SIMPLIFIED_MACAO:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_SINGAPORE:
		steps_text_id_to_text = all_std_string_to_wxstring(languages::steps_text_id_to_text_chs);
		setting_options_id_to_text = all_std_string_to_wxstring(languages::setting_options_id_to_text_chs);
		kcp_mode_to_text = all_std_string_to_wxstring(languages::kcp_mode_to_text_chs);
		encryption_mode_to_text = all_std_string_to_wxstring(languages::encryption_mode_to_text_chs);
		break;

	case wxLANGUAGE_CHINESE_HONGKONG:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_MACAO:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_TAIWAN:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_TRADITIONAL_EXPLICIT:
		steps_text_id_to_text = all_std_string_to_wxstring(languages::steps_text_id_to_text_cht);
		setting_options_id_to_text = all_std_string_to_wxstring(languages::setting_options_id_to_text_cht);
		kcp_mode_to_text = all_std_string_to_wxstring(languages::kcp_mode_to_text_cht);
		encryption_mode_to_text = all_std_string_to_wxstring(languages::encryption_mode_to_text_cht);
		break;

	default:
		steps_text_id_to_text = all_std_string_to_wxstring(languages::steps_text_id_to_text_eng);
		setting_options_id_to_text = all_std_string_to_wxstring(languages::setting_options_id_to_text_eng);
		kcp_mode_to_text = all_std_string_to_wxstring(languages::kcp_mode_to_text_eng);
		encryption_mode_to_text = all_std_string_to_wxstring(languages::encryption_mode_to_text_eng);
		break;
	}

	sbSizer_stepbystep_s1->GetStaticBox()->SetLabelText(steps_text_id_to_text[languages::steps_text_id::step1]);
	sbSizer_stepbystep_s2->GetStaticBox()->SetLabelText(steps_text_id_to_text[languages::steps_text_id::step2]);
	sbSizer_stepbystep_s3->GetStaticBox()->SetLabelText(steps_text_id_to_text[languages::steps_text_id::step3]);
	sbSizer_stepbystep_s4_savefile->GetStaticBox()->SetLabelText(steps_text_id_to_text[languages::steps_text_id::step4]);
	m_staticText_sbs_s1_readme->SetLabelText(steps_text_id_to_text[languages::steps_text_id::steps_readme]);
	m_staticText_sbs_s1_port->SetLabelText(steps_text_id_to_text[languages::steps_text_id::steps_port_number]);
	m_staticText_sbs_local_bandwidths->SetLabelText(steps_text_id_to_text[languages::steps_text_id::steps_local_bandwidth]);
	m_staticText_sbs_s1_outbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::outbound_bandwidth]);
	m_staticText_sbs_s1_inbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::inbound_bandwidth]);
	m_staticText_sbs_s2_kcp->SetLabelText(setting_options_id_to_text[languages::setting_options_id::kcp_profile]);
	m_staticText_sbs_s2_server_address->SetLabelText(steps_text_id_to_text[languages::steps_text_id::server_address]);
	m_staticText_sbs_s2_server_ports->SetLabelText(steps_text_id_to_text[languages::steps_text_id::server_port_ranges]);
	m_staticText_sbs_encryption->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_algorithm]);
	m_staticText_sbs_s2_password->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_password]);
	m_staticText_sbs_s2_outbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::outbound_bandwidth]);
	m_staticText_sbs_s2_inbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::inbound_bandwidth]);
	m_checkBox_sbs_s3_mtu->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mtu]);
	m_checkBox_sbs_s3_dport_refresh->SetLabelText(setting_options_id_to_text[languages::setting_options_id::dport_refresh]);
	m_checkBox_sbs_s3_udp_timtout->SetLabelText(setting_options_id_to_text[languages::setting_options_id::udp_timeout]);
	m_checkBox_sbs_s3_keepalive->SetLabelText(setting_options_id_to_text[languages::setting_options_id::keep_alive]);
	m_checkBox_sbs_s3_mux_tunnels->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mux_tunnels]);
	m_checkBox_sbs_s3_fec->SetLabelText(setting_options_id_to_text[languages::setting_options_id::fec]);
	m_button_sbs_s4_save_file->SetLabelText(steps_text_id_to_text[languages::steps_text_id::save_button]);
	m_staticText_sbs_s4_client->SetLabelText(steps_text_id_to_text[languages::steps_text_id::client_conf_path]);
	m_staticText_sbs_s4_server->SetLabelText(steps_text_id_to_text[languages::steps_text_id::server_conf_path]);

	m_choice_sbs_s2_kcp->SetString(0, steps_text_id_to_text[languages::steps_text_id::game_mode_high_loss]);
	m_choice_sbs_s2_kcp->SetString(1, steps_text_id_to_text[languages::steps_text_id::game_mode_low_loss]);
	m_choice_sbs_s2_kcp->SetString(2, steps_text_id_to_text[languages::steps_text_id::regular_mode_high_loss]);
	m_choice_sbs_s2_kcp->SetString(3, steps_text_id_to_text[languages::steps_text_id::regular_mode_low_loss]);
	m_choice_sbs_s2_encryption->SetString(0, encryption_mode_to_text[encryption_mode::none]);

	m_spinCtrl_sbs_s3_fec_data->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_data]);
	m_spinCtrl_sbs_s3_fec_redundant->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_redundant]);
}

void KCPTubeGeneratorStepByStep::CreateUserSettingFile()
{
	wxString client_settings, server_settings;
	client_settings = "mode=client\n";
	server_settings = "mode=server\n";

	int user_app_port = m_spinCtrl_sbs_s1_port->GetValue();
	client_settings += ("listen_port=" + std::to_string(user_app_port) + "\n");
	server_settings += ("destination_address=127.0.0.1\n");
	server_settings += ("destination_port=" + std::to_string(user_app_port) + "\n");

	wxString output_bandwidth_client = bandwidth_seletion_to_string(m_spinCtrl_sbs_s1_outbound_bandwidth->GetValue(), m_choice_sbs_s1_outbound_bandwidth->GetSelection());
	wxString input_bandwidth_client = bandwidth_seletion_to_string(m_spinCtrl_sbs_s1_inbound_bandwidth->GetValue(), m_choice_sbs_s1_inbound_bandwidth->GetSelection());
	client_settings += ("outbound_bandwidth=" + output_bandwidth_client + "\n");
	client_settings += ("inbound_bandwidth=" + input_bandwidth_client + "\n");

	wxString kcp_profile = steps_kcp_profile_to_string(m_choice_sbs_s2_kcp->GetSelection());
	client_settings += ("kcp=" + kcp_profile + "\n");
	server_settings += ("kcp=" + kcp_profile + "\n");

	wxString destination_address = m_textCtrl_sbs_s2_server_address->GetValue();
	client_settings += ("destination_address=" + destination_address + "\n");

	int port_start = m_spinCtrl_sbs_s2_server_port1->GetValue();
	int port_end = m_spinCtrl_sbs_s2_server_port2->GetValue();
	wxString destination_port;
	if (port_start != port_end)
		destination_port = std::to_string(port_start) + "-" + std::to_string(port_end);
	else
		destination_port = std::to_string(port_start);
	client_settings += ("destination_port=" + destination_port + "\n");
	server_settings += ("listen_port=" + destination_port + "\n");


	if (m_choice_sbs_s2_encryption->GetSelection() != 0)
	{
		wxString encryption_algorithm = encryption_selection_to_string(m_choice_sbs_s2_encryption->GetSelection());
		wxString encryption_password = m_textCtrl_sbs_s2_password->GetValue();
		client_settings += ("encryption_algorithm=" + encryption_algorithm + "\n");
		client_settings += ("encryption_password=" + encryption_password + "\n");
		server_settings += ("encryption_algorithm=" + encryption_algorithm + "\n");
		server_settings += ("encryption_password=" + encryption_password + "\n");
	}

	wxString output_bandwidth_server = bandwidth_seletion_to_string(m_spinCtrl_sbs_s2_outbound_bandwidth->GetValue(), m_choice_sbs_s2_outbound_bandwidth->GetSelection());
	wxString input_bandwidth_server = bandwidth_seletion_to_string(m_spinCtrl_sbs_s2_inbound_bandwidth->GetValue(), m_choice_sbs_s2_inbound_bandwidth->GetSelection());
	server_settings += ("outbound_bandwidth=" + output_bandwidth_server + "\n");
	server_settings += ("inbound_bandwidth=" + input_bandwidth_server + "\n");

	if (m_checkBox_sbs_s3_mtu->IsChecked() && m_spinCtrl_sbs_s3_mtu->GetValue() > 0)
	{
		wxString mtu_value = m_spinCtrl_sbs_s3_mtu->GetTextValue();
		client_settings += ("mtu=" + mtu_value + "\n");
		server_settings += ("mtu=" + mtu_value + "\n");
	}

	if (m_checkBox_sbs_s3_dport_refresh->IsChecked() && m_spinCtrl_sbs_s3_dportre_fresh->GetValue() > 0)
	{
		wxString dport_refresh = m_spinCtrl_sbs_s3_dportre_fresh->GetTextValue();
		client_settings += ("dport_refresh=" + dport_refresh + "\n");
	}

	if (m_checkBox_sbs_s3_udp_timtout->IsChecked() && m_spinCtrl_sbs_s3_udp_timeout->GetValue() > 0)
	{
		wxString udp_timeout = m_spinCtrl_sbs_s3_udp_timeout->GetTextValue();
		client_settings += ("udp_timeout=" + udp_timeout + "\n");
		server_settings += ("udp_timeout=" + udp_timeout + "\n");
	}

	if (m_checkBox_sbs_s3_keepalive->IsChecked() && m_spinCtrl_sbs_s3_keepalive->GetValue() > 0)
	{
		wxString keep_alive = m_spinCtrl_sbs_s3_keepalive->GetTextValue();
		client_settings += ("keep_alive=" + keep_alive + "\n");
		server_settings += ("keep_alive=" + keep_alive + "\n");
	}

	if (m_checkBox_sbs_s3_mux_tunnels->IsChecked() && m_spinCtrl_sbs_s3_mux_tunnels->GetValue() > 0)
	{
		wxString mux_tunnels = m_spinCtrl_sbs_s3_mux_tunnels->GetTextValue();
		client_settings += ("mux_tunnels=" + mux_tunnels + "\n");
	}

	if (m_checkBox_sbs_s3_fec->IsChecked())
	{
		wxString fec_setting = m_spinCtrl_sbs_s3_fec_data->GetTextValue() + ":" + m_spinCtrl_sbs_s3_fec_redundant->GetTextValue();
		client_settings += ("fec=" + fec_setting + "\n");
		server_settings += ("fec=" + fec_setting + "\n");
	}

	wxString client_file_path = m_filePicker_sbs_s4_client->GetPath();
	wxString server_file_path = m_filePicker_sbs_s4_server->GetPath();
	wxString client_done = steps_text_id_to_text[languages::steps_text_id::client_conf_not_saved];
	wxString server_done = steps_text_id_to_text[languages::steps_text_id::server_conf_not_saved];

	wxFile client_file, server_file;
	if (client_file.Open(client_file_path, wxFile::write))
	{
		if (client_file.Write(client_settings))
			client_done = steps_text_id_to_text[languages::steps_text_id::client_conf_saved];
	}

	if (server_file.Open(server_file_path, wxFile::write))
	{
		if (server_file.Write(server_settings))
			server_done = steps_text_id_to_text[languages::steps_text_id::server_conf_saved];
	}

	wxMessageBox(client_done + "\n" + server_done, "KCPTube Configuration File Generator", wxICON_INFORMATION, this);
}

void KCPTubeGeneratorStepByStep::AdjustUI()
{
	m_checkBox_sbs_s3_mtu->Layout();
	m_checkBox_sbs_s3_mtu->Fit();
	m_checkBox_sbs_s3_dport_refresh->Layout();
	m_checkBox_sbs_s3_dport_refresh->Fit();
	m_checkBox_sbs_s3_udp_timtout->Layout();
	m_checkBox_sbs_s3_udp_timtout->Fit();
	m_checkBox_sbs_s3_keepalive->Layout();
	m_checkBox_sbs_s3_keepalive->Fit();
	m_checkBox_sbs_s3_mux_tunnels->Layout();
	m_checkBox_sbs_s3_mux_tunnels->Fit();

	Layout();
	Fit();
}