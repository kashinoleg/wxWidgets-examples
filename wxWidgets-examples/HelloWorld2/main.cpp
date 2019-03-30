#include "main.h"
#include "frame.h"

IMPLEMENT_APP(App);
// clang-format on

bool App::OnInit()
{
	Frame* frame = new Frame(L"Hello World", wxPoint(50, 50), wxSize(450, 340));
	frame->Show(true);
	return true;
}
