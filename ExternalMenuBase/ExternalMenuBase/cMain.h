#pragma once

#include "wx/wx.h"

class cMain : public wxFrame{
public:
	cMain();
	~cMain();
	
public: 
	wxButton* m_btn1 = nullptr;
	wxListBox* m_lstbx = nullptr;
	wxTextCtrl* m_txt1 = nullptr;


};

