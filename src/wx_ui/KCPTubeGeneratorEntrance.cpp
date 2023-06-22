#include "KCPTubeGeneratorEntrance.h"

KCPTubeGeneratorEntrance::KCPTubeGeneratorEntrance( wxWindow* parent )
:
Entrance( parent )
{
	PutTextOnScreen();
	AdjustUI();
}

void KCPTubeGeneratorEntrance::PutTextOnScreen()
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
		entrance_text_id_to_text = all_std_string_to_wxstring(languages::entrance_text_id_to_text_chs);
		break;

	case wxLANGUAGE_CHINESE_HONGKONG:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_MACAO:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_TAIWAN:
		[[fallthrough]];
	case wxLANGUAGE_CHINESE_TRADITIONAL_EXPLICIT:
		entrance_text_id_to_text = all_std_string_to_wxstring(languages::entrance_text_id_to_text_cht);
		break;

	default:
		entrance_text_id_to_text = all_std_string_to_wxstring(languages::entrance_text_id_to_text_eng);
		break;
	}

	m_staticText_show_selections->SetLabelText(entrance_text_id_to_text[languages::entrance_text_id::please_choose]);
	m_button_wizard->SetLabelText(entrance_text_id_to_text[languages::entrance_text_id::steps]);
	m_button_manual->SetLabelText(entrance_text_id_to_text[languages::entrance_text_id::input_myself]);
	m_button_verify->SetLabelText(entrance_text_id_to_text[languages::entrance_text_id::verify_file]);
	m_staticText_readme->SetLabelText(entrance_text_id_to_text[languages::entrance_text_id::readme]);
}

void KCPTubeGeneratorEntrance::AdjustUI()
{
	auto button_font = m_button_wizard->GetFont();
	button_font.SetPointSize(12);
	m_button_wizard->SetFont(button_font);
	m_button_manual->SetFont(button_font);
	m_button_verify->SetFont(button_font);

	auto text_font = m_staticText_show_selections->GetFont();
	text_font.SetPointSize(15);
	m_staticText_show_selections->SetFont(text_font);

	text_font = m_staticText_readme->GetFont();
	text_font.SetPointSize(10);
	m_staticText_readme->SetFont(text_font);
	m_hyperlink_to_website->SetFont(text_font);
	m_hyperlink_link_to_this_tool->SetFont(text_font);
	m_panel_holdings->Layout();
	m_panel_holdings->Fit();
	Layout();
	Fit();
}

void KCPTubeGeneratorEntrance::EntranceStepbyStepOnButtonClick( wxCommandEvent& event )
{
	std::unique_ptr<KCPTubeGeneratorStepByStep> stepbystep_frame = std::make_unique<KCPTubeGeneratorStepByStep>(this);
	stepbystep_frame->SetMinSize(stepbystep_frame->FromDIP(wxSize(320, -1)));
	stepbystep_frame->ShowModal();
}

void KCPTubeGeneratorEntrance::EntranceUserInputOnButtonClick( wxCommandEvent& event )
{
	std::unique_ptr<KCPTubeGeneratorUserInput> userinput_frame = std::make_unique<KCPTubeGeneratorUserInput>(this);
	userinput_frame->SetMinSize(userinput_frame->FromDIP(wxSize(390, -1)));
	userinput_frame->Layout();
	userinput_frame->Fit();
	userinput_frame->ShowModal();
}

void KCPTubeGeneratorEntrance::EntranceVerifyFileOnButtonClick( wxCommandEvent& event )
{
	wxFileDialog m_fileDialog(this, wxT("Select a file"), wxEmptyString, wxEmptyString, wxT("*.conf"), wxFD_DEFAULT_STYLE);
	if (m_fileDialog.ShowModal() == wxID_CANCEL)
		return;

	wxString file_path = m_fileDialog.GetPath();
	std::vector<std::string> lines;
	std::ifstream input(file_path.ToStdString());
	if (!input.good() || !input.is_open())
	{
		wxMessageBox(entrance_text_id_to_text[languages::entrance_text_id::cannot_open_file] + ":\n\n" + m_fileDialog.GetPath(), entrance_text_id_to_text[languages::entrance_text_id::cannot_open_file], wxICON_ERROR);
		return;
	}

	std::copy(
		std::istream_iterator<std::string>(input),
		std::istream_iterator<std::string>(),
		std::back_inserter(lines));

	std::vector<std::string> error_msg;
	std::string all_errors;
	parse_from_args(lines, error_msg);
	if (error_msg.size() > 0)
	{
		for (const std::string &each_one : error_msg)
		{
			all_errors += each_one + "\n";
		}
		wxMessageBox(all_errors + m_fileDialog.GetPath(), entrance_text_id_to_text[languages::entrance_text_id::error_found], wxICON_ERROR);
	}
	else
	{
		wxMessageBox(entrance_text_id_to_text[languages::entrance_text_id::no_error], this->GetTitle(), wxICON_INFORMATION);
	}
}
