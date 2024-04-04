#pragma once
#include "SearchWindow.h"
#include "EditWindow.h"
#include "InfoForm.h"
#include "WebForm.h"

namespace InstitutesBase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ StartWindow
	/// </summary>
	public ref class StartWindow : public System::Windows::Forms::Form
	{
	public:
		StartWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~StartWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_search;
	private: System::Windows::Forms::Button^ btn_editbase;








	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ објвтореToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;





	private: System::ComponentModel::IContainer^ components;

	protected:


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->btn_editbase = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->објвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(357, 60);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(561, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ƒобро пожаловать в справочник абитуриента!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(451, 111);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(515, 454);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(435, 592);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(433, 27);
			this->label3->TabIndex = 3;
			this->label3->Text = L"¬ыбеите режим работы со справочником:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_search
			// 
			this->btn_search->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btn_search->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_search->Location = System::Drawing::Point(441, 650);
			this->btn_search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(256, 106);
			this->btn_search->TabIndex = 4;
			this->btn_search->Text = L"ѕоиск ¬”«ов и специальностей";
			this->btn_search->UseVisualStyleBackColor = false;
			this->btn_search->Click += gcnew System::EventHandler(this, &StartWindow::btn_search_Click);
			// 
			// btn_editbase
			// 
			this->btn_editbase->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btn_editbase->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_editbase->Location = System::Drawing::Point(731, 650);
			this->btn_editbase->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_editbase->Name = L"btn_editbase";
			this->btn_editbase->Size = System::Drawing::Size(249, 106);
			this->btn_editbase->TabIndex = 5;
			this->btn_editbase->Text = L"–едактирование базы данных";
			this->btn_editbase->UseVisualStyleBackColor = false;
			this->btn_editbase->Click += gcnew System::EventHandler(this, &StartWindow::btn_editbase_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->објвтореToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1395, 29);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// објвтореToolStripMenuItem
			// 
			this->објвтореToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->објвтореToolStripMenuItem->Name = L"објвтореToolStripMenuItem";
			this->објвтореToolStripMenuItem->Size = System::Drawing::Size(49, 25);
			this->објвтореToolStripMenuItem->Text = L"Info";
			this->објвтореToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartWindow::објвтореToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(82, 650);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 101);
			this->button1->TabIndex = 10;
			this->button1->Text = L"WEB";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StartWindow::button1_Click);
			// 
			// StartWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1395, 788);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_editbase);
			this->Controls->Add(this->btn_search);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"StartWindow";
			this->Text = L"StartWindow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// обработчик событи€ наажати€ на кнопку "ѕоиск ¬”«ов"
	private: System::Void btn_search_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchWindow^ searchForm = gcnew SearchWindow();
		searchForm->Owner = this;
		this->Hide();
		searchForm->Show();
	}
		   // обработчик событи€ наажати€ на кнопку "–едактирование базы данных"
	private: System::Void btn_editbase_Click(System::Object^ sender, System::EventArgs^ e) {
		EditWindow^ editForm = gcnew EditWindow();
		editForm->Show();
		editForm->Owner = this;
		this->Hide();
	}
		   // обработчик событи€ наажати€ на кнопку "Info" на верхней панели меню
	private: System::Void објвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		InfoForm^ infoForm = gcnew InfoForm();
		infoForm->Show();
		infoForm->Owner = this;
		this->Enabled = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		WebForm^ webForm = gcnew WebForm();
		webForm->Show();
		webForm->Owner = this;
		//webForm->webBrowser1.Url = gcnew Uri("http://google.com");
	}
};
}
