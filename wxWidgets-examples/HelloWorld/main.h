#pragma once
#include "wx/wx.h"

// The HelloWorldApp class. This class shows a window
// containing a statusbar with the text "Hello World"
class HelloWorldApp : public wxApp
{
public:
	virtual bool OnInit();
};

DECLARE_APP(HelloWorldApp)