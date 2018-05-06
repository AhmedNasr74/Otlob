#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int Main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project17::MyForm form;
	Application::Run(%form);
	return 0;
}

//#include "MyForm.h"

