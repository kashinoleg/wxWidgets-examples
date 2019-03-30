#pragma once
#include "wx/wx.h"

class Frame : public wxFrame
{
public:
	Frame(const wxString& title, const wxPoint& pos, const wxSize& size);

private:
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnHello(wxCommandEvent& event);

	DECLARE_EVENT_TABLE();
};
