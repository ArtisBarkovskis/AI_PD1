#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
//koda bloks, lietotnes palaisanai
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SummeArtisB::MyForm form;
	Application::Run(% form);
	return 0;
}