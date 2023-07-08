///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

UserInput::UserInput( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer_userinput_base;
	bSizer_userinput_base = new wxBoxSizer( wxVERTICAL );

	m_panel_userinput_base = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_userinput_holdings;
	bSizer_userinput_holdings = new wxBoxSizer( wxVERTICAL );

	m_notebook_userinput = new wxNotebook( m_panel_userinput_base, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_client_tab = new wxPanel( m_notebook_userinput, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_client_tab;
	bSizer_client_tab = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_client_level_1;
	bSizer_client_level_1 = new wxBoxSizer( wxHORIZONTAL );

	m_panel_client_kcp_profile = new wxPanel( m_panel_client_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_client_kcp_profile = new wxStaticBoxSizer( new wxStaticBox( m_panel_client_kcp_profile, wxID_ANY, wxT("KCP Profile Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_client_selectprofile;
	gSizer_client_selectprofile = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_client_kcp_profile = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("KCP Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_profile->Wrap( -1 );
	gSizer_client_selectprofile->Add( m_staticText_client_kcp_profile, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_client_kcp_profileChoices[] = { wxT("fast1"), wxT("fast2"), wxT("fast3"), wxT("fast4"), wxT("fast5"), wxT("fast6"), wxT("regular1"), wxT("regular2"), wxT("regular3"), wxT("regular4"), wxT("regular5"), wxT("manual") };
	int m_choice_client_kcp_profileNChoices = sizeof( m_choice_client_kcp_profileChoices ) / sizeof( wxString );
	m_choice_client_kcp_profile = new wxChoice( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_client_kcp_profileNChoices, m_choice_client_kcp_profileChoices, 0 );
	m_choice_client_kcp_profile->SetSelection( 9 );
	gSizer_client_selectprofile->Add( m_choice_client_kcp_profile, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_client_kcp_profile->Add( gSizer_client_selectprofile, 0, wxEXPAND, 5 );

	wxGridSizer* gSizer_client_kcp_settings;
	gSizer_client_kcp_settings = new wxGridSizer( 0, 4, 0, 0 );

	m_staticText_client_kcp_nodelay = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_nodelay"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_nodelay->Wrap( -1 );
	m_staticText_client_kcp_nodelay->Enable( false );

	gSizer_client_kcp_settings->Add( m_staticText_client_kcp_nodelay, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_client_kcp_nodelay = new wxSpinCtrl( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2, 0 );
	m_spinCtrl_client_kcp_nodelay->Enable( false );

	gSizer_client_kcp_settings->Add( m_spinCtrl_client_kcp_nodelay, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_kcp_interval = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_interval"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_interval->Wrap( -1 );
	m_staticText_client_kcp_interval->Enable( false );

	gSizer_client_kcp_settings->Add( m_staticText_client_kcp_interval, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_client_kcp_interval = new wxSpinCtrl( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 5000, 1 );
	m_spinCtrl_client_kcp_interval->Enable( false );

	gSizer_client_kcp_settings->Add( m_spinCtrl_client_kcp_interval, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_kcp_resend = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_resend"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_resend->Wrap( -1 );
	m_staticText_client_kcp_resend->Enable( false );

	gSizer_client_kcp_settings->Add( m_staticText_client_kcp_resend, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_client_kcp_resend = new wxSpinCtrl( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 2 );
	m_spinCtrl_client_kcp_resend->Enable( false );

	gSizer_client_kcp_settings->Add( m_spinCtrl_client_kcp_resend, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_kcp_nc = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_nc"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_nc->Wrap( -1 );
	m_staticText_client_kcp_nc->Enable( false );

	gSizer_client_kcp_settings->Add( m_staticText_client_kcp_nc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_client_kcp_ncChoices[] = { wxT("0"), wxT("1") };
	int m_choice_client_kcp_ncNChoices = sizeof( m_choice_client_kcp_ncChoices ) / sizeof( wxString );
	m_choice_client_kcp_nc = new wxChoice( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_client_kcp_ncNChoices, m_choice_client_kcp_ncChoices, 0 );
	m_choice_client_kcp_nc->SetSelection( 0 );
	m_choice_client_kcp_nc->Enable( false );

	gSizer_client_kcp_settings->Add( m_choice_client_kcp_nc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_kcp_sndwnd = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_sndwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_sndwnd->Wrap( -1 );
	m_staticText_client_kcp_sndwnd->Enable( false );

	gSizer_client_kcp_settings->Add( m_staticText_client_kcp_sndwnd, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_client_kcp_sndwnd = new wxSpinCtrl( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 32 );
	m_spinCtrl_client_kcp_sndwnd->Enable( false );

	gSizer_client_kcp_settings->Add( m_spinCtrl_client_kcp_sndwnd, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_kcp_rcvwnd = new wxStaticText( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_rcvwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_kcp_rcvwnd->Wrap( -1 );
	m_staticText_client_kcp_rcvwnd->Enable( false );

	gSizer_client_kcp_settings->Add( m_staticText_client_kcp_rcvwnd, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_client_kcp_rcvwnd = new wxSpinCtrl( sbSizer_client_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 32 );
	m_spinCtrl_client_kcp_rcvwnd->Enable( false );

	gSizer_client_kcp_settings->Add( m_spinCtrl_client_kcp_rcvwnd, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_client_kcp_profile->Add( gSizer_client_kcp_settings, 0, wxEXPAND, 5 );


	m_panel_client_kcp_profile->SetSizer( sbSizer_client_kcp_profile );
	m_panel_client_kcp_profile->Layout();
	sbSizer_client_kcp_profile->Fit( m_panel_client_kcp_profile );
	bSizer_client_level_1->Add( m_panel_client_kcp_profile, 1, wxALL|wxEXPAND, 5 );

	m_panel_client_security_settings = new wxPanel( m_panel_client_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_client_security_settings = new wxStaticBoxSizer( new wxStaticBox( m_panel_client_security_settings, wxID_ANY, wxT("Security Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_client_security_settings;
	gSizer_client_security_settings = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_client_encryption_algorithm = new wxStaticText( sbSizer_client_security_settings->GetStaticBox(), wxID_ANY, wxT("encryption_algorithm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_encryption_algorithm->Wrap( -1 );
	gSizer_client_security_settings->Add( m_staticText_client_encryption_algorithm, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_client_encryption_algorithmChoices[] = { wxT("none"), wxT("AES-256-GCM"), wxT("AES-256-OCB"), wxT("ChaCha20-Poly1305"), wxT("XChaCha20-Poly1305") };
	int m_choice_client_encryption_algorithmNChoices = sizeof( m_choice_client_encryption_algorithmChoices ) / sizeof( wxString );
	m_choice_client_encryption_algorithm = new wxChoice( sbSizer_client_security_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_client_encryption_algorithmNChoices, m_choice_client_encryption_algorithmChoices, 0 );
	m_choice_client_encryption_algorithm->SetSelection( 1 );
	gSizer_client_security_settings->Add( m_choice_client_encryption_algorithm, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_encryption_password = new wxStaticText( sbSizer_client_security_settings->GetStaticBox(), wxID_ANY, wxT("encryption_password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_encryption_password->Wrap( -1 );
	gSizer_client_security_settings->Add( m_staticText_client_encryption_password, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_client_encryption_password = new wxTextCtrl( sbSizer_client_security_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_security_settings->Add( m_textCtrl_client_encryption_password, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_client_security_settings->Add( gSizer_client_security_settings, 1, wxEXPAND, 5 );


	m_panel_client_security_settings->SetSizer( sbSizer_client_security_settings );
	m_panel_client_security_settings->Layout();
	sbSizer_client_security_settings->Fit( m_panel_client_security_settings );
	bSizer_client_level_1->Add( m_panel_client_security_settings, 0, wxALL|wxEXPAND, 5 );


	bSizer_client_tab->Add( bSizer_client_level_1, 0, wxEXPAND, 5 );

	sbSizer_client_network_settings = new wxStaticBoxSizer( new wxStaticBox( m_panel_client_tab, wxID_ANY, wxT("Network Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_client_network_settings;
	gSizer_client_network_settings = new wxGridSizer( 0, 4, 0, 0 );

	m_checkBox_client_listen_on = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("listen_on"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_listen_on, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_client_listen_on = new wxTextCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_client_listen_on->Enable( false );

	gSizer_client_network_settings->Add( m_textCtrl_client_listen_on, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText_client_listen_port = new wxStaticText( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("listen_port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_listen_port->Wrap( -1 );
	gSizer_client_network_settings->Add( m_staticText_client_listen_port, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_client_listen_port = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	gSizer_client_network_settings->Add( m_spinCtrl_client_listen_port, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_destination_address = new wxStaticText( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("destination_address"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_destination_address->Wrap( -1 );
	gSizer_client_network_settings->Add( m_staticText_client_destination_address, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_client_destination_address = new wxTextCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_textCtrl_client_destination_address, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_client_destination_portChoices[] = { wxT("Port Ranges Mode"), wxT("Single Port Mode") };
	int m_choice_client_destination_portNChoices = sizeof( m_choice_client_destination_portChoices ) / sizeof( wxString );
	m_choice_client_destination_port = new wxChoice( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_client_destination_portNChoices, m_choice_client_destination_portChoices, 0 );
	m_choice_client_destination_port->SetSelection( 0 );
	gSizer_client_network_settings->Add( m_choice_client_destination_port, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_client_destination_ports;
	bSizer_client_destination_ports = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_client_destination_port = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_client_destination_ports->Add( m_spinCtrl_client_destination_port, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_client_destination_port2 = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_client_destination_ports->Add( m_spinCtrl_client_destination_port2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_client_network_settings->Add( bSizer_client_destination_ports, 1, wxEXPAND, 5 );

	m_checkBox_client_dport_refresh = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("dport_refresh"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_dport_refresh, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_client_dport_refresh = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 0 );
	m_spinCtrl_client_dport_refresh->Enable( false );

	gSizer_client_network_settings->Add( m_spinCtrl_client_dport_refresh, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_client_udp_timeout = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("udp_timeout"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_udp_timeout, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_client_udp_timeout = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_client_udp_timeout->Enable( false );

	gSizer_client_network_settings->Add( m_spinCtrl_client_udp_timeout, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_client_keep_alive = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("keep_alive"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_keep_alive, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_client_keep_alive = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_client_keep_alive->Enable( false );

	gSizer_client_network_settings->Add( m_spinCtrl_client_keep_alive, 0, wxALL, 5 );

	m_checkBox_client_mux_tunnels = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("mux_tunnels"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_mux_tunnels, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_client_mux_tunnels = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_client_mux_tunnels->Enable( false );

	gSizer_client_network_settings->Add( m_spinCtrl_client_mux_tunnels, 0, wxALL, 5 );

	m_staticText_client_outbound_bandwidth = new wxStaticText( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("outbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_outbound_bandwidth->Wrap( -1 );
	gSizer_client_network_settings->Add( m_staticText_client_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_client_outbound_bandwidth;
	bSizer_client_outbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_client_outbound_bandwidth = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_client_outbound_bandwidth->Add( m_spinCtrl_client_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_client_outbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_client_outbound_bandwidthNChoices = sizeof( m_choice_client_outbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_client_outbound_bandwidth = new wxChoice( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_client_outbound_bandwidthNChoices, m_choice_client_outbound_bandwidthChoices, 0 );
	m_choice_client_outbound_bandwidth->SetSelection( 4 );
	bSizer_client_outbound_bandwidth->Add( m_choice_client_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_client_network_settings->Add( bSizer_client_outbound_bandwidth, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_client_inbound_bandwidth = new wxStaticText( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("inbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_inbound_bandwidth->Wrap( -1 );
	gSizer_client_network_settings->Add( m_staticText_client_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_client_inbound_bandwidth;
	bSizer_client_inbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_client_inbound_bandwidth = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_client_inbound_bandwidth->Add( m_spinCtrl_client_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_client_inbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_client_inbound_bandwidthNChoices = sizeof( m_choice_client_inbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_client_inbound_bandwidth = new wxChoice( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_client_inbound_bandwidthNChoices, m_choice_client_inbound_bandwidthChoices, 0 );
	m_choice_client_inbound_bandwidth->SetSelection( 4 );
	bSizer_client_inbound_bandwidth->Add( m_choice_client_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_client_network_settings->Add( bSizer_client_inbound_bandwidth, 0, wxEXPAND, 5 );

	m_checkBox_client_mtu = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("MTU"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_mtu, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_client_mtu = new wxSpinCtrl( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 1440 );
	m_spinCtrl_client_mtu->Enable( false );

	gSizer_client_network_settings->Add( m_spinCtrl_client_mtu, 0, wxALL, 5 );

	m_checkBox_client_ipv4_only = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("ipv4_only"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_ipv4_only, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_checkBox_client_blast = new wxCheckBox( sbSizer_client_network_settings->GetStaticBox(), wxID_ANY, wxT("blast"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_client_network_settings->Add( m_checkBox_client_blast, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	sbSizer_client_network_settings->Add( gSizer_client_network_settings, 0, wxEXPAND, 5 );


	bSizer_client_tab->Add( sbSizer_client_network_settings, 0, wxEXPAND, 5 );

	sbSizer_client_log = new wxStaticBoxSizer( new wxStaticBox( m_panel_client_tab, wxID_ANY, wxT("Save Log") ), wxVERTICAL );

	wxBoxSizer* bSizer_client_save_log;
	bSizer_client_save_log = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox_client_log_path = new wxCheckBox( sbSizer_client_log->GetStaticBox(), wxID_ANY, wxT("log_path"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_client_save_log->Add( m_checkBox_client_log_path, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_client_log_path = new wxTextCtrl( sbSizer_client_log->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_client_log_path->Enable( false );

	bSizer_client_save_log->Add( m_textCtrl_client_log_path, 1, wxALL, 5 );


	sbSizer_client_log->Add( bSizer_client_save_log, 0, wxEXPAND, 5 );


	bSizer_client_tab->Add( sbSizer_client_log, 0, wxEXPAND, 5 );

	sbSizer_client_save_file = new wxStaticBoxSizer( new wxStaticBox( m_panel_client_tab, wxID_ANY, wxT("Save Configuration File") ), wxVERTICAL );

	wxBoxSizer* bSizer_client_save_file;
	bSizer_client_save_file = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_client_save_file = new wxStaticText( sbSizer_client_save_file->GetStaticBox(), wxID_ANY, wxT("Location"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_client_save_file->Wrap( -1 );
	bSizer_client_save_file->Add( m_staticText_client_save_file, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker_client_select_file = new wxFilePickerCtrl( sbSizer_client_save_file->GetStaticBox(), wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.conf"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	bSizer_client_save_file->Add( m_filePicker_client_select_file, 1, wxALL|wxEXPAND, 5 );


	sbSizer_client_save_file->Add( bSizer_client_save_file, 1, wxEXPAND, 5 );

	m_button_client_save = new wxButton( sbSizer_client_save_file->GetStaticBox(), wxID_ANY, wxT("Verify and Save"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer_client_save_file->Add( m_button_client_save, 0, wxALL|wxEXPAND, 5 );


	bSizer_client_tab->Add( sbSizer_client_save_file, 0, wxEXPAND, 5 );


	m_panel_client_tab->SetSizer( bSizer_client_tab );
	m_panel_client_tab->Layout();
	bSizer_client_tab->Fit( m_panel_client_tab );
	m_notebook_userinput->AddPage( m_panel_client_tab, wxT("Client Mode"), true );
	m_panel_relay_tab = new wxPanel( m_notebook_userinput, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_relay_tab;
	bSizer_relay_tab = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_relay_kcp_profile_both;
	bSizer_relay_kcp_profile_both = new wxBoxSizer( wxHORIZONTAL );

	m_panel_relay_kcp_profile_fc = new wxPanel( m_panel_relay_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_relay_kcp_profile_fc = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_kcp_profile_fc, wxID_ANY, wxT("KCP Profile Settings (From Client)") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_selectprofile_fc;
	gSizer_relay_selectprofile_fc = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_relay_kcp_profile_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("KCP Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_profile_fc->Wrap( -1 );
	gSizer_relay_selectprofile_fc->Add( m_staticText_relay_kcp_profile_fc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_relay_kcp_profile_fcChoices[] = { wxT("fast1"), wxT("fast2"), wxT("fast3"), wxT("fast4"), wxT("fast5"), wxT("fast6"), wxT("regular1"), wxT("regular2"), wxT("regular3"), wxT("regular4"), wxT("regular5"), wxT("manual") };
	int m_choice_relay_kcp_profile_fcNChoices = sizeof( m_choice_relay_kcp_profile_fcChoices ) / sizeof( wxString );
	m_choice_relay_kcp_profile_fc = new wxChoice( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_kcp_profile_fcNChoices, m_choice_relay_kcp_profile_fcChoices, 0 );
	m_choice_relay_kcp_profile_fc->SetSelection( 9 );
	gSizer_relay_selectprofile_fc->Add( m_choice_relay_kcp_profile_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_relay_kcp_profile_fc->Add( gSizer_relay_selectprofile_fc, 0, wxEXPAND, 5 );

	wxGridSizer* gSizer_relay_kcp_settings_fc;
	gSizer_relay_kcp_settings_fc = new wxGridSizer( 0, 4, 0, 0 );

	m_staticText_relay_kcp_nodelay_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("kcp_nodelay"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_nodelay_fc->Wrap( -1 );
	m_staticText_relay_kcp_nodelay_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_staticText_relay_kcp_nodelay_fc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_nodelay_fc = new wxSpinCtrl( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2, 0 );
	m_spinCtrl_relay_kcp_nodelay_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_spinCtrl_relay_kcp_nodelay_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_interval_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("kcp_interval"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_interval_fc->Wrap( -1 );
	m_staticText_relay_kcp_interval_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_staticText_relay_kcp_interval_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_spinCtrl_relay_kcp_interval_fc = new wxSpinCtrl( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 5000, 1 );
	m_spinCtrl_relay_kcp_interval_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_spinCtrl_relay_kcp_interval_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_resend_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("kcp_resend"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_resend_fc->Wrap( -1 );
	m_staticText_relay_kcp_resend_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_staticText_relay_kcp_resend_fc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_resend_fc = new wxSpinCtrl( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 2 );
	m_spinCtrl_relay_kcp_resend_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_spinCtrl_relay_kcp_resend_fc, 0, wxALL, 5 );

	m_staticText_relay_kcp_nc_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("kcp_nc"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_nc_fc->Wrap( -1 );
	m_staticText_relay_kcp_nc_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_staticText_relay_kcp_nc_fc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_relay_kcp_nc_fcChoices[] = { wxT("0"), wxT("1") };
	int m_choice_relay_kcp_nc_fcNChoices = sizeof( m_choice_relay_kcp_nc_fcChoices ) / sizeof( wxString );
	m_choice_relay_kcp_nc_fc = new wxChoice( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_kcp_nc_fcNChoices, m_choice_relay_kcp_nc_fcChoices, 0 );
	m_choice_relay_kcp_nc_fc->SetSelection( 0 );
	m_choice_relay_kcp_nc_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_choice_relay_kcp_nc_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_sndwnd_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("kcp_sndwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_sndwnd_fc->Wrap( -1 );
	m_staticText_relay_kcp_sndwnd_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_staticText_relay_kcp_sndwnd_fc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_sndwnd_fc = new wxSpinCtrl( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 32 );
	m_spinCtrl_relay_kcp_sndwnd_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_spinCtrl_relay_kcp_sndwnd_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_rcvwnd_fc = new wxStaticText( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxT("kcp_rcvwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_rcvwnd_fc->Wrap( -1 );
	m_staticText_relay_kcp_rcvwnd_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_staticText_relay_kcp_rcvwnd_fc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_rcvwnd_fc = new wxSpinCtrl( sbSizer_relay_kcp_profile_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 32 );
	m_spinCtrl_relay_kcp_rcvwnd_fc->Enable( false );

	gSizer_relay_kcp_settings_fc->Add( m_spinCtrl_relay_kcp_rcvwnd_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_relay_kcp_profile_fc->Add( gSizer_relay_kcp_settings_fc, 0, wxEXPAND, 5 );


	m_panel_relay_kcp_profile_fc->SetSizer( sbSizer_relay_kcp_profile_fc );
	m_panel_relay_kcp_profile_fc->Layout();
	sbSizer_relay_kcp_profile_fc->Fit( m_panel_relay_kcp_profile_fc );
	bSizer_relay_kcp_profile_both->Add( m_panel_relay_kcp_profile_fc, 1, wxEXPAND | wxALL, 5 );

	m_panel_relay_kcp_profile_ts = new wxPanel( m_panel_relay_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_relay_kcp_profile_ts = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_kcp_profile_ts, wxID_ANY, wxT("KCP Profile Settings (To Server)") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_selectprofile_ts;
	gSizer_relay_selectprofile_ts = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_relay_kcp_profile_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("KCP Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_profile_ts->Wrap( -1 );
	gSizer_relay_selectprofile_ts->Add( m_staticText_relay_kcp_profile_ts, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_relay_kcp_profile_tsChoices[] = { wxT("fast1"), wxT("fast2"), wxT("fast3"), wxT("fast4"), wxT("fast5"), wxT("fast6"), wxT("regular1"), wxT("regular2"), wxT("regular3"), wxT("regular4"), wxT("regular5"), wxT("manual") };
	int m_choice_relay_kcp_profile_tsNChoices = sizeof( m_choice_relay_kcp_profile_tsChoices ) / sizeof( wxString );
	m_choice_relay_kcp_profile_ts = new wxChoice( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_kcp_profile_tsNChoices, m_choice_relay_kcp_profile_tsChoices, 0 );
	m_choice_relay_kcp_profile_ts->SetSelection( 9 );
	gSizer_relay_selectprofile_ts->Add( m_choice_relay_kcp_profile_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_relay_kcp_profile_ts->Add( gSizer_relay_selectprofile_ts, 0, wxEXPAND, 5 );

	wxGridSizer* gSizer_relay_kcp_settings_ts;
	gSizer_relay_kcp_settings_ts = new wxGridSizer( 0, 4, 0, 0 );

	m_staticText_relay_kcp_nodelay_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("kcp_nodelay"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_nodelay_ts->Wrap( -1 );
	m_staticText_relay_kcp_nodelay_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_staticText_relay_kcp_nodelay_ts, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_nodelay_ts = new wxSpinCtrl( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2, 0 );
	m_spinCtrl_relay_kcp_nodelay_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_spinCtrl_relay_kcp_nodelay_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_interval_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("kcp_interval"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_interval_ts->Wrap( -1 );
	m_staticText_relay_kcp_interval_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_staticText_relay_kcp_interval_ts, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_interval_ts = new wxSpinCtrl( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 5000, 1 );
	m_spinCtrl_relay_kcp_interval_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_spinCtrl_relay_kcp_interval_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_resend_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("kcp_resend"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_resend_ts->Wrap( -1 );
	m_staticText_relay_kcp_resend_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_staticText_relay_kcp_resend_ts, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_kcp_resend_ts = new wxSpinCtrl( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 2 );
	m_spinCtrl_relay_kcp_resend_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_spinCtrl_relay_kcp_resend_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_nc_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("kcp_nc"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_nc_ts->Wrap( -1 );
	m_staticText_relay_kcp_nc_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_staticText_relay_kcp_nc_ts, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_relay_kcp_nc_tsChoices[] = { wxT("0"), wxT("1") };
	int m_choice_relay_kcp_nc_tsNChoices = sizeof( m_choice_relay_kcp_nc_tsChoices ) / sizeof( wxString );
	m_choice_relay_kcp_nc_ts = new wxChoice( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_kcp_nc_tsNChoices, m_choice_relay_kcp_nc_tsChoices, 0 );
	m_choice_relay_kcp_nc_ts->SetSelection( 0 );
	m_choice_relay_kcp_nc_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_choice_relay_kcp_nc_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_sndwnd_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("kcp_sndwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_sndwnd_ts->Wrap( -1 );
	m_staticText_relay_kcp_sndwnd_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_staticText_relay_kcp_sndwnd_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_spinCtrl_relay_kcp_sndwnd_ts = new wxSpinCtrl( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 32 );
	m_spinCtrl_relay_kcp_sndwnd_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_spinCtrl_relay_kcp_sndwnd_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_kcp_rcvwnd_ts = new wxStaticText( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxT("kcp_rcvwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_kcp_rcvwnd_ts->Wrap( -1 );
	m_staticText_relay_kcp_rcvwnd_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_staticText_relay_kcp_rcvwnd_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_spinCtrl_relay_kcp_rcvwnd_ts = new wxSpinCtrl( sbSizer_relay_kcp_profile_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 0 );
	m_spinCtrl_relay_kcp_rcvwnd_ts->Enable( false );

	gSizer_relay_kcp_settings_ts->Add( m_spinCtrl_relay_kcp_rcvwnd_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_relay_kcp_profile_ts->Add( gSizer_relay_kcp_settings_ts, 0, wxEXPAND, 5 );


	m_panel_relay_kcp_profile_ts->SetSizer( sbSizer_relay_kcp_profile_ts );
	m_panel_relay_kcp_profile_ts->Layout();
	sbSizer_relay_kcp_profile_ts->Fit( m_panel_relay_kcp_profile_ts );
	bSizer_relay_kcp_profile_both->Add( m_panel_relay_kcp_profile_ts, 1, wxEXPAND | wxALL, 5 );


	bSizer_relay_tab->Add( bSizer_relay_kcp_profile_both, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_relay_network_both;
	bSizer_relay_network_both = new wxBoxSizer( wxHORIZONTAL );

	m_panel_relay_network_fc = new wxPanel( m_panel_relay_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_relay_network_settings_fc = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_network_fc, wxID_ANY, wxT("Network Settings (from Client)") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_network_settings_fc;
	gSizer_relay_network_settings_fc = new wxGridSizer( 0, 2, 0, 0 );

	m_checkBox_relay_listen_on = new wxCheckBox( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxT("listen_on"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_fc->Add( m_checkBox_relay_listen_on, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_relay_listen_on = new wxTextCtrl( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_relay_listen_on->Enable( false );

	gSizer_relay_network_settings_fc->Add( m_textCtrl_relay_listen_on, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_relay_listen_portChoices[] = { wxT("Port Ranges Mode"), wxT("Single Port Mode") };
	int m_choice_relay_listen_portNChoices = sizeof( m_choice_relay_listen_portChoices ) / sizeof( wxString );
	m_choice_relay_listen_port = new wxChoice( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_listen_portNChoices, m_choice_relay_listen_portChoices, 0 );
	m_choice_relay_listen_port->SetSelection( 0 );
	gSizer_relay_network_settings_fc->Add( m_choice_relay_listen_port, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_relay_listen_ports_fc;
	bSizer_relay_listen_ports_fc = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_relay_listen_port = new wxSpinCtrl( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_relay_listen_ports_fc->Add( m_spinCtrl_relay_listen_port, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_listen_port2 = new wxSpinCtrl( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_relay_listen_ports_fc->Add( m_spinCtrl_relay_listen_port2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_relay_network_settings_fc->Add( bSizer_relay_listen_ports_fc, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_relay_udp_timeout_fc = new wxCheckBox( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxT("udp_timeout"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_fc->Add( m_checkBox_relay_udp_timeout_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_udp_timeout_fc = new wxSpinCtrl( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_relay_udp_timeout_fc->Enable( false );

	gSizer_relay_network_settings_fc->Add( m_spinCtrl_relay_udp_timeout_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_relay_keep_alive_fc = new wxCheckBox( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxT("keep_alive"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_fc->Add( m_checkBox_relay_keep_alive_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_keep_alive_fc = new wxSpinCtrl( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_relay_keep_alive_fc->Enable( false );

	gSizer_relay_network_settings_fc->Add( m_spinCtrl_relay_keep_alive_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_relay_mtu_fc = new wxCheckBox( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxT("MTU"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_fc->Add( m_checkBox_relay_mtu_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_mtu_fc = new wxSpinCtrl( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 0 );
	m_spinCtrl_relay_mtu_fc->Enable( false );

	gSizer_relay_network_settings_fc->Add( m_spinCtrl_relay_mtu_fc, 0, wxALL, 5 );

	m_checkBox_relay_ipv4_only_fc = new wxCheckBox( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxT("ipv4_only"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_fc->Add( m_checkBox_relay_ipv4_only_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	gSizer_relay_network_settings_fc->Add( 0, 0, 1, wxEXPAND, 5 );

	m_checkBox_relay_blast_fc = new wxCheckBox( sbSizer_relay_network_settings_fc->GetStaticBox(), wxID_ANY, wxT("blast"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_fc->Add( m_checkBox_relay_blast_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	sbSizer_relay_network_settings_fc->Add( gSizer_relay_network_settings_fc, 0, wxEXPAND, 5 );


	m_panel_relay_network_fc->SetSizer( sbSizer_relay_network_settings_fc );
	m_panel_relay_network_fc->Layout();
	sbSizer_relay_network_settings_fc->Fit( m_panel_relay_network_fc );
	bSizer_relay_network_both->Add( m_panel_relay_network_fc, 1, wxEXPAND | wxALL, 5 );

	m_panel_relay_network_ts = new wxPanel( m_panel_relay_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_relay_network_settings_ts = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_network_ts, wxID_ANY, wxT("Network Settings (to Server)") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_network_settings_ts;
	gSizer_relay_network_settings_ts = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_relay_destination_address = new wxStaticText( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("destination_address"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_destination_address->Wrap( -1 );
	gSizer_relay_network_settings_ts->Add( m_staticText_relay_destination_address, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_relay_destination_address = new wxTextCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_textCtrl_relay_destination_address, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_relay_destination_portChoices[] = { wxT("Port Ranges Mode"), wxT("Single Port Mode") };
	int m_choice_relay_destination_portNChoices = sizeof( m_choice_relay_destination_portChoices ) / sizeof( wxString );
	m_choice_relay_destination_port = new wxChoice( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_destination_portNChoices, m_choice_relay_destination_portChoices, 0 );
	m_choice_relay_destination_port->SetSelection( 0 );
	gSizer_relay_network_settings_ts->Add( m_choice_relay_destination_port, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_client_destination_ports1;
	bSizer_client_destination_ports1 = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_relay_destination_port = new wxSpinCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_client_destination_ports1->Add( m_spinCtrl_relay_destination_port, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_relay_destination_port2 = new wxSpinCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_client_destination_ports1->Add( m_spinCtrl_relay_destination_port2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_relay_network_settings_ts->Add( bSizer_client_destination_ports1, 1, wxEXPAND, 5 );

	m_checkBox_relay_dport_refresh = new wxCheckBox( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("dport_refresh"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_checkBox_relay_dport_refresh, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_dport_refresh = new wxSpinCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 0 );
	m_spinCtrl_relay_dport_refresh->Enable( false );

	gSizer_relay_network_settings_ts->Add( m_spinCtrl_relay_dport_refresh, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_relay_udp_timeout_ts = new wxCheckBox( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("udp_timeout"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_checkBox_relay_udp_timeout_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_udp_timeout_ts = new wxSpinCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_relay_udp_timeout_ts->Enable( false );

	gSizer_relay_network_settings_ts->Add( m_spinCtrl_relay_udp_timeout_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_relay_keep_alive_ts = new wxCheckBox( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("keep_alive"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_checkBox_relay_keep_alive_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_keep_alive_ts = new wxSpinCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_relay_keep_alive_ts->Enable( false );

	gSizer_relay_network_settings_ts->Add( m_spinCtrl_relay_keep_alive_ts, 0, wxALL, 5 );

	m_checkBox_relay_mtu_ts = new wxCheckBox( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("MTU"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_checkBox_relay_mtu_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_relay_mtu_ts = new wxSpinCtrl( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 1440 );
	m_spinCtrl_relay_mtu_ts->Enable( false );

	gSizer_relay_network_settings_ts->Add( m_spinCtrl_relay_mtu_ts, 0, wxALL, 5 );

	m_checkBox_relay_ipv4_only_ts = new wxCheckBox( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("ipv4_only"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_checkBox_relay_ipv4_only_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_checkBox_relay_blast_ts = new wxCheckBox( sbSizer_relay_network_settings_ts->GetStaticBox(), wxID_ANY, wxT("blast"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_network_settings_ts->Add( m_checkBox_relay_blast_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	sbSizer_relay_network_settings_ts->Add( gSizer_relay_network_settings_ts, 0, wxEXPAND, 5 );


	m_panel_relay_network_ts->SetSizer( sbSizer_relay_network_settings_ts );
	m_panel_relay_network_ts->Layout();
	sbSizer_relay_network_settings_ts->Fit( m_panel_relay_network_ts );
	bSizer_relay_network_both->Add( m_panel_relay_network_ts, 1, wxEXPAND | wxALL, 5 );


	bSizer_relay_tab->Add( bSizer_relay_network_both, 1, wxEXPAND, 5 );

	sbSizer_relay_network_settings = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_tab, wxID_ANY, wxT("Network Settings (Relay Node)") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_network_settings;
	gSizer_relay_network_settings = new wxGridSizer( 0, 4, 0, 0 );

	m_staticText_relay_outbound_bandwidth = new wxStaticText( sbSizer_relay_network_settings->GetStaticBox(), wxID_ANY, wxT("outbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_outbound_bandwidth->Wrap( -1 );
	gSizer_relay_network_settings->Add( m_staticText_relay_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_relay_outbound_bandwidth;
	bSizer_relay_outbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_relay_outbound_bandwidth = new wxSpinCtrl( sbSizer_relay_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_relay_outbound_bandwidth->Add( m_spinCtrl_relay_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_relay_outbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_relay_outbound_bandwidthNChoices = sizeof( m_choice_relay_outbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_relay_outbound_bandwidth = new wxChoice( sbSizer_relay_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_outbound_bandwidthNChoices, m_choice_relay_outbound_bandwidthChoices, 0 );
	m_choice_relay_outbound_bandwidth->SetSelection( 4 );
	bSizer_relay_outbound_bandwidth->Add( m_choice_relay_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_relay_network_settings->Add( bSizer_relay_outbound_bandwidth, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_inbound_bandwidth = new wxStaticText( sbSizer_relay_network_settings->GetStaticBox(), wxID_ANY, wxT("inbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_inbound_bandwidth->Wrap( -1 );
	gSizer_relay_network_settings->Add( m_staticText_relay_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_relay_inbound_bandwidth;
	bSizer_relay_inbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_relay_inbound_bandwidth = new wxSpinCtrl( sbSizer_relay_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_relay_inbound_bandwidth->Add( m_spinCtrl_relay_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_relay_inbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_relay_inbound_bandwidthNChoices = sizeof( m_choice_relay_inbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_relay_inbound_bandwidth = new wxChoice( sbSizer_relay_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_inbound_bandwidthNChoices, m_choice_relay_inbound_bandwidthChoices, 0 );
	m_choice_relay_inbound_bandwidth->SetSelection( 4 );
	bSizer_relay_inbound_bandwidth->Add( m_choice_relay_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_relay_network_settings->Add( bSizer_relay_inbound_bandwidth, 0, wxEXPAND, 5 );


	sbSizer_relay_network_settings->Add( gSizer_relay_network_settings, 1, wxEXPAND, 5 );


	bSizer_relay_tab->Add( sbSizer_relay_network_settings, 0, wxEXPAND, 5 );

	sbSizer_relay_security_settings = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_tab, wxID_ANY, wxT("Security Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_security_settings;
	gSizer_relay_security_settings = new wxGridSizer( 0, 2, 0, 0 );

	m_panel_relay_security_from_client = new wxPanel( sbSizer_relay_security_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_relay_security_settings_fc = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_security_from_client, wxID_ANY, wxT("From Client") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_secruity_settings_fc;
	gSizer_relay_secruity_settings_fc = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_relay_encryption_algorithm_fc = new wxStaticText( sbSizer_relay_security_settings_fc->GetStaticBox(), wxID_ANY, wxT("encryption_algorithm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_encryption_algorithm_fc->Wrap( -1 );
	gSizer_relay_secruity_settings_fc->Add( m_staticText_relay_encryption_algorithm_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_relay_encryption_algorithm_fcChoices[] = { wxT("none"), wxT("AES-256-GCM"), wxT("AES-256-OCB"), wxT("ChaCha20-Poly1305"), wxT("XChaCha20-Poly1305") };
	int m_choice_relay_encryption_algorithm_fcNChoices = sizeof( m_choice_relay_encryption_algorithm_fcChoices ) / sizeof( wxString );
	m_choice_relay_encryption_algorithm_fc = new wxChoice( sbSizer_relay_security_settings_fc->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_encryption_algorithm_fcNChoices, m_choice_relay_encryption_algorithm_fcChoices, 0 );
	m_choice_relay_encryption_algorithm_fc->SetSelection( 1 );
	gSizer_relay_secruity_settings_fc->Add( m_choice_relay_encryption_algorithm_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_encryption_password_fc = new wxStaticText( sbSizer_relay_security_settings_fc->GetStaticBox(), wxID_ANY, wxT("encryption_password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_encryption_password_fc->Wrap( -1 );
	gSizer_relay_secruity_settings_fc->Add( m_staticText_relay_encryption_password_fc, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_relay_encryption_password_fc = new wxTextCtrl( sbSizer_relay_security_settings_fc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_secruity_settings_fc->Add( m_textCtrl_relay_encryption_password_fc, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_relay_security_settings_fc->Add( gSizer_relay_secruity_settings_fc, 1, 0, 5 );


	m_panel_relay_security_from_client->SetSizer( sbSizer_relay_security_settings_fc );
	m_panel_relay_security_from_client->Layout();
	sbSizer_relay_security_settings_fc->Fit( m_panel_relay_security_from_client );
	gSizer_relay_security_settings->Add( m_panel_relay_security_from_client, 1, wxEXPAND | wxALL, 5 );

	m_panel_relay_security_top_server = new wxPanel( sbSizer_relay_security_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_relay_security_settings_ts = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_security_top_server, wxID_ANY, wxT("To Server") ), wxVERTICAL );

	wxGridSizer* gSizer_relay_secruity_settings_ts;
	gSizer_relay_secruity_settings_ts = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_relay_encryption_algorithm_ts = new wxStaticText( sbSizer_relay_security_settings_ts->GetStaticBox(), wxID_ANY, wxT("encryption_algorithm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_encryption_algorithm_ts->Wrap( -1 );
	gSizer_relay_secruity_settings_ts->Add( m_staticText_relay_encryption_algorithm_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_relay_encryption_algorithm_tsChoices[] = { wxT("none"), wxT("AES-256-GCM"), wxT("AES-256-OCB"), wxT("ChaCha20-Poly1305"), wxT("XChaCha20-Poly1305") };
	int m_choice_relay_encryption_algorithm_tsNChoices = sizeof( m_choice_relay_encryption_algorithm_tsChoices ) / sizeof( wxString );
	m_choice_relay_encryption_algorithm_ts = new wxChoice( sbSizer_relay_security_settings_ts->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_relay_encryption_algorithm_tsNChoices, m_choice_relay_encryption_algorithm_tsChoices, 0 );
	m_choice_relay_encryption_algorithm_ts->SetSelection( 1 );
	gSizer_relay_secruity_settings_ts->Add( m_choice_relay_encryption_algorithm_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_relay_encryption_password_ts = new wxStaticText( sbSizer_relay_security_settings_ts->GetStaticBox(), wxID_ANY, wxT("encryption_password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_encryption_password_ts->Wrap( -1 );
	gSizer_relay_secruity_settings_ts->Add( m_staticText_relay_encryption_password_ts, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_relay_encryption_password_ts = new wxTextCtrl( sbSizer_relay_security_settings_ts->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_relay_secruity_settings_ts->Add( m_textCtrl_relay_encryption_password_ts, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_relay_security_settings_ts->Add( gSizer_relay_secruity_settings_ts, 1, 0, 5 );


	m_panel_relay_security_top_server->SetSizer( sbSizer_relay_security_settings_ts );
	m_panel_relay_security_top_server->Layout();
	sbSizer_relay_security_settings_ts->Fit( m_panel_relay_security_top_server );
	gSizer_relay_security_settings->Add( m_panel_relay_security_top_server, 1, wxEXPAND | wxALL, 5 );


	sbSizer_relay_security_settings->Add( gSizer_relay_security_settings, 0, wxEXPAND, 5 );


	bSizer_relay_tab->Add( sbSizer_relay_security_settings, 0, wxEXPAND, 5 );

	sbSizer_relay_save_file = new wxStaticBoxSizer( new wxStaticBox( m_panel_relay_tab, wxID_ANY, wxT("Save Configuration File") ), wxVERTICAL );

	wxBoxSizer* bSizer_relay_save_file;
	bSizer_relay_save_file = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_relay_save_file = new wxStaticText( sbSizer_relay_save_file->GetStaticBox(), wxID_ANY, wxT("Location"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_relay_save_file->Wrap( -1 );
	bSizer_relay_save_file->Add( m_staticText_relay_save_file, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker_relay_select_file = new wxFilePickerCtrl( sbSizer_relay_save_file->GetStaticBox(), wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.conf"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	bSizer_relay_save_file->Add( m_filePicker_relay_select_file, 1, wxALL|wxEXPAND, 5 );


	sbSizer_relay_save_file->Add( bSizer_relay_save_file, 1, wxEXPAND, 5 );

	m_button_relay_save = new wxButton( sbSizer_relay_save_file->GetStaticBox(), wxID_ANY, wxT("Verify and Save"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer_relay_save_file->Add( m_button_relay_save, 0, wxALL|wxEXPAND, 5 );


	bSizer_relay_tab->Add( sbSizer_relay_save_file, 0, wxEXPAND, 5 );


	m_panel_relay_tab->SetSizer( bSizer_relay_tab );
	m_panel_relay_tab->Layout();
	bSizer_relay_tab->Fit( m_panel_relay_tab );
	m_notebook_userinput->AddPage( m_panel_relay_tab, wxT("Relay Mode"), false );
	m_panel_server_tab = new wxPanel( m_notebook_userinput, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_server_tab;
	bSizer_server_tab = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_server_level_1;
	bSizer_server_level_1 = new wxBoxSizer( wxHORIZONTAL );

	m_panel_server_kcp_peofile = new wxPanel( m_panel_server_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_server_kcp_profile = new wxStaticBoxSizer( new wxStaticBox( m_panel_server_kcp_peofile, wxID_ANY, wxT("KCP Profile Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_server_kcp_profile;
	gSizer_server_kcp_profile = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_kcp_profile = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("KCP Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_kcp_profile->Wrap( -1 );
	gSizer_server_kcp_profile->Add( m_staticText_kcp_profile, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	wxString m_choice_server_kcp_profileChoices[] = { wxT("fast1"), wxT("fast2"), wxT("fast3"), wxT("fast4"), wxT("fast5"), wxT("fast6"), wxT("regular1"), wxT("regular2"), wxT("regular3"), wxT("regular4"), wxT("regular5"), wxT("manual") };
	int m_choice_server_kcp_profileNChoices = sizeof( m_choice_server_kcp_profileChoices ) / sizeof( wxString );
	m_choice_server_kcp_profile = new wxChoice( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_server_kcp_profileNChoices, m_choice_server_kcp_profileChoices, 0 );
	m_choice_server_kcp_profile->SetSelection( 9 );
	gSizer_server_kcp_profile->Add( m_choice_server_kcp_profile, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_server_kcp_profile->Add( gSizer_server_kcp_profile, 0, wxEXPAND, 5 );

	wxGridSizer* gSizer_server_kcp_settings;
	gSizer_server_kcp_settings = new wxGridSizer( 0, 4, 0, 0 );

	m_staticText_server_kcp_nodelay = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_nodelay"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_kcp_nodelay->Wrap( -1 );
	m_staticText_server_kcp_nodelay->Enable( false );

	gSizer_server_kcp_settings->Add( m_staticText_server_kcp_nodelay, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_server_kcp_nodelay = new wxSpinCtrl( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2, 0 );
	m_spinCtrl_server_kcp_nodelay->Enable( false );

	gSizer_server_kcp_settings->Add( m_spinCtrl_server_kcp_nodelay, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_kcp_interval = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_interval"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_kcp_interval->Wrap( -1 );
	m_staticText_server_kcp_interval->Enable( false );

	gSizer_server_kcp_settings->Add( m_staticText_server_kcp_interval, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_server_kcp_interval = new wxSpinCtrl( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 5000, 1 );
	m_spinCtrl_server_kcp_interval->Enable( false );

	gSizer_server_kcp_settings->Add( m_spinCtrl_server_kcp_interval, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_kcp_resend = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_resend"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_kcp_resend->Wrap( -1 );
	m_staticText_server_kcp_resend->Enable( false );

	gSizer_server_kcp_settings->Add( m_staticText_server_kcp_resend, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_server_kcp_resend = new wxSpinCtrl( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 2 );
	m_spinCtrl_server_kcp_resend->Enable( false );

	gSizer_server_kcp_settings->Add( m_spinCtrl_server_kcp_resend, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_kcp_nc = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_nc"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_kcp_nc->Wrap( -1 );
	m_staticText_server_kcp_nc->Enable( false );

	gSizer_server_kcp_settings->Add( m_staticText_server_kcp_nc, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_server_kcp_ncChoices[] = { wxT("0"), wxT("1") };
	int m_choice_server_kcp_ncNChoices = sizeof( m_choice_server_kcp_ncChoices ) / sizeof( wxString );
	m_choice_server_kcp_nc = new wxChoice( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_server_kcp_ncNChoices, m_choice_server_kcp_ncChoices, 0 );
	m_choice_server_kcp_nc->SetSelection( 0 );
	m_choice_server_kcp_nc->Enable( false );

	gSizer_server_kcp_settings->Add( m_choice_server_kcp_nc, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_kcp_sndwnd = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_sndwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_kcp_sndwnd->Wrap( -1 );
	m_staticText_server_kcp_sndwnd->Enable( false );

	gSizer_server_kcp_settings->Add( m_staticText_server_kcp_sndwnd, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_server_kcp_sndwnd = new wxSpinCtrl( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 32 );
	m_spinCtrl_server_kcp_sndwnd->Enable( false );

	gSizer_server_kcp_settings->Add( m_spinCtrl_server_kcp_sndwnd, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_kcp_rcvwnd = new wxStaticText( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxT("kcp_rcvwnd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_kcp_rcvwnd->Wrap( -1 );
	m_staticText_server_kcp_rcvwnd->Enable( false );

	gSizer_server_kcp_settings->Add( m_staticText_server_kcp_rcvwnd, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_server_kcp_rcvwnd = new wxSpinCtrl( sbSizer_server_kcp_profile->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 32, 65535, 32 );
	m_spinCtrl_server_kcp_rcvwnd->Enable( false );

	gSizer_server_kcp_settings->Add( m_spinCtrl_server_kcp_rcvwnd, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_server_kcp_profile->Add( gSizer_server_kcp_settings, 1, wxEXPAND, 5 );


	m_panel_server_kcp_peofile->SetSizer( sbSizer_server_kcp_profile );
	m_panel_server_kcp_peofile->Layout();
	sbSizer_server_kcp_profile->Fit( m_panel_server_kcp_peofile );
	bSizer_server_level_1->Add( m_panel_server_kcp_peofile, 1, wxALL|wxEXPAND, 5 );

	m_panel_server_security_settings = new wxPanel( m_panel_server_tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_server_security_settings = new wxStaticBoxSizer( new wxStaticBox( m_panel_server_security_settings, wxID_ANY, wxT("Security Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_server_security_settings;
	gSizer_server_security_settings = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_server_encryption_algorithm = new wxStaticText( sbSizer_server_security_settings->GetStaticBox(), wxID_ANY, wxT("encryption_algorithm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_encryption_algorithm->Wrap( -1 );
	gSizer_server_security_settings->Add( m_staticText_server_encryption_algorithm, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_server_encryption_algorithmChoices[] = { wxT("none"), wxT("AES-256-GCM"), wxT("AES-256-OCB"), wxT("ChaCha20-Poly1305"), wxT("XChaCha20-Poly1305") };
	int m_choice_server_encryption_algorithmNChoices = sizeof( m_choice_server_encryption_algorithmChoices ) / sizeof( wxString );
	m_choice_server_encryption_algorithm = new wxChoice( sbSizer_server_security_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_server_encryption_algorithmNChoices, m_choice_server_encryption_algorithmChoices, 0 );
	m_choice_server_encryption_algorithm->SetSelection( 1 );
	gSizer_server_security_settings->Add( m_choice_server_encryption_algorithm, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_encryption_password = new wxStaticText( sbSizer_server_security_settings->GetStaticBox(), wxID_ANY, wxT("encryption_password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_encryption_password->Wrap( -1 );
	gSizer_server_security_settings->Add( m_staticText_server_encryption_password, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_server_encryption_password = new wxTextCtrl( sbSizer_server_security_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_security_settings->Add( m_textCtrl_server_encryption_password, 0, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );


	sbSizer_server_security_settings->Add( gSizer_server_security_settings, 1, wxEXPAND, 5 );


	m_panel_server_security_settings->SetSizer( sbSizer_server_security_settings );
	m_panel_server_security_settings->Layout();
	sbSizer_server_security_settings->Fit( m_panel_server_security_settings );
	bSizer_server_level_1->Add( m_panel_server_security_settings, 0, wxALL|wxEXPAND, 5 );


	bSizer_server_tab->Add( bSizer_server_level_1, 0, wxEXPAND, 5 );

	sbSizer_server_network_settings = new wxStaticBoxSizer( new wxStaticBox( m_panel_server_tab, wxID_ANY, wxT("Network Settings") ), wxVERTICAL );

	wxGridSizer* gSizer_server_network_settings;
	gSizer_server_network_settings = new wxGridSizer( 0, 4, 0, 0 );

	m_checkBox_server_listen_on = new wxCheckBox( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("listen_on"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_checkBox_server_listen_on, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_server_listen_on = new wxTextCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_server_listen_on->Enable( false );

	gSizer_server_network_settings->Add( m_textCtrl_server_listen_on, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxString m_choice_server_listen_portChoices[] = { wxT("Port Ranges Mode"), wxT("Single Port Mode") };
	int m_choice_server_listen_portNChoices = sizeof( m_choice_server_listen_portChoices ) / sizeof( wxString );
	m_choice_server_listen_port = new wxChoice( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_server_listen_portNChoices, m_choice_server_listen_portChoices, 0 );
	m_choice_server_listen_port->SetSelection( 0 );
	gSizer_server_network_settings->Add( m_choice_server_listen_port, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_server_listen_ports;
	bSizer_server_listen_ports = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_server_listen_port = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_server_listen_ports->Add( m_spinCtrl_server_listen_port, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_server_listen_port2 = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_server_listen_ports->Add( m_spinCtrl_server_listen_port2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_server_network_settings->Add( bSizer_server_listen_ports, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_destination_address = new wxStaticText( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("destination_address"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_destination_address->Wrap( -1 );
	gSizer_server_network_settings->Add( m_staticText_server_destination_address, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_textCtrl_server_destination_address = new wxTextCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_textCtrl_server_destination_address, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText_server_destination_port = new wxStaticText( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("destination_port"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_destination_port->Wrap( -1 );
	gSizer_server_network_settings->Add( m_staticText_server_destination_port, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_server_destination_port = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	gSizer_server_network_settings->Add( m_spinCtrl_server_destination_port, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_server_udp_timeout = new wxCheckBox( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("udp_timeout"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_checkBox_server_udp_timeout, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_server_udp_timeout = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_server_udp_timeout->Enable( false );

	gSizer_server_network_settings->Add( m_spinCtrl_server_udp_timeout, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_server_keep_alive = new wxCheckBox( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("keep_alive"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_checkBox_server_keep_alive, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_server_keep_alive = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_server_keep_alive->Enable( false );

	gSizer_server_network_settings->Add( m_spinCtrl_server_keep_alive, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_outbound_bandwidth = new wxStaticText( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("outbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_outbound_bandwidth->Wrap( -1 );
	gSizer_server_network_settings->Add( m_staticText_server_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_server_outbound_bandwidth;
	bSizer_server_outbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_server_outbound_bandwidth = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_server_outbound_bandwidth->Add( m_spinCtrl_server_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_server_outbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_server_outbound_bandwidthNChoices = sizeof( m_choice_server_outbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_server_outbound_bandwidth = new wxChoice( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_server_outbound_bandwidthNChoices, m_choice_server_outbound_bandwidthChoices, 0 );
	m_choice_server_outbound_bandwidth->SetSelection( 4 );
	bSizer_server_outbound_bandwidth->Add( m_choice_server_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_server_network_settings->Add( bSizer_server_outbound_bandwidth, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText_server_inbound_bandwidth = new wxStaticText( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("inbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_inbound_bandwidth->Wrap( -1 );
	gSizer_server_network_settings->Add( m_staticText_server_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_server_inbound_bandwidth;
	bSizer_server_inbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_server_inbound_bandwidth = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_server_inbound_bandwidth->Add( m_spinCtrl_server_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_server_inbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_server_inbound_bandwidthNChoices = sizeof( m_choice_server_inbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_server_inbound_bandwidth = new wxChoice( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_server_inbound_bandwidthNChoices, m_choice_server_inbound_bandwidthChoices, 0 );
	m_choice_server_inbound_bandwidth->SetSelection( 4 );
	bSizer_server_inbound_bandwidth->Add( m_choice_server_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_server_network_settings->Add( bSizer_server_inbound_bandwidth, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_server_mtu = new wxCheckBox( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("MTU"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_checkBox_server_mtu, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_server_mtu = new wxSpinCtrl( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 1440 );
	m_spinCtrl_server_mtu->Enable( false );

	gSizer_server_network_settings->Add( m_spinCtrl_server_mtu, 0, wxALL, 5 );

	m_checkBox_server_ipv4_only = new wxCheckBox( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("ipv4_only"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_checkBox_server_ipv4_only, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_checkBox_server_blast = new wxCheckBox( sbSizer_server_network_settings->GetStaticBox(), wxID_ANY, wxT("blast"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_server_network_settings->Add( m_checkBox_server_blast, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	sbSizer_server_network_settings->Add( gSizer_server_network_settings, 0, wxEXPAND, 5 );


	bSizer_server_tab->Add( sbSizer_server_network_settings, 0, wxEXPAND, 5 );

	sbSizer_server_stun = new wxStaticBoxSizer( new wxStaticBox( m_panel_server_tab, wxID_ANY, wxT("STUN Server") ), wxVERTICAL );

	wxBoxSizer* bSizer_server_stun;
	bSizer_server_stun = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox_server_stun = new wxCheckBox( sbSizer_server_stun->GetStaticBox(), wxID_ANY, wxT("stun_server"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_server_stun->Add( m_checkBox_server_stun, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_server_stun = new wxTextCtrl( sbSizer_server_stun->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_server_stun->Enable( false );

	bSizer_server_stun->Add( m_textCtrl_server_stun, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_server_stun->Add( bSizer_server_stun, 1, wxEXPAND, 5 );


	bSizer_server_tab->Add( sbSizer_server_stun, 0, wxEXPAND, 5 );

	sbSizer_server_log = new wxStaticBoxSizer( new wxStaticBox( m_panel_server_tab, wxID_ANY, wxT("Save Log") ), wxVERTICAL );

	wxBoxSizer* bSizer_server_save_log;
	bSizer_server_save_log = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox_server_log_path = new wxCheckBox( sbSizer_server_log->GetStaticBox(), wxID_ANY, wxT("log_path"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_server_save_log->Add( m_checkBox_server_log_path, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_server_log_path = new wxTextCtrl( sbSizer_server_log->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl_server_log_path->Enable( false );

	bSizer_server_save_log->Add( m_textCtrl_server_log_path, 1, wxALL, 5 );


	sbSizer_server_log->Add( bSizer_server_save_log, 0, wxEXPAND, 5 );


	bSizer_server_tab->Add( sbSizer_server_log, 0, wxEXPAND, 5 );

	sbSizer_server_save_file = new wxStaticBoxSizer( new wxStaticBox( m_panel_server_tab, wxID_ANY, wxT("Save Configuration File") ), wxVERTICAL );

	wxBoxSizer* bSizer_server_save_file;
	bSizer_server_save_file = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_server_save_file = new wxStaticText( sbSizer_server_save_file->GetStaticBox(), wxID_ANY, wxT("Location"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_server_save_file->Wrap( -1 );
	bSizer_server_save_file->Add( m_staticText_server_save_file, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker_server_select_file = new wxFilePickerCtrl( sbSizer_server_save_file->GetStaticBox(), wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.conf"), wxDefaultPosition, wxDefaultSize, wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	bSizer_server_save_file->Add( m_filePicker_server_select_file, 1, wxALL|wxEXPAND, 5 );


	sbSizer_server_save_file->Add( bSizer_server_save_file, 1, wxEXPAND, 5 );

	m_button_server_save = new wxButton( sbSizer_server_save_file->GetStaticBox(), wxID_ANY, wxT("Verify and Save"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer_server_save_file->Add( m_button_server_save, 0, wxALL|wxEXPAND, 5 );


	bSizer_server_tab->Add( sbSizer_server_save_file, 0, wxEXPAND, 5 );


	m_panel_server_tab->SetSizer( bSizer_server_tab );
	m_panel_server_tab->Layout();
	bSizer_server_tab->Fit( m_panel_server_tab );
	m_notebook_userinput->AddPage( m_panel_server_tab, wxT("Server Mode"), false );

	bSizer_userinput_holdings->Add( m_notebook_userinput, 1, wxEXPAND | wxALL, 5 );


	m_panel_userinput_base->SetSizer( bSizer_userinput_holdings );
	m_panel_userinput_base->Layout();
	bSizer_userinput_holdings->Fit( m_panel_userinput_base );
	bSizer_userinput_base->Add( m_panel_userinput_base, 1, wxALL|wxEXPAND, 0 );


	this->SetSizer( bSizer_userinput_base );
	this->Layout();
	bSizer_userinput_base->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_choice_client_kcp_profile->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ClientKCPProfileOnChoice ), NULL, this );
	m_choice_client_encryption_algorithm->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ClientEncrypitonOnChoice ), NULL, this );
	m_checkBox_client_listen_on->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientListenAddressOnCheckBox ), NULL, this );
	m_choice_client_destination_port->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ClientDestinationPortOnChoice ), NULL, this );
	m_checkBox_client_dport_refresh->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientDPortRefreshOnCheckBox ), NULL, this );
	m_checkBox_client_udp_timeout->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_client_keep_alive->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_client_mux_tunnels->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientMuxTunnelsOnCheckBox ), NULL, this );
	m_checkBox_client_mtu->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientMTUOnCheckBox ), NULL, this );
	m_checkBox_client_ipv4_only->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientIPv4OnlyOnCheckBox ), NULL, this );
	m_checkBox_client_log_path->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientLogPathOnCheckBox ), NULL, this );
	m_button_client_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UserInput::ClientVerifyAndSaveOnButtonClick ), NULL, this );
	m_choice_relay_kcp_profile_fc->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayFromClientKCPProfileOnChoice ), NULL, this );
	m_choice_relay_kcp_profile_ts->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayToServerKCPProfileOnChoice ), NULL, this );
	m_checkBox_relay_listen_on->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayListenAddressOnCheckBox ), NULL, this );
	m_choice_relay_listen_port->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayListenPortOnChoice ), NULL, this );
	m_checkBox_relay_udp_timeout_fc->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_relay_keep_alive_fc->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_relay_mtu_fc->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientMTUOnCheckBox ), NULL, this );
	m_checkBox_relay_ipv4_only_fc->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientIPv4OnlyOnCheckBox ), NULL, this );
	m_choice_relay_destination_port->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayDestinationPortOnChoice ), NULL, this );
	m_checkBox_relay_dport_refresh->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayDPortRefreshOnCheckBox ), NULL, this );
	m_checkBox_relay_udp_timeout_ts->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_relay_keep_alive_ts->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_relay_mtu_ts->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerMTUOnCheckBox ), NULL, this );
	m_checkBox_relay_ipv4_only_ts->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerIPv4OnlyOnCheckBox ), NULL, this );
	m_choice_relay_encryption_algorithm_fc->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayFromClientEncrypitonOnChoice ), NULL, this );
	m_choice_relay_encryption_algorithm_ts->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayToServerEncrypitonOnChoice ), NULL, this );
	m_button_relay_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UserInput::RelayVerifyAndSaveOnButtonClick ), NULL, this );
	m_choice_server_kcp_profile->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayKCPProfileOnChoice ), NULL, this );
	m_choice_server_encryption_algorithm->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ServerEncrypitonOnChoice ), NULL, this );
	m_checkBox_server_listen_on->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerListenAddressOnCheckBox ), NULL, this );
	m_checkBox_server_udp_timeout->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_server_keep_alive->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_server_mtu->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerMTUOnCheckBox ), NULL, this );
	m_checkBox_server_ipv4_only->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerIPv4OnlyOnCheckBox ), NULL, this );
	m_checkBox_server_stun->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerStunServerOnCheckBox ), NULL, this );
	m_checkBox_server_log_path->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerLogPathOnCheckBox ), NULL, this );
	m_button_server_save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UserInput::ServerVerifyAndSaveOnButtonClick ), NULL, this );
}

UserInput::~UserInput()
{
	// Disconnect Events
	m_choice_client_kcp_profile->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ClientKCPProfileOnChoice ), NULL, this );
	m_choice_client_encryption_algorithm->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ClientEncrypitonOnChoice ), NULL, this );
	m_checkBox_client_listen_on->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientListenAddressOnCheckBox ), NULL, this );
	m_choice_client_destination_port->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ClientDestinationPortOnChoice ), NULL, this );
	m_checkBox_client_dport_refresh->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientDPortRefreshOnCheckBox ), NULL, this );
	m_checkBox_client_udp_timeout->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_client_keep_alive->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_client_mux_tunnels->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientMuxTunnelsOnCheckBox ), NULL, this );
	m_checkBox_client_mtu->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientMTUOnCheckBox ), NULL, this );
	m_checkBox_client_ipv4_only->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientIPv4OnlyOnCheckBox ), NULL, this );
	m_checkBox_client_log_path->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ClientLogPathOnCheckBox ), NULL, this );
	m_button_client_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UserInput::ClientVerifyAndSaveOnButtonClick ), NULL, this );
	m_choice_relay_kcp_profile_fc->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayFromClientKCPProfileOnChoice ), NULL, this );
	m_choice_relay_kcp_profile_ts->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayToServerKCPProfileOnChoice ), NULL, this );
	m_checkBox_relay_listen_on->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayListenAddressOnCheckBox ), NULL, this );
	m_choice_relay_listen_port->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayListenPortOnChoice ), NULL, this );
	m_checkBox_relay_udp_timeout_fc->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_relay_keep_alive_fc->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_relay_mtu_fc->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientMTUOnCheckBox ), NULL, this );
	m_checkBox_relay_ipv4_only_fc->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayFromClientIPv4OnlyOnCheckBox ), NULL, this );
	m_choice_relay_destination_port->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayDestinationPortOnChoice ), NULL, this );
	m_checkBox_relay_dport_refresh->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayDPortRefreshOnCheckBox ), NULL, this );
	m_checkBox_relay_udp_timeout_ts->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_relay_keep_alive_ts->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_relay_mtu_ts->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerMTUOnCheckBox ), NULL, this );
	m_checkBox_relay_ipv4_only_ts->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::RelayToServerIPv4OnlyOnCheckBox ), NULL, this );
	m_choice_relay_encryption_algorithm_fc->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayFromClientEncrypitonOnChoice ), NULL, this );
	m_choice_relay_encryption_algorithm_ts->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayToServerEncrypitonOnChoice ), NULL, this );
	m_button_relay_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UserInput::RelayVerifyAndSaveOnButtonClick ), NULL, this );
	m_choice_server_kcp_profile->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::RelayKCPProfileOnChoice ), NULL, this );
	m_choice_server_encryption_algorithm->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( UserInput::ServerEncrypitonOnChoice ), NULL, this );
	m_checkBox_server_listen_on->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerListenAddressOnCheckBox ), NULL, this );
	m_checkBox_server_udp_timeout->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerUDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_server_keep_alive->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerKeepAliveOnCheckBox ), NULL, this );
	m_checkBox_server_mtu->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerMTUOnCheckBox ), NULL, this );
	m_checkBox_server_ipv4_only->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerIPv4OnlyOnCheckBox ), NULL, this );
	m_checkBox_server_stun->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerStunServerOnCheckBox ), NULL, this );
	m_checkBox_server_log_path->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( UserInput::ServerLogPathOnCheckBox ), NULL, this );
	m_button_server_save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( UserInput::ServerVerifyAndSaveOnButtonClick ), NULL, this );

}

Entrance::Entrance( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxBoxSizer* bSizer_entrance_base;
	bSizer_entrance_base = new wxBoxSizer( wxVERTICAL );

	m_panel_dialog_entrance = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_entrance_middle;
	bSizer_entrance_middle = new wxBoxSizer( wxVERTICAL );

	m_panel_holdings = new wxPanel( m_panel_dialog_entrance, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_entrance_hold_buttons;
	bSizer_entrance_hold_buttons = new wxBoxSizer( wxVERTICAL );

	m_staticText_show_selections = new wxStaticText( m_panel_holdings, wxID_ANY, wxT("Please Choose:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_show_selections->Wrap( -1 );
	bSizer_entrance_hold_buttons->Add( m_staticText_show_selections, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	wxGridSizer* gSizer_entrance_hold_buttons;
	gSizer_entrance_hold_buttons = new wxGridSizer( 0, 3, 0, 0 );

	m_button_wizard = new wxButton( m_panel_holdings, wxID_ANY, wxT("Step by Step"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_entrance_hold_buttons->Add( m_button_wizard, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button_manual = new wxButton( m_panel_holdings, wxID_ANY, wxT("Input by myself"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_entrance_hold_buttons->Add( m_button_manual, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	m_button_verify = new wxButton( m_panel_holdings, wxID_ANY, wxT("Verify Config file"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_entrance_hold_buttons->Add( m_button_verify, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );


	bSizer_entrance_hold_buttons->Add( gSizer_entrance_hold_buttons, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panel_holdings->SetSizer( bSizer_entrance_hold_buttons );
	m_panel_holdings->Layout();
	bSizer_entrance_hold_buttons->Fit( m_panel_holdings );
	bSizer_entrance_middle->Add( m_panel_holdings, 1, wxALL|wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( m_panel_dialog_entrance, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer_entrance_middle->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	m_staticText_readme = new wxStaticText( m_panel_dialog_entrance, wxID_ANY, wxT("readme"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_readme->Wrap( -1 );
	bSizer_entrance_middle->Add( m_staticText_readme, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_hyperlink_to_website = new wxHyperlinkCtrl( m_panel_dialog_entrance, wxID_ANY, wxT("KCP Tube"), wxT("https://github.com/cnbatch/kcptube"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	bSizer_entrance_middle->Add( m_hyperlink_to_website, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	m_hyperlink_link_to_this_tool = new wxHyperlinkCtrl( m_panel_dialog_entrance, wxID_ANY, wxT("KCPTube Generator"), wxT("https://github.com/cnbatch/KCPTubeGenerator"), wxDefaultPosition, wxDefaultSize, wxHL_DEFAULT_STYLE );
	bSizer_entrance_middle->Add( m_hyperlink_link_to_this_tool, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText_version = new wxStaticText( m_panel_dialog_entrance, wxID_ANY, wxT("KCPTube v0.3.5 (20230708), KCPTubeGenerator 1.1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_version->Wrap( -1 );
	bSizer_entrance_middle->Add( m_staticText_version, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer_entrance_middle->Add( 0, 10, 0, 0, 5 );

	wxGridSizer* gSizer_entrance_hold_links;
	gSizer_entrance_hold_links = new wxGridSizer( 0, 2, 0, 0 );


	bSizer_entrance_middle->Add( gSizer_entrance_hold_links, 0, wxEXPAND, 5 );


	m_panel_dialog_entrance->SetSizer( bSizer_entrance_middle );
	m_panel_dialog_entrance->Layout();
	bSizer_entrance_middle->Fit( m_panel_dialog_entrance );
	bSizer_entrance_base->Add( m_panel_dialog_entrance, 1, wxEXPAND | wxALL, 0 );


	this->SetSizer( bSizer_entrance_base );
	this->Layout();
	bSizer_entrance_base->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button_wizard->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Entrance::EntranceStepbyStepOnButtonClick ), NULL, this );
	m_button_manual->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Entrance::EntranceUserInputOnButtonClick ), NULL, this );
	m_button_verify->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Entrance::EntranceVerifyFileOnButtonClick ), NULL, this );
}

Entrance::~Entrance()
{
	// Disconnect Events
	m_button_wizard->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Entrance::EntranceStepbyStepOnButtonClick ), NULL, this );
	m_button_manual->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Entrance::EntranceUserInputOnButtonClick ), NULL, this );
	m_button_verify->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Entrance::EntranceVerifyFileOnButtonClick ), NULL, this );

}

StepByStep::StepByStep( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer_stepbystep_base;
	bSizer_stepbystep_base = new wxBoxSizer( wxVERTICAL );

	m_panel_stepbystep_base = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxGridSizer* gSizer_stepbustep_holdings;
	gSizer_stepbustep_holdings = new wxGridSizer( 0, 2, 0, 0 );

	m_panel_stepbystep_s1 = new wxPanel( m_panel_stepbystep_base, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_stepbystep_s1 = new wxStaticBoxSizer( new wxStaticBox( m_panel_stepbystep_s1, wxID_ANY, wxT("Step 1") ), wxVERTICAL );

	m_staticText_sbs_s1_readme = new wxStaticText( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxT("Readme"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s1_readme->Wrap( -1 );
	sbSizer_stepbystep_s1->Add( m_staticText_sbs_s1_readme, 0, wxALL, 5 );

	wxBoxSizer* bSizer_stepbystep_s1_networks;
	bSizer_stepbystep_s1_networks = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_stepbystep_s1_portnumber;
	bSizer_stepbystep_s1_portnumber = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_sbs_s1_port = new wxStaticText( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxT("Port number:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s1_port->Wrap( -1 );
	bSizer_stepbystep_s1_portnumber->Add( m_staticText_sbs_s1_port, 1, wxALL, 5 );

	m_spinCtrl_sbs_s1_port = new wxSpinCtrl( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_stepbystep_s1_portnumber->Add( m_spinCtrl_sbs_s1_port, 0, wxALL, 5 );


	bSizer_stepbystep_s1_networks->Add( bSizer_stepbystep_s1_portnumber, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_stepbystep_s1_bandwidths;
	bSizer_stepbystep_s1_bandwidths = new wxBoxSizer( wxVERTICAL );

	m_staticText_sbs_local_bandwidths = new wxStaticText( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxT("Please input localhost bandwidths"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_local_bandwidths->Wrap( -1 );
	bSizer_stepbystep_s1_bandwidths->Add( m_staticText_sbs_local_bandwidths, 0, wxALL, 5 );

	wxBoxSizer* bSizer_stepbystep_s1_outbound_bandwidth;
	bSizer_stepbystep_s1_outbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_sbs_s1_outbound_bandwidth = new wxStaticText( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxT("outbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s1_outbound_bandwidth->Wrap( -1 );
	bSizer_stepbystep_s1_outbound_bandwidth->Add( m_staticText_sbs_s1_outbound_bandwidth, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_sbs_s1_outbound_bandwidth = new wxSpinCtrl( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_stepbystep_s1_outbound_bandwidth->Add( m_spinCtrl_sbs_s1_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_sbs_s1_outbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_sbs_s1_outbound_bandwidthNChoices = sizeof( m_choice_sbs_s1_outbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_sbs_s1_outbound_bandwidth = new wxChoice( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_sbs_s1_outbound_bandwidthNChoices, m_choice_sbs_s1_outbound_bandwidthChoices, 0 );
	m_choice_sbs_s1_outbound_bandwidth->SetSelection( 4 );
	bSizer_stepbystep_s1_outbound_bandwidth->Add( m_choice_sbs_s1_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer_stepbystep_s1_bandwidths->Add( bSizer_stepbystep_s1_outbound_bandwidth, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_stepbystep_s1_inbound_bandwidth;
	bSizer_stepbystep_s1_inbound_bandwidth = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_sbs_s1_inbound_bandwidth = new wxStaticText( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxT("inbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s1_inbound_bandwidth->Wrap( -1 );
	bSizer_stepbystep_s1_inbound_bandwidth->Add( m_staticText_sbs_s1_inbound_bandwidth, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_sbs_s1_inbound_bandwidth = new wxSpinCtrl( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_stepbystep_s1_inbound_bandwidth->Add( m_spinCtrl_sbs_s1_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_sbs_s1_inbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_sbs_s1_inbound_bandwidthNChoices = sizeof( m_choice_sbs_s1_inbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_sbs_s1_inbound_bandwidth = new wxChoice( sbSizer_stepbystep_s1->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_sbs_s1_inbound_bandwidthNChoices, m_choice_sbs_s1_inbound_bandwidthChoices, 0 );
	m_choice_sbs_s1_inbound_bandwidth->SetSelection( 4 );
	bSizer_stepbystep_s1_inbound_bandwidth->Add( m_choice_sbs_s1_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer_stepbystep_s1_bandwidths->Add( bSizer_stepbystep_s1_inbound_bandwidth, 0, wxEXPAND, 5 );


	bSizer_stepbystep_s1_networks->Add( bSizer_stepbystep_s1_bandwidths, 1, wxEXPAND, 5 );


	sbSizer_stepbystep_s1->Add( bSizer_stepbystep_s1_networks, 1, wxEXPAND, 5 );


	m_panel_stepbystep_s1->SetSizer( sbSizer_stepbystep_s1 );
	m_panel_stepbystep_s1->Layout();
	sbSizer_stepbystep_s1->Fit( m_panel_stepbystep_s1 );
	gSizer_stepbustep_holdings->Add( m_panel_stepbystep_s1, 1, wxEXPAND | wxALL, 5 );

	m_panel_stepbystep_s2 = new wxPanel( m_panel_stepbystep_base, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_stepbystep_s2 = new wxStaticBoxSizer( new wxStaticBox( m_panel_stepbystep_s2, wxID_ANY, wxT("Step 2") ), wxVERTICAL );

	wxGridSizer* gSizer_stepbystep_s2_kcp;
	gSizer_stepbystep_s2_kcp = new wxGridSizer( 0, 2, 0, 0 );

	m_staticText_sbs_s2_kcp = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("KCP Profile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s2_kcp->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_s2_kcp, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	wxString m_choice_sbs_s2_kcpChoices[] = { wxT("game_mode_high_loss"), wxT("game_mode_low_loss"), wxT("regular_high_loss"), wxT("regular_low_loss") };
	int m_choice_sbs_s2_kcpNChoices = sizeof( m_choice_sbs_s2_kcpChoices ) / sizeof( wxString );
	m_choice_sbs_s2_kcp = new wxChoice( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_sbs_s2_kcpNChoices, m_choice_sbs_s2_kcpChoices, 0 );
	m_choice_sbs_s2_kcp->SetSelection( 2 );
	gSizer_stepbystep_s2_kcp->Add( m_choice_sbs_s2_kcp, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText_sbs_s2_server_address = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("Server Address"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s2_server_address->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_s2_server_address, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_sbs_s2_server_address = new wxTextCtrl( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s2_kcp->Add( m_textCtrl_sbs_s2_server_address, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText_sbs_s2_server_ports = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("Server Port Rangs"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s2_server_ports->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_s2_server_ports, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	wxBoxSizer* bSizer_stepbystep_s2_ports;
	bSizer_stepbystep_s2_ports = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_sbs_s2_server_port1 = new wxSpinCtrl( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_stepbystep_s2_ports->Add( m_spinCtrl_sbs_s2_server_port1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_sbs_s2_server_port2 = new wxSpinCtrl( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65535, 1 );
	bSizer_stepbystep_s2_ports->Add( m_spinCtrl_sbs_s2_server_port2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_stepbystep_s2_kcp->Add( bSizer_stepbystep_s2_ports, 1, wxEXPAND, 5 );

	m_staticText_sbs_encryption = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("encryption_algorithm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_encryption->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_encryption, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_sbs_s2_encryptionChoices[] = { wxT("none"), wxT("AES-256-GCM"), wxT("AES-256-OCB"), wxT("ChaCha20-Poly1305"), wxT("XChaCha20-Poly1305") };
	int m_choice_sbs_s2_encryptionNChoices = sizeof( m_choice_sbs_s2_encryptionChoices ) / sizeof( wxString );
	m_choice_sbs_s2_encryption = new wxChoice( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_sbs_s2_encryptionNChoices, m_choice_sbs_s2_encryptionChoices, 0 );
	m_choice_sbs_s2_encryption->SetSelection( 1 );
	gSizer_stepbystep_s2_kcp->Add( m_choice_sbs_s2_encryption, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText_sbs_s2_password = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("encryption_password"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s2_password->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_s2_password, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl_sbs_s2_password = new wxTextCtrl( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s2_kcp->Add( m_textCtrl_sbs_s2_password, 1, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_staticText_sbs_s2_outbound_bandwidth = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("outbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s2_outbound_bandwidth->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_s2_outbound_bandwidth, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxBoxSizer* bSizer_stepbystep_s2_outbound;
	bSizer_stepbystep_s2_outbound = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_sbs_s2_outbound_bandwidth = new wxSpinCtrl( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_stepbystep_s2_outbound->Add( m_spinCtrl_sbs_s2_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_sbs_s2_outbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_sbs_s2_outbound_bandwidthNChoices = sizeof( m_choice_sbs_s2_outbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_sbs_s2_outbound_bandwidth = new wxChoice( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_sbs_s2_outbound_bandwidthNChoices, m_choice_sbs_s2_outbound_bandwidthChoices, 0 );
	m_choice_sbs_s2_outbound_bandwidth->SetSelection( 4 );
	bSizer_stepbystep_s2_outbound->Add( m_choice_sbs_s2_outbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_stepbystep_s2_kcp->Add( bSizer_stepbystep_s2_outbound, 1, wxEXPAND, 5 );

	m_staticText_sbs_s2_inbound_bandwidth = new wxStaticText( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxT("inbound_bandwidth"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s2_inbound_bandwidth->Wrap( -1 );
	gSizer_stepbystep_s2_kcp->Add( m_staticText_sbs_s2_inbound_bandwidth, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5 );

	wxBoxSizer* bSizer_sbs_stepbystep_inbound;
	bSizer_sbs_stepbystep_inbound = new wxBoxSizer( wxHORIZONTAL );

	m_spinCtrl_sbs_s2_inbound_bandwidth = new wxSpinCtrl( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 65536, 1 );
	bSizer_sbs_stepbystep_inbound->Add( m_spinCtrl_sbs_s2_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice_sbs_s2_inbound_bandwidthChoices[] = { wxT("bps"), wxT("B/s"), wxT("Kbps"), wxT("KB/s"), wxT("Mbps"), wxT("MB/s"), wxT("Gbps"), wxT("GB/s") };
	int m_choice_sbs_s2_inbound_bandwidthNChoices = sizeof( m_choice_sbs_s2_inbound_bandwidthChoices ) / sizeof( wxString );
	m_choice_sbs_s2_inbound_bandwidth = new wxChoice( sbSizer_stepbystep_s2->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice_sbs_s2_inbound_bandwidthNChoices, m_choice_sbs_s2_inbound_bandwidthChoices, 0 );
	m_choice_sbs_s2_inbound_bandwidth->SetSelection( 4 );
	bSizer_sbs_stepbystep_inbound->Add( m_choice_sbs_s2_inbound_bandwidth, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	gSizer_stepbystep_s2_kcp->Add( bSizer_sbs_stepbystep_inbound, 1, wxEXPAND, 5 );


	sbSizer_stepbystep_s2->Add( gSizer_stepbystep_s2_kcp, 1, wxEXPAND, 5 );


	m_panel_stepbystep_s2->SetSizer( sbSizer_stepbystep_s2 );
	m_panel_stepbystep_s2->Layout();
	sbSizer_stepbystep_s2->Fit( m_panel_stepbystep_s2 );
	gSizer_stepbustep_holdings->Add( m_panel_stepbystep_s2, 1, wxEXPAND | wxALL, 5 );

	m_panel_stepbystep_s3 = new wxPanel( m_panel_stepbystep_base, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_stepbystep_s3 = new wxStaticBoxSizer( new wxStaticBox( m_panel_stepbystep_s3, wxID_ANY, wxT("Step 3 (Optionals)") ), wxVERTICAL );

	wxGridSizer* gSizer_stepbystep_s3_optionals;
	gSizer_stepbystep_s3_optionals = new wxGridSizer( 0, 2, 0, 0 );

	m_checkBox_sbs_s3_mtu = new wxCheckBox( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxT("MTU"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s3_optionals->Add( m_checkBox_sbs_s3_mtu, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrl_sbs_s3_mtu = new wxSpinCtrl( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 1440 );
	m_spinCtrl_sbs_s3_mtu->Enable( false );

	gSizer_stepbystep_s3_optionals->Add( m_spinCtrl_sbs_s3_mtu, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_sbs_s3_dport_refresh = new wxCheckBox( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxT("dport_refresh"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s3_optionals->Add( m_checkBox_sbs_s3_dport_refresh, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_sbs_s3_dportre_fresh = new wxSpinCtrl( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 32767, 0 );
	m_spinCtrl_sbs_s3_dportre_fresh->Enable( false );

	gSizer_stepbystep_s3_optionals->Add( m_spinCtrl_sbs_s3_dportre_fresh, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_sbs_s3_udp_timtout = new wxCheckBox( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxT("udp_timeout"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s3_optionals->Add( m_checkBox_sbs_s3_udp_timtout, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_sbs_s3_udp_timeout = new wxSpinCtrl( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_sbs_s3_udp_timeout->Enable( false );

	gSizer_stepbystep_s3_optionals->Add( m_spinCtrl_sbs_s3_udp_timeout, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_sbs_s3_keepalive = new wxCheckBox( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxT("keep_alive"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s3_optionals->Add( m_checkBox_sbs_s3_keepalive, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_sbs_s3_keepalive = new wxSpinCtrl( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_sbs_s3_keepalive->Enable( false );

	gSizer_stepbystep_s3_optionals->Add( m_spinCtrl_sbs_s3_keepalive, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox_sbs_s3_mux_tunnels = new wxCheckBox( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxT("mux_tunnels"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer_stepbystep_s3_optionals->Add( m_checkBox_sbs_s3_mux_tunnels, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );

	m_spinCtrl_sbs_s3_mux_tunnels = new wxSpinCtrl( sbSizer_stepbystep_s3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	m_spinCtrl_sbs_s3_mux_tunnels->Enable( false );

	gSizer_stepbystep_s3_optionals->Add( m_spinCtrl_sbs_s3_mux_tunnels, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_stepbystep_s3->Add( gSizer_stepbystep_s3_optionals, 1, wxEXPAND, 5 );


	m_panel_stepbystep_s3->SetSizer( sbSizer_stepbystep_s3 );
	m_panel_stepbystep_s3->Layout();
	sbSizer_stepbystep_s3->Fit( m_panel_stepbystep_s3 );
	gSizer_stepbustep_holdings->Add( m_panel_stepbystep_s3, 1, wxEXPAND | wxALL, 5 );

	m_panel_stepbystep_s4 = new wxPanel( m_panel_stepbystep_base, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	sbSizer_stepbystep_s4_savefile = new wxStaticBoxSizer( new wxStaticBox( m_panel_stepbystep_s4, wxID_ANY, wxT("Step 4, save file") ), wxVERTICAL );

	wxBoxSizer* bSizer_stepbystep_s4_save;
	bSizer_stepbystep_s4_save = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_stepbystep_s4_saveclient;
	bSizer_stepbystep_s4_saveclient = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_sbs_s4_client = new wxStaticText( sbSizer_stepbystep_s4_savefile->GetStaticBox(), wxID_ANY, wxT("Client"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s4_client->Wrap( -1 );
	bSizer_stepbystep_s4_saveclient->Add( m_staticText_sbs_s4_client, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker_sbs_s4_client = new wxFilePickerCtrl( sbSizer_stepbystep_s4_savefile->GetStaticBox(), wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.conf"), wxDefaultPosition, wxDefaultSize, wxFLP_OVERWRITE_PROMPT|wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	bSizer_stepbystep_s4_saveclient->Add( m_filePicker_sbs_s4_client, 1, wxALL|wxEXPAND, 5 );


	bSizer_stepbystep_s4_save->Add( bSizer_stepbystep_s4_saveclient, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_stepbystep_s4_saveserver;
	bSizer_stepbystep_s4_saveserver = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_sbs_s4_server = new wxStaticText( sbSizer_stepbystep_s4_savefile->GetStaticBox(), wxID_ANY, wxT("Server"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_sbs_s4_server->Wrap( -1 );
	bSizer_stepbystep_s4_saveserver->Add( m_staticText_sbs_s4_server, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_filePicker_sbs_s4_server = new wxFilePickerCtrl( sbSizer_stepbystep_s4_savefile->GetStaticBox(), wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.conf"), wxDefaultPosition, wxDefaultSize, wxFLP_OVERWRITE_PROMPT|wxFLP_SAVE|wxFLP_USE_TEXTCTRL );
	bSizer_stepbystep_s4_saveserver->Add( m_filePicker_sbs_s4_server, 1, wxALL|wxEXPAND, 5 );


	bSizer_stepbystep_s4_save->Add( bSizer_stepbystep_s4_saveserver, 1, wxEXPAND, 5 );

	m_button_sbs_s4_save_file = new wxButton( sbSizer_stepbystep_s4_savefile->GetStaticBox(), wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_stepbystep_s4_save->Add( m_button_sbs_s4_save_file, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	sbSizer_stepbystep_s4_savefile->Add( bSizer_stepbystep_s4_save, 1, wxEXPAND, 5 );


	m_panel_stepbystep_s4->SetSizer( sbSizer_stepbystep_s4_savefile );
	m_panel_stepbystep_s4->Layout();
	sbSizer_stepbystep_s4_savefile->Fit( m_panel_stepbystep_s4 );
	gSizer_stepbustep_holdings->Add( m_panel_stepbystep_s4, 1, wxEXPAND | wxALL, 5 );


	m_panel_stepbystep_base->SetSizer( gSizer_stepbustep_holdings );
	m_panel_stepbystep_base->Layout();
	gSizer_stepbustep_holdings->Fit( m_panel_stepbystep_base );
	bSizer_stepbystep_base->Add( m_panel_stepbystep_base, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer_stepbystep_base );
	this->Layout();
	bSizer_stepbystep_base->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_choice_sbs_s2_encryption->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( StepByStep::Step2EncryptionOnChoice ), NULL, this );
	m_checkBox_sbs_s3_mtu->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3MTUOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_dport_refresh->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3DPortRefreshOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_udp_timtout->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3UDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_keepalive->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3KeepAliveOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_mux_tunnels->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3MuxTunnelsOnCheckBox ), NULL, this );
	m_button_sbs_s4_save_file->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( StepByStep::Step4SaveFileOnButtonClick ), NULL, this );
}

StepByStep::~StepByStep()
{
	// Disconnect Events
	m_choice_sbs_s2_encryption->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( StepByStep::Step2EncryptionOnChoice ), NULL, this );
	m_checkBox_sbs_s3_mtu->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3MTUOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_dport_refresh->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3DPortRefreshOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_udp_timtout->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3UDPTimeoutOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_keepalive->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3KeepAliveOnCheckBox ), NULL, this );
	m_checkBox_sbs_s3_mux_tunnels->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( StepByStep::Step3MuxTunnelsOnCheckBox ), NULL, this );
	m_button_sbs_s4_save_file->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( StepByStep::Step4SaveFileOnButtonClick ), NULL, this );

}
