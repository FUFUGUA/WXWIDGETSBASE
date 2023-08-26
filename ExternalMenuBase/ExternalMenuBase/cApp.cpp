#include "cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp() {

}

cApp::~cApp() {}

bool cApp::OnInit() {
	cMain* frame = new cMain();
	frame->Show(true);
	return true;
}