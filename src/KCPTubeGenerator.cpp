#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "wx_ui/KCPTubeGeneratorEntrance.h"
#include "KCPTubeGenerator.h"

#ifdef __WXMSW__
#ifdef _DEBUG
#pragma comment (lib, "wxmsw32ud_core.lib")
#pragma comment (lib, "wxbase32ud.lib")
#else
#pragma comment (lib, "wxmsw32u_core.lib")
#pragma comment (lib, "wxbase32u.lib")
#endif

#pragma comment (lib, "comctl32.lib")
#pragma comment (lib, "rpcrt4.lib")
#pragma comment (lib, "shlwapi.lib")
#pragma comment (lib, "version.lib")
#pragma comment (lib, "wininet.lib")
#pragma comment (lib, "winmm.lib")
#pragma comment (lib, "ws2_32.lib")
#endif

class KCPTubeConfigurationGenerator : public wxApp
{
public:
	// override base class virtuals
	// ----------------------------

	// this one is called on application startup and is a good place for the app
	// initialization (doing it here and not in the ctor allows to have an error
	// return: if OnInit() returns false, the application terminates)
	virtual bool OnInit() wxOVERRIDE;
};

// Create a new application object: this macro will allow wxWidgets to create
// the application object during program execution (it's better than using a
// static object for many reasons) and also implements the accessor function
// wxGetApp() which will return the reference of the right type (i.e. MyApp and
// not wxApp)
wxIMPLEMENT_APP(KCPTubeConfigurationGenerator);

bool KCPTubeConfigurationGenerator::OnInit()
{
	// call the base class initialization method, currently it only parses a
	// few common command-line options but it could be do more in the future
	if (!wxApp::OnInit())
		return false;

	// create the main application window

	// and show it (the frames, unlike simple controls, are not shown when
	// created initially)

	KCPTubeGeneratorEntrance *frame = new KCPTubeGeneratorEntrance(nullptr);
	frame->SetMinSize(frame->FromDIP(wxSize(200, -1)));
	frame->Layout();
	frame->Fit();

	frame->Show();

	// success: wxApp::OnRun() will be called which will enter the main message
	// loop and the application will run. If we returned false here, the
	// application would exit immediately.
	return true;
}
