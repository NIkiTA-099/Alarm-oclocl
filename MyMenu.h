#pragma once
#include "MyBudilnik.h"

namespace ��������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{
		String^ a;
		String^ g;
		String^ f;
	public:
		MyMenu(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b3;
	protected:

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMenu::typeid));
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// b1
			// 
			this->b1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.BackgroundImage")));
			this->b1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->b1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b1.Image")));
			this->b1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->b1->Location = System::Drawing::Point(12, 106);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(260, 46);
			this->b1->TabIndex = 0;
			this->b1->Text = L"���������";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MyMenu::b1_Click);
			// 
			// b2
			// 
			this->b2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.BackgroundImage")));
			this->b2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b2.Image")));
			this->b2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->b2->Location = System::Drawing::Point(12, 158);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(260, 46);
			this->b2->TabIndex = 1;
			this->b2->Text = L"����������";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MyMenu::b2_Click);
			// 
			// b3
			// 
			this->b3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.BackgroundImage")));
			this->b3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->b3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"b3.Image")));
			this->b3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->b3->Location = System::Drawing::Point(12, 210);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(260, 46);
			this->b3->TabIndex = 2;
			this->b3->Text = L"������";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &MyMenu::b3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 26);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����ToolStripMenuItem.BackgroundImage")));
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(67, 22);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����ToolStripMenuItem.BackgroundImage")));
			this->�����ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::�����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem.BackgroundImage")));
			this->�������ToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyMenu::�������ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(28, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 59);
			this->label1->TabIndex = 4;
			this->label1->Click += gcnew System::EventHandler(this, &MyMenu::label1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyMenu::timer1_Tick);
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(284, 265);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime now = DateTime::Now;
	if(now.TimeOfDay.Hours < 10){
	a = "0" + now.TimeOfDay.Hours + ":";
	}
	else {
		a = now.TimeOfDay.Hours + ":";
	}
	if (now.TimeOfDay.Minutes < 10) {
	g = "0" + now.TimeOfDay.Minutes + ":";
	}
	else {
		g = now.TimeOfDay.Minutes + ":";
	}
	if (now.TimeOfDay.Seconds < 10) {
		f = "0" + now.TimeOfDay.Seconds + " ";
	}
	else {
		f = now.TimeOfDay.Seconds + " ";
	}
	label1->Text = a + g + f;
}
private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((MessageBox::Show("�� �������, ��� ������ �����?", "�����", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes))
	{
		Application::Exit();
	}
}
private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void b3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("����������� �������� ��������� �������� � ���� \n 1.���������\n 2.����������\n 3.������ \n���������� ��� �������� ������ 9�9392 ����� ������", "�������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
