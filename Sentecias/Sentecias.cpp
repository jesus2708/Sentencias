#include "stdafx.h"  //________________________________________ Sentecias.cpp
#include "Sentecias.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Sentecias app;
	return app.BeginDialog(IDI_Sentecias, hInstance);
}

void Sentecias::Window_Open(Win::Event& e)
{
}

void Sentecias::btClick_Click(Win::Event& e)
{
	const wstring nombre = tbxNombre.Text;
	const wstring verbo = tbxVerbo.Text;
	wstring sentece = nombre;
	sentece += L" like ";
	sentece += verbo;
	tbxSentencia.Text = sentece;
}

