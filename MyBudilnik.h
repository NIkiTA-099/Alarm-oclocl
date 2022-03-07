#pragma once

namespace Áóäèëüíèê {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Ñâîäêà äëÿ MyBudilnik
	/// </summary>
	public ref class MyBudilnik : public System::Windows::Forms::Form
	{
		SoundPlayer^ sp = gcnew SoundPlayer("music/timer.wav");
		String^ a;
		String^ g;
		String^ f;
	public:
		MyBudilnik(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyBudilnik()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàçàäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::DateTimePicker^ date1;

	private: System::Windows::Forms::DateTimePicker^ date2;

	private: System::Windows::Forms::DateTimePicker^ date3;

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyBudilnik::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàçàäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->date1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 38.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(24, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 58);
			this->label1->TabIndex = 0;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox1.BackgroundImage")));
			this->checkBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(194, 126);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(90, 20);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Âûêëş÷åí";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox2.BackgroundImage")));
			this->checkBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(194, 173);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(90, 20);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Âûêëş÷åí";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox3.BackgroundImage")));
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(194, 219);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(90, 20);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Âûêëş÷åí";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyBudilnik::checkBox3_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(126, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(138, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(138, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->maskedTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 17.25F));
			this->maskedTextBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->maskedTextBox1->Location = System::Drawing::Point(113, 118);
			this->maskedTextBox1->Mask = L"00:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(69, 28);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->maskedTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 17.25F));
			this->maskedTextBox2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->maskedTextBox2->Location = System::Drawing::Point(113, 161);
			this->maskedTextBox2->Mask = L"00:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(69, 28);
			this->maskedTextBox2->TabIndex = 8;
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->maskedTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 17.25F));
			this->maskedTextBox3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->maskedTextBox3->Location = System::Drawing::Point(113, 211);
			this->maskedTextBox3->Mask = L"00:00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(69, 28);
			this->maskedTextBox3->TabIndex = 9;
			this->maskedTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox3->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyBudilnik::maskedTextBox3_MaskInputRejected);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåíşToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 26);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ìåíşToolStripMenuItem.BackgroundImage")));
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->íàçàäToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->ìåíşToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ìåíşToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			this->ìåíşToolStripMenuItem->Size = System::Drawing::Size(67, 22);
			this->ìåíşToolStripMenuItem->Text = L"Ìåíş";
			this->ìåíşToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyBudilnik::ìåíşToolStripMenuItem_Click);
			// 
			// íàçàäToolStripMenuItem
			// 
			this->íàçàäToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"íàçàäToolStripMenuItem.BackgroundImage")));
			this->íàçàäToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->íàçàäToolStripMenuItem->Name = L"íàçàäToolStripMenuItem";
			this->íàçàäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->íàçàäToolStripMenuItem->Text = L"Íàçàä";
			this->íàçàäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyBudilnik::íàçàäToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûõîäToolStripMenuItem.BackgroundImage")));
			this->âûõîäToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyBudilnik::âûõîäToolStripMenuItem_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyBudilnik::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyBudilnik::timer2_Tick);
			// 
			// date1
			// 
			this->date1->Checked = false;
			this->date1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date1->Location = System::Drawing::Point(12, 132);
			this->date1->MinDate = System::DateTime(2021, 5, 15, 0, 0, 0, 0);
			this->date1->Name = L"date1";
			this->date1->Size = System::Drawing::Size(95, 23);
			this->date1->TabIndex = 11;
			this->date1->Value = System::DateTime(2021, 5, 15, 18, 19, 22, 0);
			// 
			// date2
			// 
			this->date2->Checked = false;
			this->date2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date2->Location = System::Drawing::Point(12, 171);
			this->date2->MinDate = System::DateTime(2021, 5, 15, 0, 0, 0, 0);
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(95, 23);
			this->date2->TabIndex = 12;
			this->date2->Value = System::DateTime(2021, 5, 15, 18, 19, 22, 0);
			// 
			// date3
			// 
			this->date3->Checked = false;
			this->date3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->date3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date3->Location = System::Drawing::Point(12, 212);
			this->date3->MinDate = System::DateTime(2021, 5, 15, 0, 0, 0, 0);
			this->date3->Name = L"date3";
			this->date3->Size = System::Drawing::Size(95, 23);
			this->date3->TabIndex = 13;
			this->date3->Value = System::DateTime(2021, 5, 15, 18, 19, 22, 0);
			// 
			// MyBudilnik
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(284, 265);
			this->ControlBox = false;
			this->Controls->Add(this->date3);
			this->Controls->Add(this->date2);
			this->Controls->Add(this->date1);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyBudilnik";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Áóäèëüíèê";
			this->Load += gcnew System::EventHandler(this, &MyBudilnik::MyBudilnik_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyBudilnik_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime now = DateTime::Now;
	if (now.TimeOfDay.Hours < 10) {
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
	if (checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == true || checkBox1->Checked == true && checkBox2->Checked == true && checkBox3->Checked == false || checkBox1->Checked == true && checkBox2->Checked == false && checkBox3->Checked == true || checkBox1->Checked == true && checkBox2->Checked == false && checkBox3->Checked == false || checkBox1->Checked == false && checkBox2->Checked == true && checkBox3->Checked == true || checkBox1->Checked == false && checkBox2->Checked == true && checkBox3->Checked == false || checkBox1->Checked == false && checkBox2->Checked == false && checkBox3->Checked == true) {
		timer2->Start();
		label2->Text = maskedTextBox1->Text + ":00 ";
		label3->Text = maskedTextBox2->Text + ":00 ";
		label4->Text = maskedTextBox3->Text + ":00 ";
	}
	if (checkBox1->Checked == true) {
		checkBox1->Text = "Âêëş÷¸í";
	}
	else {
		checkBox1->Text = "Âûêëş÷åí";
	}

	if (checkBox2->Checked == true) {
		checkBox2->Text = "Âêëş÷¸í";
	}
	else {
		checkBox2->Text = "Âûêëş÷åí";
	}
	if (checkBox3->Checked == true) {
		checkBox3->Text = "Âêëş÷¸í";
	}
	else {
		checkBox3->Text = "Âûêëş÷åí";
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (label2->Text == label1->Text) {
		sp->Play();
		if ((MessageBox::Show("Áóäèëüíèê ñğàáîòàë!", "Áóäèëüíèê", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK))
		{
			sp->Stop();
		}
	}
	if (label3->Text == label1->Text) {
		sp->Play();
		if ((MessageBox::Show("Áóäèëüíèê ñğàáîòàë!", "Áóäèëüíèê", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK))
		{
			sp->Stop();
		}
	}
	if (label4->Text == label1->Text) {
		sp->Play();
		if ((MessageBox::Show("Áóäèëüíèê ñğàáîòàë!", "Áóäèëüíèê", MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK))
		{
			sp->Stop();
		}
	}
}
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((MessageBox::Show("Âû óâåğåíû, ÷òî õîòèòå âûéòè?", "Âûõîä", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes))
	{
		Application::Exit();
	}
}
private: System::Void íàçàäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void maskedTextBox3_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void ìåíşToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
