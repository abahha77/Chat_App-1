#include "loginform.h"
#include "signupform.h"
#include "homeform.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ChatAppGUI::loginform frm;
	ChatAppGUI::homeform fm;
	ChatAppGUI::signupform form;

	Application::Run(% frm);
	Application::Run(% fm);
	Application::Run(% form);

	frm.ShowDialog();
	fm.ShowDialog();
	form.ShowDialog();

	User^ user = frm.user;

	if (user != nullptr)
	{
		MessageBox::Show("successfull Authentication",
			"program.cpp", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Authentication failed",
			"program.cpp", MessageBoxButtons::OK);
	}
}
