#include "MyMenu.h"
#include "MyBudilnik.h"
#include "MySekundomer.h"
#include "MyTimer.h"
#include < iostream >
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Будильник::MyMenu form;
	Application::Run(% form);
}

System::Void Будильник::MyMenu::b1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyBudilnik^ Fo1 = gcnew MyBudilnik();
	Fo1->Show();
	this->Hide();
}

System::Void Будильник::MyMenu::b2_Click(System::Object^ sender, System::EventArgs^ e)
{
	MySekundomer^ Fo2 = gcnew MySekundomer();
	Fo2->Show();
	this->Hide();
}

System::Void Будильник::MyMenu::b3_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyTimer^ Fo3 = gcnew MyTimer();
	Fo3->Show();
	this->Hide();
}
