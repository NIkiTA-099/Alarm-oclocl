#pragma once

namespace Áóäèëüíèê {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MySekundomer
	/// </summary>
	public ref class MySekundomer : public System::Windows::Forms::Form
	{
		int m, s, ms;
	public:
		MySekundomer(void)
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
		~MySekundomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ìåíşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::Label^ min;
	private: System::Windows::Forms::Label^ sek;
	private: System::Windows::Forms::Label^ minisek;


	private: System::Windows::Forms::Button^ start_stop;
	private: System::Windows::Forms::Button^ sbros;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MySekundomer::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ìåíşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->min = (gcnew System::Windows::Forms::Label());
			this->sek = (gcnew System::Windows::Forms::Label());
			this->minisek = (gcnew System::Windows::Forms::Label());
			this->start_stop = (gcnew System::Windows::Forms::Button());
			this->sbros = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ìåíşToolStripMenuItem });
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// ìåíşToolStripMenuItem
			// 
			this->ìåíşToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñïğàâêàToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			resources->ApplyResources(this->ìåíşToolStripMenuItem, L"ìåíşToolStripMenuItem");
			this->ìåíşToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ìåíşToolStripMenuItem->Name = L"ìåíşToolStripMenuItem";
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			resources->ApplyResources(this->ñïğàâêàToolStripMenuItem, L"ñïğàâêàToolStripMenuItem");
			this->ñïğàâêàToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MySekundomer::ñïğàâêàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			resources->ApplyResources(this->âûõîäToolStripMenuItem, L"âûõîäToolStripMenuItem");
			this->âûõîäToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MySekundomer::âûõîäToolStripMenuItem_Click);
			// 
			// min
			// 
			resources->ApplyResources(this->min, L"min");
			this->min->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->min->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->min->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->min->Name = L"min";
			// 
			// sek
			// 
			resources->ApplyResources(this->sek, L"sek");
			this->sek->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->sek->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sek->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sek->Name = L"sek";
			// 
			// minisek
			// 
			resources->ApplyResources(this->minisek, L"minisek");
			this->minisek->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->minisek->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minisek->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->minisek->Name = L"minisek";
			// 
			// start_stop
			// 
			this->start_stop->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->start_stop, L"start_stop");
			this->start_stop->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->start_stop->Name = L"start_stop";
			this->start_stop->UseVisualStyleBackColor = false;
			this->start_stop->Click += gcnew System::EventHandler(this, &MySekundomer::start_stop_Click);
			// 
			// sbros
			// 
			this->sbros->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			resources->ApplyResources(this->sbros, L"sbros");
			this->sbros->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->sbros->Name = L"sbros";
			this->sbros->UseVisualStyleBackColor = false;
			this->sbros->Click += gcnew System::EventHandler(this, &MySekundomer::sbros_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MySekundomer::timer1_Tick);
			// 
			// MySekundomer
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			resources->ApplyResources(this, L"$this");
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ControlBox = false;
			this->Controls->Add(this->sbros);
			this->Controls->Add(this->start_stop);
			this->Controls->Add(this->minisek);
			this->Controls->Add(this->sek);
			this->Controls->Add(this->min);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MySekundomer";
			this->ShowIcon = false;
			this->Load += gcnew System::EventHandler(this, &MySekundomer::MySekundomer_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((MessageBox::Show("Âû óâåğåíû, ÷òî õîòèòå âûéòè?", "Âûõîä", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes))
		{
			Application::Exit();
		}
	}
	private: System::Void start_stop_Click(System::Object^ sender, System::EventArgs^ e) {
		if (timer1->Enabled)//åñëè òàéìåğ óæå âêëş÷¸í
		{
			timer1->Enabled = false;
			start_stop->Text = "Ñòàğò";
			sbros->Enabled = true;
		}
		else
		{
			//åñëè òàéìåğ âûêëş÷åí
			timer1->Enabled = true;
			start_stop->Text = "Ñòîï";
			sbros->Enabled = false;
		}
	}
	private: System::Void sbros_Click(System::Object^ sender, System::EventArgs^ e) {
		m = 0;
		s = 0;
		ms = 0;
		min->Text = "00 :";
		sek->Text = "00 :";
		minisek->Text = "00";
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (ms == 99)
		{
			if (s == 59)
			{
				if (m == 99) {
					m = 0;
				}
				else {
					m++;
				}
				s = 0;
			}
			else { 
				s++; 
			}
			ms = 0;
		}
		else {
			ms++;
		}

		if (m < 10) {
			min->Text = "0" + m + " :";
		}
		else {
			min->Text = m + " :";
		}
		if (s < 10) {
			sek->Text = "0" + s + " :";
		}
		else {
			sek->Text = s + " :";
		}
		if (ms < 10) {
			minisek->Text = "0" + ms;
		}
		else{
			minisek->Text = ms + "";
		}

	}

private: System::Void MySekundomer_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
