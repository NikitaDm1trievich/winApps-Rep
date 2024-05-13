#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {

	system("chcp 1251");

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	testWinApp::MyForm form;
	Application::Run(% form);

}