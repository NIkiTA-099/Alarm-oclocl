#include "MyTimer.h"
#include "MyMenu.h"
System::Void ���������::MyTimer::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyMenu^ Fo0 = gcnew MyMenu();
	Fo0->Show();
	this->Hide();
}
