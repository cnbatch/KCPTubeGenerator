#include "KCPTubeGeneratorUserInput.h"

KCPTubeGeneratorUserInput::KCPTubeGeneratorUserInput(wxWindow* parent)
	:
	UserInput(parent)
{
	PutTextOnScreen();
	ResetClientValues();
	ResetRelayFcValues();
	ResetRelayTsValues();
	ResetServerValues();
	AdjustUI();
}

void KCPTubeGeneratorUserInput::ClientKCPProfileOnChoice(wxCommandEvent& event)
{
	ResetClientValues();
}

void KCPTubeGeneratorUserInput::ClientEncrypitonOnChoice(wxCommandEvent& event)
{
	bool use_encryption = m_choice_client_encryption_algorithm->GetSelection() != 0;
	m_textCtrl_client_encryption_password->Enable(use_encryption);
}

void KCPTubeGeneratorUserInput::ClientListenAddressOnCheckBox(wxCommandEvent& event)
{
	m_textCtrl_client_listen_on->Enable(m_checkBox_client_listen_on->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientDestinationPortOnChoice(wxCommandEvent& event)
{
	bool use_multiple = m_choice_client_destination_port->GetSelection() == 0;
	m_spinCtrl_client_destination_port2->Enable(use_multiple);
}

void KCPTubeGeneratorUserInput::ClientDPortRefreshOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_dport_refresh->Enable(m_checkBox_client_dport_refresh->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientUDPTimeoutOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_udp_timeout->Enable(m_checkBox_client_udp_timeout->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientKeepAliveOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_keep_alive->Enable(m_checkBox_client_keep_alive->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientMuxTunnelsOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_mux_tunnels->Enable(m_checkBox_client_mux_tunnels->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_mtu->Enable(m_checkBox_client_mtu->IsChecked());
	if (m_checkBox_client_mtu->IsChecked())
	{
		m_checkBox_client_kcp_mtu->SetValue(false);
		m_spinCtrl_client_kcp_mtu->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::ClientKCPMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_kcp_mtu->Enable(m_checkBox_client_kcp_mtu->IsChecked());
	if (m_checkBox_client_kcp_mtu->IsChecked())
	{
		m_checkBox_client_mtu->SetValue(false);
		m_spinCtrl_client_mtu->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::ClientFECOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_client_fec_data->Enable(m_checkBox_client_fec->IsChecked());
	m_spinCtrl_client_fec_redundant->Enable(m_checkBox_client_fec->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientIPv4OnlyOnCheckBox(wxCommandEvent& event)
{
	// TODO: Implement ClientIPv4OnlyOnCheckBox
}

void KCPTubeGeneratorUserInput::ClientLogPathOnCheckBox(wxCommandEvent& event)
{
	m_textCtrl_client_log_path->Enable(m_checkBox_client_log_path->IsChecked());
}

void KCPTubeGeneratorUserInput::ClientVerifyAndSaveOnButtonClick(wxCommandEvent& event)
{
	wxString client_file_path = m_filePicker_client_select_file->GetPath();
	if (client_file_path.IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::folder_empty],
			userinput_text_id_to_text[languages::userinput_text_id::cannot_save],
			wxICON_EXCLAMATION, this);
		return;
	}

	if (VerifyClientSelections())
		CreateClientSettingFile();
}

void KCPTubeGeneratorUserInput::RelayFromClientKCPProfileOnChoice(wxCommandEvent& event)
{
	ResetRelayFcValues();
}

void KCPTubeGeneratorUserInput::RelayToServerKCPProfileOnChoice(wxCommandEvent& event)
{
	ResetRelayTsValues();
}

void KCPTubeGeneratorUserInput::RelayListenAddressOnCheckBox(wxCommandEvent& event)
{
	m_textCtrl_relay_listen_on->Enable(m_checkBox_relay_listen_on->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayListenPortOnChoice(wxCommandEvent& event)
{
	m_textCtrl_relay_listen_on->Enable(m_checkBox_relay_listen_on->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayFromClientUDPTimeoutOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_udp_timeout_fc->Enable(m_checkBox_relay_udp_timeout_fc->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayFromClientKeepAliveOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_keep_alive_fc->Enable(m_checkBox_relay_keep_alive_fc->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayFromClientMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_mtu_fc->Enable(m_checkBox_relay_mtu_fc->IsChecked());
	if (m_checkBox_relay_mtu_fc->IsChecked())
	{
		m_checkBox_relay_kcp_mtu_fc->SetValue(false);
		m_spinCtrl_relay_kcp_mtu_fc->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::RelayFromClientKCPMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_kcp_mtu_fc->Enable(m_checkBox_relay_kcp_mtu_fc->IsChecked());
	if (m_checkBox_relay_kcp_mtu_fc->IsChecked())
	{
		m_checkBox_relay_mtu_fc->SetValue(false);
		m_spinCtrl_relay_mtu_fc->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::RelayFromClientFECOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_fec_data_fc->Enable(m_checkBox_relay_fec_fc->IsChecked());
	m_spinCtrl_relay_fec_redundant_fc->Enable(m_checkBox_relay_fec_fc->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayFromClientIPv4OnlyOnCheckBox(wxCommandEvent& event)
{
	// TODO: Implement RelayFromClientIPv4OnlyOnCheckBox
}

void KCPTubeGeneratorUserInput::RelayDestinationPortOnChoice(wxCommandEvent& event)
{
	bool use_multiple = m_choice_relay_destination_port->GetSelection() == 0;
	m_spinCtrl_relay_destination_port2->Enable(use_multiple);

}

void KCPTubeGeneratorUserInput::RelayDPortRefreshOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_dport_refresh->Enable(m_checkBox_relay_dport_refresh->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayToServerUDPTimeoutOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_udp_timeout_ts->Enable(m_checkBox_relay_udp_timeout_ts->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayToServerKeepAliveOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_keep_alive_ts->Enable(m_checkBox_relay_keep_alive_ts->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayToServerMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_mtu_ts->Enable(m_checkBox_relay_mtu_ts->IsChecked());
	if (m_checkBox_relay_mtu_ts->IsChecked())
	{
		m_checkBox_relay_kcp_mtu_ts->SetValue(false);
		m_spinCtrl_relay_kcp_mtu_ts->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::RelayToServerKCPMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_kcp_mtu_ts->Enable(m_checkBox_relay_kcp_mtu_ts->IsChecked());
	if (m_checkBox_relay_kcp_mtu_ts->IsChecked())
	{
		m_checkBox_relay_mtu_ts->SetValue(false);
		m_spinCtrl_relay_mtu_ts->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::RelayToServerFECOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_relay_fec_data_ts->Enable(m_checkBox_relay_fec_ts->IsChecked());
	m_spinCtrl_relay_fec_redundant_ts->Enable(m_checkBox_relay_fec_ts->IsChecked());
}

void KCPTubeGeneratorUserInput::RelayToServerIPv4OnlyOnCheckBox(wxCommandEvent& event)
{
	// TODO: Implement RelayToServerIPv4OnlyOnCheckBox
}

void KCPTubeGeneratorUserInput::RelayFromClientEncrypitonOnChoice(wxCommandEvent& event)
{
	bool use_encryption = m_choice_relay_encryption_algorithm_fc->GetSelection() != 0;
	m_textCtrl_relay_encryption_password_fc->Enable(use_encryption);
}

void KCPTubeGeneratorUserInput::RelayToServerEncrypitonOnChoice(wxCommandEvent& event)
{
	bool use_encryption = m_choice_relay_encryption_algorithm_ts->GetSelection() != 0;
	m_textCtrl_relay_encryption_password_ts->Enable(use_encryption);
}

void KCPTubeGeneratorUserInput::RelayVerifyAndSaveOnButtonClick(wxCommandEvent& event)
{
	wxString relay_file_path = m_filePicker_relay_select_file->GetPath();
	if (relay_file_path.IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::folder_empty],
			userinput_text_id_to_text[languages::userinput_text_id::cannot_save],
			wxICON_EXCLAMATION, this);
		return;
	}

	if (VerifyRelaySelections())
		CreateRelaySettingFile();
}

void KCPTubeGeneratorUserInput::RelayKCPProfileOnChoice(wxCommandEvent& event)
{
	ResetServerValues();
}

void KCPTubeGeneratorUserInput::ServerEncrypitonOnChoice(wxCommandEvent& event)
{
	bool use_encryption = m_choice_server_encryption_algorithm->GetSelection() != 0;
	m_textCtrl_server_encryption_password->Enable(use_encryption);
}

void KCPTubeGeneratorUserInput::ServerListenAddressOnCheckBox(wxCommandEvent& event)
{
	m_textCtrl_server_listen_on->Enable(m_checkBox_server_listen_on->IsChecked());
}

void KCPTubeGeneratorUserInput::ServerUDPTimeoutOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_server_udp_timeout->Enable(m_checkBox_server_udp_timeout->IsChecked());
}

void KCPTubeGeneratorUserInput::ServerKeepAliveOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_server_keep_alive->Enable(m_checkBox_server_keep_alive->IsChecked());
}

void KCPTubeGeneratorUserInput::ServerMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_server_mtu->Enable(m_checkBox_server_mtu->IsChecked());
	if (m_checkBox_server_mtu->IsChecked())
	{
		m_checkBox_server_kcp_mtu->SetValue(false);
		m_spinCtrl_server_kcp_mtu->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::ServerKCPMTUOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_server_kcp_mtu->Enable(m_checkBox_server_kcp_mtu->IsChecked());
	if (m_checkBox_server_kcp_mtu->IsChecked())
	{
		m_checkBox_server_mtu->SetValue(false);
		m_spinCtrl_server_mtu->Enable(false);
	}
}

void KCPTubeGeneratorUserInput::ServerFECOnCheckBox(wxCommandEvent& event)
{
	m_spinCtrl_server_fec_data->Enable(m_checkBox_server_fec->IsChecked());
	m_spinCtrl_server_fec_redundant->Enable(m_checkBox_server_fec->IsChecked());
}

void KCPTubeGeneratorUserInput::ServerIPv4OnlyOnCheckBox(wxCommandEvent& event)
{
	// TODO: Implement ServerIPv4OnlyOnCheckBox
}

void KCPTubeGeneratorUserInput::ServerStunServerOnCheckBox(wxCommandEvent& event)
{
	m_textCtrl_server_stun->Enable(m_checkBox_server_stun->IsChecked());
}

void KCPTubeGeneratorUserInput::ServerLogPathOnCheckBox(wxCommandEvent& event)
{
	m_textCtrl_server_log_path->Enable(m_checkBox_server_log_path->IsChecked());
}

void KCPTubeGeneratorUserInput::ServerVerifyAndSaveOnButtonClick(wxCommandEvent& event)
{
	wxString server_file_path = m_filePicker_server_select_file->GetPath();
	if (server_file_path.IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::folder_empty],
			userinput_text_id_to_text[languages::userinput_text_id::cannot_save],
			wxICON_EXCLAMATION, this);
		return;
	}

	if (VerifyServerSelections())
		CreateServerSettingFile();
}

void KCPTubeGeneratorUserInput::CreateRelaySettingFile()
{
	wxString relay_settings, relay_listener, relay_forwarder;
	relay_settings = "mode=relay\n";
	relay_listener = "[listener]\n";
	relay_forwarder = "[forwarder]\n";

	int selected_profile_fc = m_choice_relay_kcp_profile_fc->GetSelection();
	int selected_profile_ts = m_choice_relay_kcp_profile_ts->GetSelection();
	wxString kcp_profile_fc_as_string = full_kcp_profile_to_string(selected_profile_fc);
	wxString kcp_profile_fc = "kcp=" + kcp_profile_fc_as_string + "\n";
	wxString kcp_profile_ts_as_string = full_kcp_profile_to_string(selected_profile_ts);
	wxString kcp_profile_ts = "kcp=" + kcp_profile_ts_as_string + "\n";

	if (selected_profile_fc == m_choice_relay_kcp_profile_fc->GetCount() - 1)
	{
		int kcp_nodelay = m_spinCtrl_relay_kcp_nodelay_fc->GetValue();
		int kcp_interval = m_spinCtrl_relay_kcp_interval_fc->GetValue();
		int kcp_resend = m_spinCtrl_relay_kcp_resend_fc->GetValue();
		int kcp_nc = m_choice_relay_kcp_nc_fc->GetSelection();
		int kcp_sndwnd = m_spinCtrl_relay_kcp_sndwnd_fc->GetValue();
		int kcp_rcvwnd = m_spinCtrl_relay_kcp_rcvwnd_fc->GetValue();
		kcp_profile_fc += ("kcp_nodelay=" + std::to_string(kcp_nodelay) + "\n");
		kcp_profile_fc += ("kcp_interval=" + std::to_string(kcp_interval) + "\n");
		kcp_profile_fc += ("kcp_resend=" + std::to_string(kcp_resend) + "\n");
		kcp_profile_fc += ("kcp_nc=" + std::to_string(kcp_nc) + "\n");
		kcp_profile_fc += ("kcp_sndwnd=" + std::to_string(kcp_sndwnd) + "\n");
		kcp_profile_fc += ("kcp_rcvwnd=" + std::to_string(kcp_rcvwnd) + "\n");
	}

	if (selected_profile_ts == m_choice_relay_kcp_profile_ts->GetCount() - 1)
	{
		int kcp_nodelay = m_spinCtrl_relay_kcp_nodelay_ts->GetValue();
		int kcp_interval = m_spinCtrl_relay_kcp_interval_ts->GetValue();
		int kcp_resend = m_spinCtrl_relay_kcp_resend_ts->GetValue();
		int kcp_nc = m_choice_relay_kcp_nc_ts->GetSelection();
		int kcp_sndwnd = m_spinCtrl_relay_kcp_sndwnd_ts->GetValue();
		int kcp_rcvwnd = m_spinCtrl_relay_kcp_rcvwnd_ts->GetValue();
		kcp_profile_ts += ("kcp_nodelay=" + std::to_string(kcp_nodelay) + "\n");
		kcp_profile_ts += ("kcp_interval=" + std::to_string(kcp_interval) + "\n");
		kcp_profile_ts += ("kcp_resend=" + std::to_string(kcp_resend) + "\n");
		kcp_profile_ts += ("kcp_nc=" + std::to_string(kcp_nc) + "\n");
		kcp_profile_ts += ("kcp_sndwnd=" + std::to_string(kcp_sndwnd) + "\n");
		kcp_profile_ts += ("kcp_rcvwnd=" + std::to_string(kcp_rcvwnd) + "\n");
	}

	relay_listener += kcp_profile_fc;
	relay_forwarder += kcp_profile_ts;

	// Network Settings (from Client) start

	if (m_checkBox_relay_listen_on->IsChecked() && !m_textCtrl_relay_listen_on->IsEmpty())
		relay_listener += ("listen_on=" + m_textCtrl_relay_listen_on->GetValue() + "\n");

	{
		int port_start = m_spinCtrl_relay_listen_port->GetValue();
		int port_end = m_spinCtrl_relay_listen_port2->GetValue();
		wxString listen_port;
		if (port_start != port_end && m_spinCtrl_relay_listen_port2->IsEnabled())
			listen_port = std::to_string(port_start) + "-" + std::to_string(port_end);
		else
			listen_port = std::to_string(port_start);

		relay_listener += ("listen_port=" + listen_port + "\n");
	}

	if (m_checkBox_relay_udp_timeout_fc->IsChecked())
		relay_listener += ("udp_timeout=" + m_spinCtrl_relay_udp_timeout_fc->GetTextValue() + "\n");

	if (m_checkBox_relay_keep_alive_fc->IsChecked())
		relay_listener += ("keep_alive=" + m_spinCtrl_relay_keep_alive_fc->GetTextValue() + "\n");

	if (m_checkBox_relay_mtu_fc->IsChecked())
		relay_listener += ("mtu=" + m_spinCtrl_relay_mtu_fc->GetTextValue() + "\n");

	if (m_checkBox_relay_kcp_mtu_fc->IsChecked())
		relay_listener += ("kcp_mtu=" + m_spinCtrl_relay_kcp_mtu_fc->GetTextValue() + "\n");

	if (m_checkBox_relay_ipv4_only_fc->IsChecked())
		relay_listener += "ipv4_only=1\n";

	if (m_checkBox_relay_blast_fc->IsChecked())
		relay_listener += "blast=1\n";

	if (m_checkBox_relay_fec_fc->IsChecked())
		relay_listener += ("fec=" + m_spinCtrl_relay_fec_data_fc->GetTextValue() + ":" + m_spinCtrl_relay_fec_redundant_fc->GetTextValue() + "\n");

	// Network Settings (from Client) end

	// Network Settings (to Server) start

	relay_forwarder += ("destination_address=" + m_textCtrl_relay_destination_address->GetValue() + "\n");

	{
		int port_start = m_spinCtrl_relay_destination_port->GetValue();
		int port_end = m_spinCtrl_relay_destination_port2->GetValue();
		wxString destination_port;
		if (port_start != port_end && m_spinCtrl_relay_listen_port2->IsEnabled())
			destination_port = std::to_string(port_start) + "-" + std::to_string(port_end);
		else
			destination_port = std::to_string(port_start);

		relay_forwarder += ("destination_port=" + destination_port + "\n");
	}

	if (m_checkBox_relay_dport_refresh->IsChecked())
		relay_forwarder += ("dport_refresh=" + m_spinCtrl_relay_dport_refresh->GetTextValue() + "\n");

	if (m_checkBox_relay_udp_timeout_ts->IsChecked())
		relay_forwarder += ("udp_timeout=" + m_spinCtrl_relay_udp_timeout_ts->GetTextValue() + "\n");

	if (m_checkBox_relay_keep_alive_ts->IsChecked())
		relay_forwarder += ("keep_alive=" + m_spinCtrl_relay_keep_alive_ts->GetTextValue() + "\n");

	if (m_checkBox_relay_mtu_ts->IsChecked())
		relay_forwarder += ("mtu=" + m_spinCtrl_relay_mtu_ts->GetTextValue() + "\n");

	if (m_checkBox_relay_mtu_ts->IsChecked())
		relay_forwarder += ("kcp_mtu=" + m_spinCtrl_relay_kcp_mtu_ts->GetTextValue() + "\n");

	if (m_checkBox_relay_ipv4_only_ts->IsChecked())
		relay_forwarder += "ipv4_only=1\n";

	if (m_checkBox_relay_blast_ts->IsChecked())
		relay_forwarder += "blast=1\n";

	if (m_checkBox_relay_fec_ts->IsChecked())
		relay_listener += ("fec=" + m_spinCtrl_relay_fec_data_ts->GetTextValue() + ":" + m_spinCtrl_relay_fec_redundant_ts->GetTextValue() + "\n");

	// Network Settings (to SErver) end

	// Network Settings (Relay Node) start

	wxString output_bandwidth_server = bandwidth_seletion_to_string(m_spinCtrl_relay_outbound_bandwidth->GetValue(), m_choice_relay_outbound_bandwidth->GetSelection());
	wxString input_bandwidth_server = bandwidth_seletion_to_string(m_spinCtrl_relay_inbound_bandwidth->GetValue(), m_choice_relay_inbound_bandwidth->GetSelection());
	relay_settings += ("outbound_bandwidth=" + output_bandwidth_server + "\n");
	relay_settings += ("inbound_bandwidth=" + input_bandwidth_server + "\n");

	// Network Settings (Relay Node) end

	if (m_choice_relay_encryption_algorithm_fc->GetSelection() != 0)
	{
		wxString encryption_algorithm = encryption_selection_to_string(m_choice_relay_encryption_algorithm_fc->GetSelection());
		wxString encryption_password = m_textCtrl_relay_encryption_password_fc->GetValue();
		relay_listener += ("encryption_algorithm=" + encryption_algorithm + "\n");
		relay_listener += ("encryption_password=" + encryption_password + "\n");
	}

	if (m_choice_relay_encryption_algorithm_ts->GetSelection() != 0)
	{
		wxString encryption_algorithm = encryption_selection_to_string(m_choice_relay_encryption_algorithm_ts->GetSelection());
		wxString encryption_password = m_textCtrl_relay_encryption_password_fc->GetValue();
		relay_forwarder += ("encryption_algorithm=" + encryption_algorithm + "\n");
		relay_forwarder += ("encryption_password=" + encryption_password + "\n");
	}

	relay_settings += ("\n" + relay_listener + "\n" + relay_forwarder);

	wxString relay_file_path = m_filePicker_relay_select_file->GetPath();
	wxString relay_done = userinput_text_id_to_text[languages::userinput_text_id::conf_not_saved];
	wxFile relay_file;

	if (relay_file.Open(relay_file_path, wxFile::write))
	{
		if (relay_file.Write(relay_settings))
			relay_done = userinput_text_id_to_text[languages::userinput_text_id::conf_saved];
	}

	wxMessageBox(relay_done, "KCPTube Configuration File Generator", wxICON_INFORMATION, this);
}

void KCPTubeGeneratorUserInput::CreateClientSettingFile()
{
	wxString client_settings;
	client_settings = "mode=client\n";

	int selected_profile = m_choice_client_kcp_profile->GetSelection();
	wxString kcp_profile = full_kcp_profile_to_string(selected_profile);
	client_settings += ("kcp=" + kcp_profile + "\n");

	if (selected_profile == m_choice_client_kcp_profile->GetCount() - 1)
	{
		int kcp_nodelay = m_spinCtrl_client_kcp_nodelay->GetValue();
		int kcp_interval = m_spinCtrl_client_kcp_interval->GetValue();
		int kcp_resend = m_spinCtrl_client_kcp_resend->GetValue();
		int kcp_nc = m_choice_client_kcp_nc->GetSelection();
		int kcp_sndwnd = m_spinCtrl_client_kcp_sndwnd->GetValue();
		int kcp_rcvwnd = m_spinCtrl_client_kcp_rcvwnd->GetValue();
		client_settings += ("kcp_nodelay=" + std::to_string(kcp_nodelay) + "\n");
		client_settings += ("kcp_interval=" + std::to_string(kcp_interval) + "\n");
		client_settings += ("kcp_resend=" + std::to_string(kcp_resend) + "\n");
		client_settings += ("kcp_nc=" + std::to_string(kcp_nc) + "\n");
		client_settings += ("kcp_sndwnd=" + std::to_string(kcp_sndwnd) + "\n");
		client_settings += ("kcp_rcvwnd=" + std::to_string(kcp_rcvwnd) + "\n");
	}

	if (m_checkBox_client_listen_on->IsChecked() && !m_textCtrl_client_listen_on->IsEmpty())
		client_settings += ("listen_on=" + m_textCtrl_client_listen_on->GetValue() + "\n");

	client_settings += ("listen_port=" + std::to_string(m_spinCtrl_client_listen_port->GetValue()) + "\n");
	client_settings += ("destination_address=" + m_textCtrl_client_destination_address->GetValue() + "\n");

	int port_start = m_spinCtrl_client_destination_port->GetValue();
	int port_end = m_spinCtrl_client_destination_port2->GetValue();
	wxString destination_port;
	if (port_start != port_end || m_spinCtrl_client_destination_port2->IsEnabled())
		destination_port = std::to_string(port_start) + "-" + std::to_string(port_end);
	else
		destination_port = std::to_string(port_start);
	client_settings += ("destination_port=" + destination_port + "\n");

	if (m_checkBox_client_dport_refresh->IsChecked())
		client_settings += ("dport_refresh=" + m_spinCtrl_client_dport_refresh->GetTextValue() + "\n");

	if (m_checkBox_client_udp_timeout->IsChecked())
		client_settings += ("udp_timeout=" + m_spinCtrl_client_udp_timeout->GetTextValue() + "\n");

	if (m_checkBox_client_keep_alive->IsChecked())
		client_settings += ("keep_alive=" + m_spinCtrl_client_keep_alive->GetTextValue() + "\n");

	if (m_checkBox_client_mux_tunnels->IsChecked())
		client_settings += ("mux_tunnels=" + m_spinCtrl_client_mux_tunnels->GetTextValue() + "\n");

	wxString output_bandwidth_server = bandwidth_seletion_to_string(m_spinCtrl_client_outbound_bandwidth->GetValue(), m_choice_client_outbound_bandwidth->GetSelection());
	wxString input_bandwidth_server = bandwidth_seletion_to_string(m_spinCtrl_client_inbound_bandwidth->GetValue(), m_choice_client_inbound_bandwidth->GetSelection());
	client_settings += ("outbound_bandwidth=" + output_bandwidth_server + "\n");
	client_settings += ("inbound_bandwidth=" + input_bandwidth_server + "\n");

	if (m_checkBox_client_mtu->IsChecked())
		client_settings += ("mtu=" + m_spinCtrl_client_mtu->GetTextValue() + "\n");

	if (m_checkBox_client_mtu->IsChecked())
		client_settings += ("kcp_mtu=" + m_spinCtrl_client_kcp_mtu->GetTextValue() + "\n");

	if (m_checkBox_client_ipv4_only->IsChecked())
		client_settings += "ipv4_only=1\n";

	if (m_checkBox_client_blast->IsChecked())
		client_settings += "blast=1\n";

	if (m_checkBox_client_fec->IsChecked())
		client_settings += ("fec=" + m_spinCtrl_relay_fec_data_fc->GetTextValue() + ":" + m_spinCtrl_relay_fec_redundant_fc->GetTextValue() + "\n");

	if (m_choice_client_encryption_algorithm->GetSelection() != 0)
	{
		wxString encryption_algorithm = encryption_selection_to_string(m_choice_client_encryption_algorithm->GetSelection());
		wxString encryption_password = m_textCtrl_client_encryption_password->GetValue();
		client_settings += ("encryption_algorithm=" + encryption_algorithm + "\n");
		client_settings += ("encryption_password=" + encryption_password + "\n");
	}

	if (m_checkBox_client_log_path->IsChecked() && !m_textCtrl_client_log_path->IsEmpty())
		client_settings += ("log_path=" + m_textCtrl_client_log_path->GetValue() + "\n");

	wxString client_file_path = m_filePicker_client_select_file->GetPath();
	wxString client_done = userinput_text_id_to_text[languages::userinput_text_id::conf_not_saved];

	wxFile client_file;
	if (client_file.Open(client_file_path, wxFile::write))
	{
		if (client_file.Write(client_settings))
			client_done = userinput_text_id_to_text[languages::userinput_text_id::conf_saved];
	}

	wxMessageBox(client_done, "KCPTube Configuration File Generator", wxICON_INFORMATION, this);
}

bool KCPTubeGeneratorUserInput::VerifyServerSelections()
{
	if (m_checkBox_server_listen_on->IsChecked())
	{
		std::string input_listen = m_textCtrl_server_listen_on->GetValue().ToStdString();
		if (!is_valid_ip(input_listen))
		{
			wxMessageBox(input_listen + userinput_text_id_to_text[languages::userinput_text_id::listen_on_incorrect],
				userinput_text_id_to_text[languages::userinput_text_id::server_mode],
				wxICON_EXCLAMATION, this);
			return false;
		}
	}

	wxString input_address = m_textCtrl_server_destination_address->GetValue();
	std::string input_address_std = input_address.ToStdString();
	if (!is_valid_domain(input_address_std) && !is_valid_ip(input_address_std))
	{
		wxMessageBox(input_address + userinput_text_id_to_text[languages::userinput_text_id::address_incorrect],
			userinput_text_id_to_text[languages::userinput_text_id::server_mode],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_server_listen_port->GetSelection() == 0 &&
		m_spinCtrl_server_listen_port->GetValue() > m_spinCtrl_server_listen_port2->GetValue())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::end_port_larger],
			userinput_text_id_to_text[languages::userinput_text_id::port_range_wrong],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_server_encryption_algorithm->GetSelection() != 0 && m_textCtrl_server_encryption_password->IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::please_input_password],
			userinput_text_id_to_text[languages::userinput_text_id::password_not_set],
			wxICON_EXCLAMATION, this);
		return false;
	}

	return true;
}

bool KCPTubeGeneratorUserInput::VerifyRelaySelections()
{
	if (m_checkBox_relay_listen_on->IsChecked())
	{
		std::string input_listen = m_textCtrl_relay_listen_on->GetValue().ToStdString();
		if (!is_valid_ip(input_listen))
		{
			wxMessageBox(input_listen + userinput_text_id_to_text[languages::userinput_text_id::listen_on_incorrect],
				userinput_text_id_to_text[languages::userinput_text_id::relay_mode],
				wxICON_EXCLAMATION, this);
			return false;
		}
	}

	wxString input_address = m_textCtrl_relay_destination_address->GetValue();
	std::string input_address_std = input_address.ToStdString();
	if (!is_valid_domain(input_address_std) && !is_valid_ip(input_address_std))
	{
		wxMessageBox(input_address + userinput_text_id_to_text[languages::userinput_text_id::address_incorrect],
			userinput_text_id_to_text[languages::userinput_text_id::relay_mode],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_relay_listen_port->GetSelection() == 0 &&
		m_spinCtrl_relay_listen_port->GetValue() > m_spinCtrl_relay_listen_port2->GetValue())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::end_port_larger],
			userinput_text_id_to_text[languages::userinput_text_id::port_range_wrong],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_relay_destination_port->GetSelection() == 0 &&
		m_spinCtrl_relay_destination_port->GetValue() > m_spinCtrl_relay_destination_port2->GetValue())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::end_port_larger],
			userinput_text_id_to_text[languages::userinput_text_id::port_range_wrong],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_relay_encryption_algorithm_fc->GetSelection() != 0 && m_textCtrl_relay_encryption_password_fc->IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::please_input_password],
			userinput_text_id_to_text[languages::userinput_text_id::password_not_set],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_relay_encryption_algorithm_ts->GetSelection() != 0 && m_textCtrl_relay_encryption_password_ts->IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::please_input_password],
			userinput_text_id_to_text[languages::userinput_text_id::password_not_set],
			wxICON_EXCLAMATION, this);
		return false;
	}

	return true;
}

bool KCPTubeGeneratorUserInput::VerifyClientSelections()
{
	if (m_checkBox_client_listen_on->IsChecked())
	{
		std::string input_listen = m_textCtrl_client_listen_on->GetValue().ToStdString();
		if (!is_valid_ip(input_listen))
		{
			wxMessageBox(input_listen + userinput_text_id_to_text[languages::userinput_text_id::listen_on_incorrect],
				userinput_text_id_to_text[languages::userinput_text_id::client_mode],
				wxICON_EXCLAMATION, this);
			return false;
		}
	}

	wxString input_address = m_textCtrl_client_destination_address->GetValue();
	std::string input_address_std = input_address.ToStdString();
	if (!is_valid_domain(input_address_std) && !is_valid_ip(input_address_std))
	{
		wxMessageBox(input_address + userinput_text_id_to_text[languages::userinput_text_id::address_incorrect],
			userinput_text_id_to_text[languages::userinput_text_id::client_mode],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_client_destination_port->GetSelection() == 0 &&
		m_spinCtrl_client_destination_port->GetValue() > m_spinCtrl_client_destination_port2->GetValue())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::end_port_larger],
			userinput_text_id_to_text[languages::userinput_text_id::port_range_wrong],
			wxICON_EXCLAMATION, this);
		return false;
	}

	if (m_choice_client_encryption_algorithm->GetSelection() != 0 && m_textCtrl_client_encryption_password->IsEmpty())
	{
		wxMessageBox(userinput_text_id_to_text[languages::userinput_text_id::please_input_password],
			userinput_text_id_to_text[languages::userinput_text_id::password_not_set],
			wxICON_EXCLAMATION, this);
		return false;
	}

	return true;
}

void KCPTubeGeneratorUserInput::ResetRelayTsValues()
{
	int current_selection = m_choice_relay_kcp_profile_ts->GetSelection();
	bool enable_all = current_selection == 11;

	m_staticText_relay_kcp_nodelay_ts->Enable(enable_all);
	m_spinCtrl_relay_kcp_nodelay_ts->Enable(enable_all);
	m_staticText_relay_kcp_interval_ts->Enable(enable_all);
	m_spinCtrl_relay_kcp_interval_ts->Enable(enable_all);
	m_staticText_relay_kcp_resend_ts->Enable(enable_all);
	m_spinCtrl_relay_kcp_resend_ts->Enable(enable_all);
	m_staticText_relay_kcp_nc_ts->Enable(enable_all);
	m_choice_relay_kcp_nc_ts->Enable(enable_all);
	m_staticText_relay_kcp_sndwnd_ts->Enable(enable_all);
	m_spinCtrl_relay_kcp_sndwnd_ts->Enable(enable_all);
	m_staticText_relay_kcp_rcvwnd_ts->Enable(enable_all);
	m_spinCtrl_relay_kcp_rcvwnd_ts->Enable(enable_all);

	user_settings current_settings = userinput_kcp_profile_get_settings(current_selection);

	m_spinCtrl_relay_kcp_nodelay_ts->SetValue(current_settings.kcp_nodelay);
	m_spinCtrl_relay_kcp_interval_ts->SetValue(current_settings.kcp_interval);
	m_spinCtrl_relay_kcp_resend_ts->SetValue(current_settings.kcp_resend);
	m_choice_relay_kcp_nc_ts->SetSelection(current_settings.kcp_nc);
	m_spinCtrl_relay_kcp_sndwnd_ts->SetValue(current_settings.kcp_sndwnd);
	m_spinCtrl_relay_kcp_rcvwnd_ts->SetValue(current_settings.kcp_rcvwnd);
}

void KCPTubeGeneratorUserInput::ResetClientValues()
{
	int current_selection = m_choice_client_kcp_profile->GetSelection();
	bool enable_all = current_selection == 11;

	m_staticText_client_kcp_nodelay->Enable(enable_all);
	m_spinCtrl_client_kcp_nodelay->Enable(enable_all);
	m_staticText_client_kcp_interval->Enable(enable_all);
	m_spinCtrl_client_kcp_interval->Enable(enable_all);
	m_staticText_client_kcp_resend->Enable(enable_all);
	m_spinCtrl_client_kcp_resend->Enable(enable_all);
	m_staticText_client_kcp_nc->Enable(enable_all);
	m_choice_client_kcp_nc->Enable(enable_all);
	m_staticText_client_kcp_sndwnd->Enable(enable_all);
	m_spinCtrl_client_kcp_sndwnd->Enable(enable_all);
	m_staticText_client_kcp_rcvwnd->Enable(enable_all);
	m_spinCtrl_client_kcp_rcvwnd->Enable(enable_all);

	user_settings current_settings = userinput_kcp_profile_get_settings(current_selection);

	m_spinCtrl_client_kcp_nodelay->SetValue(current_settings.kcp_nodelay);
	m_spinCtrl_client_kcp_interval->SetValue(current_settings.kcp_interval);
	m_spinCtrl_client_kcp_resend->SetValue(current_settings.kcp_resend);
	m_choice_client_kcp_nc->SetSelection(current_settings.kcp_nc);
	m_spinCtrl_client_kcp_sndwnd->SetValue(current_settings.kcp_sndwnd);
	m_spinCtrl_client_kcp_rcvwnd->SetValue(current_settings.kcp_rcvwnd);
}

void KCPTubeGeneratorUserInput::AdjustUI()
{
	m_button_client_save->Layout();
	Layout();
	Fit();
}

void KCPTubeGeneratorUserInput::ResetRelayFcValues()
{
	int current_selection = m_choice_relay_kcp_profile_fc->GetSelection();
	bool enable_all = current_selection == 11;

	m_staticText_relay_kcp_nodelay_fc->Enable(enable_all);
	m_spinCtrl_relay_kcp_nodelay_fc->Enable(enable_all);
	m_staticText_relay_kcp_interval_fc->Enable(enable_all);
	m_spinCtrl_relay_kcp_interval_fc->Enable(enable_all);
	m_staticText_relay_kcp_resend_fc->Enable(enable_all);
	m_spinCtrl_relay_kcp_resend_fc->Enable(enable_all);
	m_staticText_relay_kcp_nc_fc->Enable(enable_all);
	m_choice_relay_kcp_nc_fc->Enable(enable_all);
	m_staticText_relay_kcp_sndwnd_fc->Enable(enable_all);
	m_spinCtrl_relay_kcp_sndwnd_fc->Enable(enable_all);
	m_staticText_relay_kcp_rcvwnd_fc->Enable(enable_all);
	m_spinCtrl_relay_kcp_rcvwnd_fc->Enable(enable_all);

	user_settings current_settings = userinput_kcp_profile_get_settings(current_selection);

	m_spinCtrl_relay_kcp_nodelay_fc->SetValue(current_settings.kcp_nodelay);
	m_spinCtrl_relay_kcp_interval_fc->SetValue(current_settings.kcp_interval);
	m_spinCtrl_relay_kcp_resend_fc->SetValue(current_settings.kcp_resend);
	m_choice_relay_kcp_nc_fc->SetSelection(current_settings.kcp_nc);
	m_spinCtrl_relay_kcp_sndwnd_fc->SetValue(current_settings.kcp_sndwnd);
	m_spinCtrl_relay_kcp_rcvwnd_fc->SetValue(current_settings.kcp_rcvwnd);
}

void KCPTubeGeneratorUserInput::PutTextOnScreen()
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
		userinput_text_id_to_text = all_std_string_to_wxstring(languages::userinput_text_id_to_text_chs);
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
		userinput_text_id_to_text = all_std_string_to_wxstring(languages::userinput_text_id_to_text_cht);
		setting_options_id_to_text = all_std_string_to_wxstring(languages::setting_options_id_to_text_cht);
		kcp_mode_to_text = all_std_string_to_wxstring(languages::kcp_mode_to_text_cht);
		encryption_mode_to_text = all_std_string_to_wxstring(languages::encryption_mode_to_text_cht);
		break;

	default:
		userinput_text_id_to_text = all_std_string_to_wxstring(languages::userinput_text_id_to_text_eng);
		setting_options_id_to_text = all_std_string_to_wxstring(languages::setting_options_id_to_text_eng);
		kcp_mode_to_text = all_std_string_to_wxstring(languages::kcp_mode_to_text_eng);
		encryption_mode_to_text = all_std_string_to_wxstring(languages::encryption_mode_to_text_eng);
		break;
	}

	m_notebook_userinput->SetPageText(0, userinput_text_id_to_text[languages::userinput_text_id::client_mode]);
	m_notebook_userinput->SetPageText(1, userinput_text_id_to_text[languages::userinput_text_id::relay_mode]);
	m_notebook_userinput->SetPageText(2, userinput_text_id_to_text[languages::userinput_text_id::server_mode]);

	m_choice_client_kcp_profile->SetString(0, kcp_mode_to_text[kcp_mode::fast1]);
	m_choice_client_kcp_profile->SetString(1, kcp_mode_to_text[kcp_mode::fast2]);
	m_choice_client_kcp_profile->SetString(2, kcp_mode_to_text[kcp_mode::fast3]);
	m_choice_client_kcp_profile->SetString(3, kcp_mode_to_text[kcp_mode::fast4]);
	m_choice_client_kcp_profile->SetString(4, kcp_mode_to_text[kcp_mode::fast5]);
	m_choice_client_kcp_profile->SetString(5, kcp_mode_to_text[kcp_mode::fast6]);
	m_choice_client_kcp_profile->SetString(6, kcp_mode_to_text[kcp_mode::regular1]);
	m_choice_client_kcp_profile->SetString(7, kcp_mode_to_text[kcp_mode::regular2]);
	m_choice_client_kcp_profile->SetString(8, kcp_mode_to_text[kcp_mode::regular3]);
	m_choice_client_kcp_profile->SetString(9, kcp_mode_to_text[kcp_mode::regular4]);
	m_choice_client_kcp_profile->SetString(10, kcp_mode_to_text[kcp_mode::regular5]);
	m_choice_client_kcp_profile->SetString(11, kcp_mode_to_text[kcp_mode::manual]);

	m_choice_relay_kcp_profile_fc->SetString(0, kcp_mode_to_text[kcp_mode::fast1]);
	m_choice_relay_kcp_profile_fc->SetString(1, kcp_mode_to_text[kcp_mode::fast2]);
	m_choice_relay_kcp_profile_fc->SetString(2, kcp_mode_to_text[kcp_mode::fast3]);
	m_choice_relay_kcp_profile_fc->SetString(3, kcp_mode_to_text[kcp_mode::fast4]);
	m_choice_relay_kcp_profile_fc->SetString(4, kcp_mode_to_text[kcp_mode::fast5]);
	m_choice_relay_kcp_profile_fc->SetString(5, kcp_mode_to_text[kcp_mode::fast6]);
	m_choice_relay_kcp_profile_fc->SetString(6, kcp_mode_to_text[kcp_mode::regular1]);
	m_choice_relay_kcp_profile_fc->SetString(7, kcp_mode_to_text[kcp_mode::regular2]);
	m_choice_relay_kcp_profile_fc->SetString(8, kcp_mode_to_text[kcp_mode::regular3]);
	m_choice_relay_kcp_profile_fc->SetString(9, kcp_mode_to_text[kcp_mode::regular4]);
	m_choice_relay_kcp_profile_fc->SetString(10, kcp_mode_to_text[kcp_mode::regular5]);
	m_choice_relay_kcp_profile_fc->SetString(11, kcp_mode_to_text[kcp_mode::manual]);

	m_choice_relay_kcp_profile_ts->SetString(0, kcp_mode_to_text[kcp_mode::fast1]);
	m_choice_relay_kcp_profile_ts->SetString(1, kcp_mode_to_text[kcp_mode::fast2]);
	m_choice_relay_kcp_profile_ts->SetString(2, kcp_mode_to_text[kcp_mode::fast3]);
	m_choice_relay_kcp_profile_ts->SetString(3, kcp_mode_to_text[kcp_mode::fast4]);
	m_choice_relay_kcp_profile_ts->SetString(4, kcp_mode_to_text[kcp_mode::fast5]);
	m_choice_relay_kcp_profile_ts->SetString(5, kcp_mode_to_text[kcp_mode::fast6]);
	m_choice_relay_kcp_profile_ts->SetString(6, kcp_mode_to_text[kcp_mode::regular1]);
	m_choice_relay_kcp_profile_ts->SetString(7, kcp_mode_to_text[kcp_mode::regular2]);
	m_choice_relay_kcp_profile_ts->SetString(8, kcp_mode_to_text[kcp_mode::regular3]);
	m_choice_relay_kcp_profile_ts->SetString(9, kcp_mode_to_text[kcp_mode::regular4]);
	m_choice_relay_kcp_profile_ts->SetString(10, kcp_mode_to_text[kcp_mode::regular5]);
	m_choice_relay_kcp_profile_ts->SetString(11, kcp_mode_to_text[kcp_mode::manual]);

	m_choice_server_kcp_profile->SetString(0, kcp_mode_to_text[kcp_mode::fast1]);
	m_choice_server_kcp_profile->SetString(1, kcp_mode_to_text[kcp_mode::fast2]);
	m_choice_server_kcp_profile->SetString(2, kcp_mode_to_text[kcp_mode::fast3]);
	m_choice_server_kcp_profile->SetString(3, kcp_mode_to_text[kcp_mode::fast4]);
	m_choice_server_kcp_profile->SetString(4, kcp_mode_to_text[kcp_mode::fast5]);
	m_choice_server_kcp_profile->SetString(5, kcp_mode_to_text[kcp_mode::fast6]);
	m_choice_server_kcp_profile->SetString(6, kcp_mode_to_text[kcp_mode::regular1]);
	m_choice_server_kcp_profile->SetString(7, kcp_mode_to_text[kcp_mode::regular2]);
	m_choice_server_kcp_profile->SetString(8, kcp_mode_to_text[kcp_mode::regular3]);
	m_choice_server_kcp_profile->SetString(9, kcp_mode_to_text[kcp_mode::regular4]);
	m_choice_server_kcp_profile->SetString(10, kcp_mode_to_text[kcp_mode::regular5]);
	m_choice_server_kcp_profile->SetString(11, kcp_mode_to_text[kcp_mode::manual]);

	m_choice_client_destination_port->SetString(0, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_multiple]);
	m_choice_client_destination_port->SetString(1, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_single]);
	m_choice_relay_listen_port->SetString(0, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_multiple]);
	m_choice_relay_listen_port->SetString(1, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_single]);
	m_choice_relay_destination_port->SetString(0, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_multiple]);
	m_choice_relay_destination_port->SetString(1, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_single]);
	m_choice_server_listen_port->SetString(0, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_multiple]);
	m_choice_server_listen_port->SetString(1, userinput_text_id_to_text[languages::userinput_text_id::destination_port_select_single]);

	m_choice_client_encryption_algorithm->SetString(0, encryption_mode_to_text[encryption_mode::none]);
	m_choice_relay_encryption_algorithm_fc->SetString(0, encryption_mode_to_text[encryption_mode::none]);
	m_choice_relay_encryption_algorithm_ts->SetString(0, encryption_mode_to_text[encryption_mode::none]);
	m_choice_server_encryption_algorithm->SetString(0, encryption_mode_to_text[encryption_mode::none]);

	sbSizer_client_kcp_profile->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::kcp_profile_settings]);
	sbSizer_relay_kcp_profile_fc->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::kcp_profile_settings_fc]);
	sbSizer_relay_kcp_profile_ts->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::kcp_profile_settings_ts]);
	sbSizer_server_kcp_profile->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::kcp_profile_settings]);

	sbSizer_client_network_settings->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::network_settings]);
	sbSizer_relay_network_settings_fc->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::network_settings_fc]);
	sbSizer_relay_network_settings_ts->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::network_settings_ts]);
	sbSizer_relay_network_settings->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::network_settings_relay]);
	sbSizer_server_network_settings->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::network_settings]);

	sbSizer_client_security_settings->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::security_settings]);
	sbSizer_relay_security_settings->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::security_settings]);
	sbSizer_server_security_settings->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::security_settings]);
	sbSizer_relay_security_settings_fc->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::from_client]);
	sbSizer_relay_security_settings_ts->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::to_server]);

	sbSizer_server_stun->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::stun_server]);

	sbSizer_client_log->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::save_log]);
	sbSizer_server_log->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::save_log]);

	sbSizer_client_save_file->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::verify_and_save]);
	sbSizer_relay_save_file->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::verify_and_save]);
	sbSizer_server_save_file->GetStaticBox()->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::verify_and_save]);

	m_button_client_save->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::verify_and_save]);
	m_button_relay_save->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::verify_and_save]);
	m_button_server_save->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::verify_and_save]);

	m_checkBox_client_listen_on->SetLabelText(setting_options_id_to_text[languages::setting_options_id::listen_on]);
	m_checkBox_relay_listen_on->SetLabelText(setting_options_id_to_text[languages::setting_options_id::listen_on]);
	m_checkBox_server_listen_on->SetLabelText(setting_options_id_to_text[languages::setting_options_id::listen_on]);

	m_staticText_client_listen_port->SetLabelText(setting_options_id_to_text[languages::setting_options_id::listen_port]);
	m_staticText_server_destination_port->SetLabelText(setting_options_id_to_text[languages::setting_options_id::destination_port]);

	m_staticText_client_destination_address->SetLabelText(setting_options_id_to_text[languages::setting_options_id::destination_address]);
	m_staticText_relay_destination_address->SetLabelText(setting_options_id_to_text[languages::setting_options_id::destination_address]);
	m_staticText_server_destination_address->SetLabelText(setting_options_id_to_text[languages::setting_options_id::destination_address]);

	m_checkBox_client_dport_refresh->SetLabelText(setting_options_id_to_text[languages::setting_options_id::dport_refresh]);
	m_checkBox_relay_dport_refresh->SetLabelText(setting_options_id_to_text[languages::setting_options_id::dport_refresh]);

	m_checkBox_client_udp_timeout->SetLabelText(setting_options_id_to_text[languages::setting_options_id::udp_timeout]);
	m_checkBox_relay_udp_timeout_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::udp_timeout]);
	m_checkBox_relay_udp_timeout_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::udp_timeout]);
	m_checkBox_server_udp_timeout->SetLabelText(setting_options_id_to_text[languages::setting_options_id::udp_timeout]);

	m_checkBox_client_keep_alive->SetLabelText(setting_options_id_to_text[languages::setting_options_id::keep_alive]);
	m_checkBox_relay_keep_alive_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::keep_alive]);
	m_checkBox_relay_keep_alive_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::keep_alive]);
	m_checkBox_server_keep_alive->SetLabelText(setting_options_id_to_text[languages::setting_options_id::keep_alive]);

	m_checkBox_client_mtu->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mtu]);
	m_checkBox_relay_mtu_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mtu]);
	m_checkBox_relay_mtu_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mtu]);
	m_checkBox_server_mtu->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mtu]);

	m_checkBox_client_kcp_mtu->SetLabelText(setting_options_id_to_text[languages::setting_options_id::kcp_mtu]);
	m_checkBox_relay_kcp_mtu_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::kcp_mtu]);
	m_checkBox_relay_kcp_mtu_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::kcp_mtu]);
	m_checkBox_server_kcp_mtu->SetLabelText(setting_options_id_to_text[languages::setting_options_id::kcp_mtu]);

	m_checkBox_client_ipv4_only->SetLabelText(setting_options_id_to_text[languages::setting_options_id::ipv4_only]);
	m_checkBox_relay_ipv4_only_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::ipv4_only]);
	m_checkBox_relay_ipv4_only_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::ipv4_only]);
	m_checkBox_server_ipv4_only->SetLabelText(setting_options_id_to_text[languages::setting_options_id::ipv4_only]);

	m_checkBox_client_blast->SetLabelText(setting_options_id_to_text[languages::setting_options_id::blast]);
	m_checkBox_relay_blast_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::blast]);
	m_checkBox_relay_blast_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::blast]);
	m_checkBox_server_blast->SetLabelText(setting_options_id_to_text[languages::setting_options_id::blast]);

	m_staticText_client_outbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::outbound_bandwidth]);
	m_staticText_relay_outbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::outbound_bandwidth]);
	m_staticText_server_outbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::outbound_bandwidth]);
	m_staticText_client_inbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::inbound_bandwidth]);
	m_staticText_relay_inbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::inbound_bandwidth]);
	m_staticText_server_inbound_bandwidth->SetLabelText(setting_options_id_to_text[languages::setting_options_id::inbound_bandwidth]);

	m_staticText_client_encryption_algorithm->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_algorithm]);
	m_staticText_relay_encryption_algorithm_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_algorithm]);
	m_staticText_relay_encryption_algorithm_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_algorithm]);
	m_staticText_server_encryption_algorithm->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_algorithm]);
	m_staticText_client_encryption_password->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_password]);
	m_staticText_relay_encryption_password_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_password]);
	m_staticText_relay_encryption_password_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_password]);
	m_staticText_server_encryption_password->SetLabelText(setting_options_id_to_text[languages::setting_options_id::encryption_password]);
	m_staticText_client_save_file->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::location]);
	m_staticText_relay_save_file->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::location]);
	m_staticText_server_save_file->SetLabelText(userinput_text_id_to_text[languages::userinput_text_id::location]);

	m_checkBox_client_log_path->SetLabelText(setting_options_id_to_text[languages::setting_options_id::log_path]);
	m_checkBox_server_log_path->SetLabelText(setting_options_id_to_text[languages::setting_options_id::log_path]);

	m_checkBox_server_stun->SetLabelText(setting_options_id_to_text[languages::setting_options_id::stun_server]);
	m_checkBox_client_mux_tunnels->SetLabelText(setting_options_id_to_text[languages::setting_options_id::mux_tunnels]);

	m_checkBox_client_fec->SetLabelText(setting_options_id_to_text[languages::setting_options_id::fec]);
	m_checkBox_relay_fec_fc->SetLabelText(setting_options_id_to_text[languages::setting_options_id::fec]);
	m_checkBox_relay_fec_ts->SetLabelText(setting_options_id_to_text[languages::setting_options_id::fec]);
	m_checkBox_server_fec->SetLabelText(setting_options_id_to_text[languages::setting_options_id::fec]);

	m_spinCtrl_client_fec_data->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_data]);
	m_spinCtrl_client_fec_redundant->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_redundant]);
	m_spinCtrl_relay_fec_data_fc->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_data]);
	m_spinCtrl_relay_fec_redundant_fc->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_redundant]);
	m_spinCtrl_relay_fec_data_ts->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_data]);
	m_spinCtrl_relay_fec_redundant_ts->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_redundant]);
	m_spinCtrl_server_fec_data->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_data]);
	m_spinCtrl_server_fec_redundant->SetToolTip(setting_options_id_to_text[languages::setting_options_id::fec_redundant]);
}

