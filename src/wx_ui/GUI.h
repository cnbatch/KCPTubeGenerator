///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/choice.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/filepicker.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/notebook.h>
#include <wx/dialog.h>
#include <wx/statline.h>
#include <wx/hyperlink.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class UserInput
///////////////////////////////////////////////////////////////////////////////
class UserInput : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel_userinput_base;
		wxNotebook* m_notebook_userinput;
		wxPanel* m_panel_client_tab;
		wxPanel* m_panel_client_kcp_profile;
		wxStaticBoxSizer* sbSizer_client_kcp_profile;
		wxStaticText* m_staticText_client_kcp_profile;
		wxChoice* m_choice_client_kcp_profile;
		wxStaticText* m_staticText_client_kcp_nodelay;
		wxSpinCtrl* m_spinCtrl_client_kcp_nodelay;
		wxStaticText* m_staticText_client_kcp_interval;
		wxSpinCtrl* m_spinCtrl_client_kcp_interval;
		wxStaticText* m_staticText_client_kcp_resend;
		wxSpinCtrl* m_spinCtrl_client_kcp_resend;
		wxStaticText* m_staticText_client_kcp_nc;
		wxChoice* m_choice_client_kcp_nc;
		wxStaticText* m_staticText_client_kcp_sndwnd;
		wxSpinCtrl* m_spinCtrl_client_kcp_sndwnd;
		wxStaticText* m_staticText_client_kcp_rcvwnd;
		wxSpinCtrl* m_spinCtrl_client_kcp_rcvwnd;
		wxPanel* m_panel_client_security_settings;
		wxStaticBoxSizer* sbSizer_client_security_settings;
		wxStaticText* m_staticText_client_encryption_algorithm;
		wxChoice* m_choice_client_encryption_algorithm;
		wxStaticText* m_staticText_client_encryption_password;
		wxTextCtrl* m_textCtrl_client_encryption_password;
		wxStaticBoxSizer* sbSizer_client_network_settings;
		wxCheckBox* m_checkBox_client_listen_on;
		wxTextCtrl* m_textCtrl_client_listen_on;
		wxStaticText* m_staticText_client_listen_port;
		wxSpinCtrl* m_spinCtrl_client_listen_port;
		wxStaticText* m_staticText_client_destination_address;
		wxTextCtrl* m_textCtrl_client_destination_address;
		wxChoice* m_choice_client_destination_port;
		wxSpinCtrl* m_spinCtrl_client_destination_port;
		wxSpinCtrl* m_spinCtrl_client_destination_port2;
		wxCheckBox* m_checkBox_client_dport_refresh;
		wxSpinCtrl* m_spinCtrl_client_dport_refresh;
		wxCheckBox* m_checkBox_client_udp_timeout;
		wxSpinCtrl* m_spinCtrl_client_udp_timeout;
		wxCheckBox* m_checkBox_client_keep_alive;
		wxSpinCtrl* m_spinCtrl_client_keep_alive;
		wxCheckBox* m_checkBox_client_mux_tunnels;
		wxSpinCtrl* m_spinCtrl_client_mux_tunnels;
		wxStaticText* m_staticText_client_outbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_client_outbound_bandwidth;
		wxChoice* m_choice_client_outbound_bandwidth;
		wxStaticText* m_staticText_client_inbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_client_inbound_bandwidth;
		wxChoice* m_choice_client_inbound_bandwidth;
		wxCheckBox* m_checkBox_client_mtu;
		wxSpinCtrl* m_spinCtrl_client_mtu;
		wxCheckBox* m_checkBox_client_ipv4_only;
		wxStaticBoxSizer* sbSizer_client_log;
		wxCheckBox* m_checkBox_client_log_path;
		wxTextCtrl* m_textCtrl_client_log_path;
		wxStaticBoxSizer* sbSizer_client_save_file;
		wxStaticText* m_staticText_client_save_file;
		wxFilePickerCtrl* m_filePicker_client_select_file;
		wxButton* m_button_client_save;
		wxPanel* m_panel_relay_tab;
		wxPanel* m_panel_relay_kcp_profile_fc;
		wxStaticBoxSizer* sbSizer_relay_kcp_profile_fc;
		wxStaticText* m_staticText_relay_kcp_profile_fc;
		wxChoice* m_choice_relay_kcp_profile_fc;
		wxStaticText* m_staticText_relay_kcp_nodelay_fc;
		wxSpinCtrl* m_spinCtrl_relay_kcp_nodelay_fc;
		wxStaticText* m_staticText_relay_kcp_interval_fc;
		wxSpinCtrl* m_spinCtrl_relay_kcp_interval_fc;
		wxStaticText* m_staticText_relay_kcp_resend_fc;
		wxSpinCtrl* m_spinCtrl_relay_kcp_resend_fc;
		wxStaticText* m_staticText_relay_kcp_nc_fc;
		wxChoice* m_choice_relay_kcp_nc_fc;
		wxStaticText* m_staticText_relay_kcp_sndwnd_fc;
		wxSpinCtrl* m_spinCtrl_relay_kcp_sndwnd_fc;
		wxStaticText* m_staticText_relay_kcp_rcvwnd_fc;
		wxSpinCtrl* m_spinCtrl_relay_kcp_rcvwnd_fc;
		wxPanel* m_panel_relay_kcp_profile_ts;
		wxStaticBoxSizer* sbSizer_relay_kcp_profile_ts;
		wxStaticText* m_staticText_relay_kcp_profile_ts;
		wxChoice* m_choice_relay_kcp_profile_ts;
		wxStaticText* m_staticText_relay_kcp_nodelay_ts;
		wxSpinCtrl* m_spinCtrl_relay_kcp_nodelay_ts;
		wxStaticText* m_staticText_relay_kcp_interval_ts;
		wxSpinCtrl* m_spinCtrl_relay_kcp_interval_ts;
		wxStaticText* m_staticText_relay_kcp_resend_ts;
		wxSpinCtrl* m_spinCtrl_relay_kcp_resend_ts;
		wxStaticText* m_staticText_relay_kcp_nc_ts;
		wxChoice* m_choice_relay_kcp_nc_ts;
		wxStaticText* m_staticText_relay_kcp_sndwnd_ts;
		wxSpinCtrl* m_spinCtrl_relay_kcp_sndwnd_ts;
		wxStaticText* m_staticText_relay_kcp_rcvwnd_ts;
		wxSpinCtrl* m_spinCtrl_relay_kcp_rcvwnd_ts;
		wxPanel* m_panel_relay_network_fc;
		wxStaticBoxSizer* sbSizer_relay_network_settings_fc;
		wxCheckBox* m_checkBox_relay_listen_on;
		wxTextCtrl* m_textCtrl_relay_listen_on;
		wxChoice* m_choice_relay_listen_port;
		wxSpinCtrl* m_spinCtrl_relay_listen_port;
		wxSpinCtrl* m_spinCtrl_relay_listen_port2;
		wxCheckBox* m_checkBox_relay_udp_timeout_fc;
		wxSpinCtrl* m_spinCtrl_relay_udp_timeout_fc;
		wxCheckBox* m_checkBox_relay_keep_alive_fc;
		wxSpinCtrl* m_spinCtrl_relay_keep_alive_fc;
		wxCheckBox* m_checkBox_relay_mtu_fc;
		wxSpinCtrl* m_spinCtrl_relay_mtu_fc;
		wxCheckBox* m_checkBox_relay_ipv4_only_fc;
		wxPanel* m_panel_relay_network_ts;
		wxStaticBoxSizer* sbSizer_relay_network_settings_ts;
		wxStaticText* m_staticText_relay_destination_address;
		wxTextCtrl* m_textCtrl_relay_destination_address;
		wxChoice* m_choice_relay_destination_port;
		wxSpinCtrl* m_spinCtrl_relay_destination_port;
		wxSpinCtrl* m_spinCtrl_relay_destination_port2;
		wxCheckBox* m_checkBox_relay_dport_refresh;
		wxSpinCtrl* m_spinCtrl_relay_dport_refresh;
		wxCheckBox* m_checkBox_relay_udp_timeout_ts;
		wxSpinCtrl* m_spinCtrl_relay_udp_timeout_ts;
		wxCheckBox* m_checkBox_relay_keep_alive_ts;
		wxSpinCtrl* m_spinCtrl_relay_keep_alive_ts;
		wxCheckBox* m_checkBox_relay_mtu_ts;
		wxSpinCtrl* m_spinCtrl_relay_mtu_ts;
		wxCheckBox* m_checkBox_relay_ipv4_only_ts;
		wxStaticBoxSizer* sbSizer_relay_network_settings;
		wxStaticText* m_staticText_relay_outbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_relay_outbound_bandwidth;
		wxChoice* m_choice_relay_outbound_bandwidth;
		wxStaticText* m_staticText_relay_inbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_relay_inbound_bandwidth;
		wxChoice* m_choice_relay_inbound_bandwidth;
		wxStaticBoxSizer* sbSizer_relay_security_settings;
		wxPanel* m_panel_relay_security_from_client;
		wxStaticBoxSizer* sbSizer_relay_security_settings_fc;
		wxStaticText* m_staticText_relay_encryption_algorithm_fc;
		wxChoice* m_choice_relay_encryption_algorithm_fc;
		wxStaticText* m_staticText_relay_encryption_password_fc;
		wxTextCtrl* m_textCtrl_relay_encryption_password_fc;
		wxPanel* m_panel_relay_security_top_server;
		wxStaticBoxSizer* sbSizer_relay_security_settings_ts;
		wxStaticText* m_staticText_relay_encryption_algorithm_ts;
		wxChoice* m_choice_relay_encryption_algorithm_ts;
		wxStaticText* m_staticText_relay_encryption_password_ts;
		wxTextCtrl* m_textCtrl_relay_encryption_password_ts;
		wxStaticBoxSizer* sbSizer_relay_save_file;
		wxStaticText* m_staticText_relay_save_file;
		wxFilePickerCtrl* m_filePicker_relay_select_file;
		wxButton* m_button_relay_save;
		wxPanel* m_panel_server_tab;
		wxPanel* m_panel_server_kcp_peofile;
		wxStaticBoxSizer* sbSizer_server_kcp_profile;
		wxStaticText* m_staticText_kcp_profile;
		wxChoice* m_choice_server_kcp_profile;
		wxStaticText* m_staticText_server_kcp_nodelay;
		wxSpinCtrl* m_spinCtrl_server_kcp_nodelay;
		wxStaticText* m_staticText_server_kcp_interval;
		wxSpinCtrl* m_spinCtrl_server_kcp_interval;
		wxStaticText* m_staticText_server_kcp_resend;
		wxSpinCtrl* m_spinCtrl_server_kcp_resend;
		wxStaticText* m_staticText_server_kcp_nc;
		wxChoice* m_choice_server_kcp_nc;
		wxStaticText* m_staticText_server_kcp_sndwnd;
		wxSpinCtrl* m_spinCtrl_server_kcp_sndwnd;
		wxStaticText* m_staticText_server_kcp_rcvwnd;
		wxSpinCtrl* m_spinCtrl_server_kcp_rcvwnd;
		wxPanel* m_panel_server_security_settings;
		wxStaticBoxSizer* sbSizer_server_security_settings;
		wxStaticText* m_staticText_server_encryption_algorithm;
		wxChoice* m_choice_server_encryption_algorithm;
		wxStaticText* m_staticText_server_encryption_password;
		wxTextCtrl* m_textCtrl_server_encryption_password;
		wxStaticBoxSizer* sbSizer_server_network_settings;
		wxCheckBox* m_checkBox_server_listen_on;
		wxTextCtrl* m_textCtrl_server_listen_on;
		wxChoice* m_choice_server_listen_port;
		wxSpinCtrl* m_spinCtrl_server_listen_port;
		wxSpinCtrl* m_spinCtrl_server_listen_port2;
		wxStaticText* m_staticText_server_destination_address;
		wxTextCtrl* m_textCtrl_server_destination_address;
		wxStaticText* m_staticText_server_destination_port;
		wxSpinCtrl* m_spinCtrl_server_destination_port;
		wxCheckBox* m_checkBox_server_udp_timeout;
		wxSpinCtrl* m_spinCtrl_server_udp_timeout;
		wxCheckBox* m_checkBox_server_keep_alive;
		wxSpinCtrl* m_spinCtrl_server_keep_alive;
		wxStaticText* m_staticText_server_outbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_server_outbound_bandwidth;
		wxChoice* m_choice_server_outbound_bandwidth;
		wxStaticText* m_staticText_server_inbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_server_inbound_bandwidth;
		wxChoice* m_choice_server_inbound_bandwidth;
		wxCheckBox* m_checkBox_server_mtu;
		wxSpinCtrl* m_spinCtrl_server_mtu;
		wxCheckBox* m_checkBox_server_ipv4_only;
		wxStaticBoxSizer* sbSizer_server_stun;
		wxCheckBox* m_checkBox_server_stun;
		wxTextCtrl* m_textCtrl_server_stun;
		wxStaticBoxSizer* sbSizer_server_log;
		wxCheckBox* m_checkBox_server_log_path;
		wxTextCtrl* m_textCtrl_server_log_path;
		wxStaticBoxSizer* sbSizer_server_save_file;
		wxStaticText* m_staticText_server_save_file;
		wxFilePickerCtrl* m_filePicker_server_select_file;
		wxButton* m_button_server_save;

		// Virtual event handlers, override them in your derived class
		virtual void ClientKCPProfileOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientEncrypitonOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientListenAddressOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientDestinationPortOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientDPortRefreshOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientUDPTimeoutOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientKeepAliveOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientMuxTunnelsOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientMTUOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientIPv4OnlyOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientLogPathOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClientVerifyAndSaveOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayFromClientKCPProfileOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayToServerKCPProfileOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayListenAddressOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayListenPortOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayFromClientUDPTimeoutOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayFromClientKeepAliveOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayFromClientMTUOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayFromClientIPv4OnlyOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayDestinationPortOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayDPortRefreshOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayToServerUDPTimeoutOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayToServerKeepAliveOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayToServerMTUOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayToServerIPv4OnlyOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayFromClientEncrypitonOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayToServerEncrypitonOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayVerifyAndSaveOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void RelayKCPProfileOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerEncrypitonOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerListenAddressOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerUDPTimeoutOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerKeepAliveOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerMTUOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerIPv4OnlyOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerStunServerOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerLogPathOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void ServerVerifyAndSaveOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		UserInput( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("KCPTube Configuration Generator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~UserInput();

};

///////////////////////////////////////////////////////////////////////////////
/// Class Entrance
///////////////////////////////////////////////////////////////////////////////
class Entrance : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel_dialog_entrance;
		wxPanel* m_panel_holdings;
		wxStaticText* m_staticText_show_selections;
		wxButton* m_button_wizard;
		wxButton* m_button_manual;
		wxButton* m_button_verify;
		wxStaticLine* m_staticline1;
		wxStaticText* m_staticText_readme;
		wxHyperlinkCtrl* m_hyperlink_to_website;
		wxHyperlinkCtrl* m_hyperlink_link_to_this_tool;
		wxStaticText* m_staticText_version;

		// Virtual event handlers, override them in your derived class
		virtual void EntranceStepbyStepOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void EntranceUserInputOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void EntranceVerifyFileOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		Entrance( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("KCPTube Configuration File Generator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxTAB_TRAVERSAL );

		~Entrance();

};

///////////////////////////////////////////////////////////////////////////////
/// Class StepByStep
///////////////////////////////////////////////////////////////////////////////
class StepByStep : public wxDialog
{
	private:

	protected:
		wxPanel* m_panel_stepbystep_base;
		wxPanel* m_panel_stepbystep_s1;
		wxStaticBoxSizer* sbSizer_stepbystep_s1;
		wxStaticText* m_staticText_sbs_s1_readme;
		wxStaticText* m_staticText_sbs_s1_port;
		wxSpinCtrl* m_spinCtrl_sbs_s1_port;
		wxStaticText* m_staticText_sbs_local_bandwidths;
		wxStaticText* m_staticText_sbs_s1_outbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_sbs_s1_outbound_bandwidth;
		wxChoice* m_choice_sbs_s1_outbound_bandwidth;
		wxStaticText* m_staticText_sbs_s1_inbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_sbs_s1_inbound_bandwidth;
		wxChoice* m_choice_sbs_s1_inbound_bandwidth;
		wxPanel* m_panel_stepbystep_s2;
		wxStaticBoxSizer* sbSizer_stepbystep_s2;
		wxStaticText* m_staticText_sbs_s2_kcp;
		wxChoice* m_choice_sbs_s2_kcp;
		wxStaticText* m_staticText_sbs_s2_server_address;
		wxTextCtrl* m_textCtrl_sbs_s2_server_address;
		wxStaticText* m_staticText_sbs_s2_server_ports;
		wxSpinCtrl* m_spinCtrl_sbs_s2_server_port1;
		wxSpinCtrl* m_spinCtrl_sbs_s2_server_port2;
		wxStaticText* m_staticText_sbs_encryption;
		wxChoice* m_choice_sbs_s2_encryption;
		wxStaticText* m_staticText_sbs_s2_password;
		wxTextCtrl* m_textCtrl_sbs_s2_password;
		wxStaticText* m_staticText_sbs_s2_outbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_sbs_s2_outbound_bandwidth;
		wxChoice* m_choice_sbs_s2_outbound_bandwidth;
		wxStaticText* m_staticText_sbs_s2_inbound_bandwidth;
		wxSpinCtrl* m_spinCtrl_sbs_s2_inbound_bandwidth;
		wxChoice* m_choice_sbs_s2_inbound_bandwidth;
		wxPanel* m_panel_stepbystep_s3;
		wxStaticBoxSizer* sbSizer_stepbystep_s3;
		wxCheckBox* m_checkBox_sbs_s3_mtu;
		wxSpinCtrl* m_spinCtrl_sbs_s3_mtu;
		wxCheckBox* m_checkBox_sbs_s3_dport_refresh;
		wxSpinCtrl* m_spinCtrl_sbs_s3_dportre_fresh;
		wxCheckBox* m_checkBox_sbs_s3_udp_timtout;
		wxSpinCtrl* m_spinCtrl_sbs_s3_udp_timeout;
		wxCheckBox* m_checkBox_sbs_s3_keepalive;
		wxSpinCtrl* m_spinCtrl_sbs_s3_keepalive;
		wxCheckBox* m_checkBox_sbs_s3_mux_tunnels;
		wxSpinCtrl* m_spinCtrl_sbs_s3_mux_tunnels;
		wxPanel* m_panel_stepbystep_s4;
		wxStaticBoxSizer* sbSizer_stepbystep_s4_savefile;
		wxStaticText* m_staticText_sbs_s4_client;
		wxFilePickerCtrl* m_filePicker_sbs_s4_client;
		wxStaticText* m_staticText_sbs_s4_server;
		wxFilePickerCtrl* m_filePicker_sbs_s4_server;
		wxButton* m_button_sbs_s4_save_file;

		// Virtual event handlers, override them in your derived class
		virtual void Step2EncryptionOnChoice( wxCommandEvent& event ) { event.Skip(); }
		virtual void Step3MTUOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void Step3DPortRefreshOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void Step3UDPTimeoutOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void Step3KeepAliveOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void Step3MuxTunnelsOnCheckBox( wxCommandEvent& event ) { event.Skip(); }
		virtual void Step4SaveFileOnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		StepByStep( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("KCPTube Configuration File Generator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~StepByStep();

};

