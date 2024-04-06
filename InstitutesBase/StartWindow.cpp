#include "StartWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	setlocale(LC_ALL, "Rus");

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	InstitutesBase::StartWindow form;
	Application::Run(% form);
}