void KCPTubeGeneratorUserInput::CreateServerSettingFile()
{
	wxString server_settings;
	server_settings = "mode=server\n";

	int selected_profile = m_choice_server_kcp_profile->GetSelection();
	wxString kcp_profile = full_kcp_profile_to_string(selected_profile);
	server_settings += ("kcp=" + kcp_profile + "\n");

	if (selected_profile == m_choice_server_kcp_profile->GetCount() - 1)
	{
		int kcp_nodelay = m_spinCtrl_server_kcp_nodelay->GetValue();
		int kcp_interval = m_spinCtrl_server_kcp_interval->GetValue();
		int kcp_resend = m_spinCtrl_server_kcp_resend->GetValue();
		int kcp_nc = m_choice_server_kcp_nc->GetSelection();
		int kcp_sndwnd = m_spinCtrl_server_kcp_sndwnd->GetValue();
		int kcp_rcvwnd = m_spinCtrl_server_kcp_rcvwnd->GetValue();
		server_settings += ("kcp_nodelay=" + std::to_string(kcp_nodelay) + "\n");
		server_settings += ("kcp_interval=" + std::to_string(kcp_interval) + "\n");
		server_settings += ("kcp_resend=" + std::to_string(kcp_resend) + "\n");
		server_settings += ("kcp_nc=" + std::to_string(kcp_nc) + "\n");
		server_settings += ("kcp_sndwnd=" + std::to_string(kcp_sndwnd) + "\n");
		server_settings += ("kcp_rcvwnd=" + std::to_string(kcp_rcvwnd) + "\n");
	}

	if (m_checkBox_server_listen_on->IsChecked() && !m_textCtrl_server_listen_on->IsEmpty())
		server_settings += ("listen_on=" + m_textCtrl_server_listen_on->GetValue() + "\n");

	int port_start = m_spinCtrl_server_listen_port->GetValue();
	int port_end = m_spinCtrl_server_listen_port2->GetValue();
	wxString listen_port;
	if (port_start != port_end || m_spinCtrl_server_listen_port2->IsEnabled())
		listen_port = std::to_string(port_start) + "-" + std::to_string(port_end);
	else
		listen_port = std::to_string(port_start);
	server_settings += ("listen_port=" + listen_port + "\n");

	server_settings += ("destination_address=" + m_textCtrl_server_destination_address->GetValue() + "\n");
	server_settings += ("destination_port=" + std::to_string(m_spinCtrl_server_destination_port->GetValue()) + "\n");

	if (m_checkBox_server_udp_timeout->IsChecked())
		server_settings += ("udp_timeout=" + std::to_string(m_spinCtrl_server_udp_timeout->GetValue()) + "\n");

	if (m_checkBox_server_keep_alive->IsChecked())
		server_settings += ("keep_alive=" + std::to_string(m_spinCtrl_server_keep_alive->GetValue()) + "\n");

	wxString output_bandwidth_client = bandwidth_seletion_to_string(m_spinCtrl_server_outbound_bandwidth->GetValue(), m_choice_server_outbound_bandwidth->GetSelection());
	wxString input_bandwidth_client = bandwidth_seletion_to_string(m_spinCtrl_server_inbound_bandwidth->GetValue(), m_choice_server_inbound_bandwidth->GetSelection());
	server_settings += ("outbound_bandwidth=" + output_bandwidth_client + "\n");
	server_settings += ("inbound_bandwidth=" + input_bandwidth_client + "\n");

	if (m_checkBox_server_mtu->IsChecked())
		server_settings += ("mtu=" + std::to_string(m_spinCtrl_server_mtu->GetValue()) + "\n");

	if (m_checkBox_server_kcp_mtu->IsChecked())
		server_settings += ("kcp_mtu=" + std::to_string(m_spinCtrl_server_kcp_mtu->GetValue()) + "\n");

	if (m_checkBox_server_ipv4_only->IsChecked())
		server_settings += "ipv4_only=1\n";

	if (m_checkBox_server_blast->IsChecked())
		server_settings += "blast=1\n";

	if (m_checkBox_server_stun->IsChecked() && !m_textCtrl_server_stun->IsEmpty())
		server_settings += ("stun_server=" + m_textCtrl_server_stun->GetValue() + "\n");

	if (m_checkBox_server_log_path->IsChecked() && !m_textCtrl_server_log_path->IsEmpty())
		server_settings += ("stun_server=" + m_textCtrl_server_log_path->GetValue() + "\n");

	if (m_choice_server_encryption_algorithm->GetSelection() != 0)
	{
		wxString encryption_algorithm = encryption_selection_to_string(m_choice_server_encryption_algorithm->GetSelection());
		wxString encryption_password = m_textCtrl_server_encryption_password->GetValue();
		server_settings += ("encryption_algorithm=" + encryption_algorithm + "\n");
		server_settings += ("encryption_password=" + encryption_password + "\n");
	}

	wxString server_file_path = m_filePicker_server_select_file->GetPath();
	wxString server_done = userinput_text_id_to_text[languages::userinput_text_id::conf_not_saved];
	wxFile server_file;

	if (server_file.Open(server_file_path, wxFile::write))
	{
		if (server_file.Write(server_settings))
			server_done = userinput_text_id_to_text[languages::userinput_text_id::conf_saved];
	}

	wxMessageBox(server_done, "KCPTube Configuration File Generator", wxICON_INFORMATION, this);
}

