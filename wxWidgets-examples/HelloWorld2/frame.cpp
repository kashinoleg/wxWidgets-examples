#include "frame.h"
#include "WindowIDs.h"

// clang-format off
BEGIN_EVENT_TABLE(Frame, wxFrame)
EVT_MENU(ID_Hello, Frame::OnHello)
EVT_MENU(wxID_EXIT, Frame::OnExit)
EVT_MENU(wxID_ABOUT, Frame::OnAbout)
END_EVENT_TABLE();

Frame::Frame(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, wxID_ANY, title, pos, size)
{
	wxMenu* menuFile = new wxMenu();
	menuFile->Append(ID_Hello, L"&Hello...\tCtrl-H", L"Help string show in status bar");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);

	wxMenu* menuHelp = new wxMenu();
	menuHelp->Append(wxID_ABOUT);

	wxMenuBar* menuBar = new wxMenuBar();
	menuBar->Append(menuFile, L"&File");
	menuBar->Append(menuHelp, L"&Help");

	SetMenuBar(menuBar);
	CreateStatusBar();
	SetStatusText(L"Welcome to wxWidgets!");
}

void Frame::OnExit(wxCommandEvent& event)
{
	Close(true);
}

void Frame::OnAbout(wxCommandEvent& event)
{
	wxMessageBox(L"This is a wxWidgets' Hello world example", L"About Hello World",
		wxOK | wxICON_INFORMATION);
}

void Frame::OnHello(wxCommandEvent& event)
{
	wxLogMessage(L"Hello World from wxWidgets!");
}
