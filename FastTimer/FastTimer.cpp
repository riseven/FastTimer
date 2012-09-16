// FastTimer.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "MainForm.h"

using namespace FastTimer;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Habilitar los efectos visuales de Windows XP antes de crear ningún control
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Crear la ventana principal y ejecutarla
	Application::Run(gcnew MainForm());
	return 0;
}