void KCPTubeGeneratorUserInput::ResetServerValues()
{
	int current_selection = m_choice_server_kcp_profile->GetSelection();
	bool enable_all = current_selection == 11;

	m_staticText_server_kcp_nodelay->Enable(enable_all);
	m_spinCtrl_server_kcp_nodelay->Enable(enable_all);
	m_staticText_server_kcp_interval->Enable(enable_all);
	m_spinCtrl_server_kcp_interval->Enable(enable_all);
	m_staticText_server_kcp_resend->Enable(enable_all);
	m_spinCtrl_server_kcp_resend->Enable(enable_all);
	m_staticText_server_kcp_nc->Enable(enable_all);
	m_choice_server_kcp_nc->Enable(enable_all);
	m_staticText_server_kcp_sndwnd->Enable(enable_all);
	m_spinCtrl_server_kcp_sndwnd->Enable(enable_all);
	m_staticText_server_kcp_rcvwnd->Enable(enable_all);
	m_spinCtrl_server_kcp_rcvwnd->Enable(enable_all);

	user_settings current_settings = userinput_kcp_profile_get_settings(current_selection);

	m_spinCtrl_server_kcp_nodelay->SetValue(current_settings.kcp_nodelay);
	m_spinCtrl_server_kcp_interval->SetValue(current_settings.kcp_interval);
	m_spinCtrl_server_kcp_resend->SetValue(current_settings.kcp_resend);
	m_choice_server_kcp_nc->SetSelection(current_settings.kcp_nc);
	m_spinCtrl_server_kcp_sndwnd->SetValue(current_settings.kcp_sndwnd);
	m_spinCtrl_server_kcp_rcvwnd->SetValue(current_settings.kcp_rcvwnd);
}

