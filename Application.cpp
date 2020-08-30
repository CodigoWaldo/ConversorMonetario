#include <wx/image.h>
#include "Application.h"
#include "m_ventanuli.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	m_ventanuli *win = new m_ventanuli(NULL);
	win->Show();
	return true;
}

