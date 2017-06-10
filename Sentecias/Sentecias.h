#pragma once  //______________________________________ Sentecias.h  
#include "Resource.h"
class Sentecias: public Win::Dialog
{
public:
	Sentecias()
	{
	}
	~Sentecias()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxNombre;
	Win::Label lb2;
	Win::Textbox tbxVerbo;
	Win::Label lb3;
	Win::Textbox tbxSentencia;
	Win::Button btClick;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(12.67354);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(3.36021);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Sentecias";
		lb1.CreateX(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.47625, 0.37042, 1.95792, 0.60854, hWnd, 1000);
		tbxNombre.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.44979, 1.37583, 2.38125, 0.60854, hWnd, 1001);
		lb2.CreateX(NULL, L"likes", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 3.17500, 1.45521, 2.24896, 0.60854, hWnd, 1002);
		tbxVerbo.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 5.95313, 1.32292, 2.77812, 0.60854, hWnd, 1003);
		lb3.CreateX(NULL, L"Verbo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 5.97958, 0.52917, 2.06375, 0.60854, hWnd, 1004);
		tbxSentencia.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 0.37042, 2.56646, 8.49313, 0.60854, hWnd, 1005);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.49854, 1.64042, 2.98979, 0.68792, hWnd, 1006);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		tbxNombre.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxVerbo.Font = fontArial009A;
		lb3.Font = fontArial009A;
		tbxSentencia.Font = fontArial009A;
		btClick.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
