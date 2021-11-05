#include "StartForm.h"
#include "EmployeeForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CarRent::StartForm form;
	Application::Run(% form);
}