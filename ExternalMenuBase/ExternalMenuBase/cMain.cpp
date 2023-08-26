#include "cMain.h"
#include <wx/notebook.h>
#include <wx/hyperlink.h>







cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Base made by Softcare", wxPoint(300, 300), wxSize(600, 400), wxDEFAULT_FRAME_STYLE & ~wxRESIZE_BORDER){
	/*m_btn1 = new wxButton(this, 10001, "Eh", wxPoint(10, 10), wxSize(150, 50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_lstbx = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));*/


    SetWindowStyle(wxDEFAULT_FRAME_STYLE & ~wxMAXIMIZE_BOX);
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    wxIcon icon;
    icon.LoadFile("premiere.ico", wxBITMAP_TYPE_ICO);

    SetIcon(icon);


    wxNotebook* notebook = new wxNotebook(this, wxID_ANY);
    wxPanel* tab1= new wxPanel(notebook, wxID_ANY);
    wxPanel* tab2 = new wxPanel(notebook, wxID_ANY);
    wxPanel* tab3 = new wxPanel(notebook, wxID_ANY);

    notebook->AddPage(tab1, "Visuals");
    notebook->AddPage(tab2, "Aimbot");
    notebook->AddPage(tab3, "Settings");
    
    wxCheckBox* Esp = new wxCheckBox(tab1, wxID_ANY, "ESP", wxPoint(10, 10));
    wxCheckBox* Aimbot = new wxCheckBox(tab2, wxID_ANY, "Aimbot", wxPoint(10, 10));
    wxHyperlinkCtrl* GithubLink = new wxHyperlinkCtrl(tab3, wxID_ANY,
        "Fufugua's Github",
        "https://github.com/FUFUGUA");
    

    bool isChecked = Esp->GetValue();
    if (isChecked) {
        //Function to run if the CheckBoxes bool is true
        wxLogMessage("True");
    }
    else {
        //Don't do anything if it's not checked I guess...
    }
    
    bool isCheckedAimbot = Aimbot->GetValue();
    if (isCheckedAimbot) {
        wxLogMessage("Aimbot on");
    }
    else {
        
    }

    sizer->Add(notebook, 1, wxEXPAND);
    SetSizer(sizer);

}

cMain::~cMain() {}


