#pragma once
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <utility>
#include <set>
#include <string>
#include "List.h"
//#include <List>

namespace InstitutesBase {
	using namespace msclr::interop;
	using namespace cli;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using std::set;
	using std::string;
	using std::make_pair;
	using std::pair;

	/// <summary>
	/// ������ ��� AddDataForm
	/// </summary>
	public ref class AddDataForm : public System::Windows::Forms::Form
	{
	public:
		AddDataForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	private: System::Windows::Forms::ComboBox^ InstNameCmb;
	public:
		String^ filename;	// ���������� ��� �������� ���� �� ��������
		cli::array< String^>^ instNames;	// ������ ��� �������� �������� �����
		int arrlen;		// ����� �������
		List^ dataBase = gcnew List();	// ���������� ��� �������� ������ �����
		List^ current = gcnew List();	// ���������� ��� �������� ������� ������
		List^ new_element;	// ���������� ��� �������� ������ ����� ������
		speciality* new_spec;	// ���������� ��� ����� �������������
		map<int, speciality>* new_specs;	// ������� ��� ������ �������������� ������ ����
		bool is_new_inst = true;	// ���������� ������������ ���� �������� ������ ����
		bool data_added = false;	// ���������� ������������ ���� ���������� ������ � ��� ������������ ���

		void load_names(set<string> names, List^ database)	// ����� ��� �������� �������� ����� �� ���� ������
		{
			dataBase = database;
			int i = 0;
			instNames = gcnew cli::array< String^ >(names.size());
			for (string name : names)
			{
				instNames[i] = marshal_as<String^>(name);
				i++;
			}
			arrlen = i;
		}


		List^ add_new_inst() {	// ������� ��� �������� ������ ����� ������ � ������������ �����
			return new_element;
		}

		pair<string, speciality> add_new_spec() {	// ������� ��� �������� ������ ����� ������������� ���� � ������������ �����
			marshal_context^ mrshcntx = gcnew marshal_context();
			pair<string, speciality> addition;
			addition.first = mrshcntx->marshal_as<string>(current->data->instName); // �������� ����
			addition.second = *new_spec;	// ����� �������������
			return addition;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AddDataForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ NewSaveDataBtn;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ NewSpNameTb;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ LogoPb;
	private: System::Windows::Forms::Button^ ChooseLogoBtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ NewPostAddressTb;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::NumericUpDown^ MinMarkNum;
	private: System::Windows::Forms::NumericUpDown^ LastMinMarkNum;
	private: System::Windows::Forms::NumericUpDown^ CostNum;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ EdFormTb;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddDataForm::typeid));
			this->NewSaveDataBtn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NewSpNameTb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->LogoPb = (gcnew System::Windows::Forms::PictureBox());
			this->ChooseLogoBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NewPostAddressTb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->MinMarkNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->LastMinMarkNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->CostNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->EdFormTb = (gcnew System::Windows::Forms::TextBox());
			this->InstNameCmb = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoPb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinMarkNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastMinMarkNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CostNum))->BeginInit();
			this->SuspendLayout();
			// 
			// NewSaveDataBtn
			// 
			this->NewSaveDataBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->NewSaveDataBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewSaveDataBtn->Location = System::Drawing::Point(1188, 480);
			this->NewSaveDataBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NewSaveDataBtn->Name = L"NewSaveDataBtn";
			this->NewSaveDataBtn->Size = System::Drawing::Size(279, 85);
			this->NewSaveDataBtn->TabIndex = 34;
			this->NewSaveDataBtn->Text = L"��������� ������";
			this->NewSaveDataBtn->UseVisualStyleBackColor = false;
			this->NewSaveDataBtn->Click += gcnew System::EventHandler(this, &AddDataForm::NewSaveDataBtn_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(39, 480);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(162, 69);
			this->label8->TabIndex = 32;
			this->label8->Text = L"��������� \r\n(��� ���������� \r\n��������)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(39, 427);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 23);
			this->label7->TabIndex = 30;
			this->label7->Text = L"������� �������� ����:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(39, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 23);
			this->label5->TabIndex = 28;
			this->label5->Text = L"��������� ����:";
			// 
			// NewSpNameTb
			// 
			this->NewSpNameTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewSpNameTb->Location = System::Drawing::Point(347, 257);
			this->NewSpNameTb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NewSpNameTb->Name = L"NewSpNameTb";
			this->NewSpNameTb->Size = System::Drawing::Size(703, 26);
			this->NewSpNameTb->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(39, 231);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 46);
			this->label6->TabIndex = 26;
			this->label6->Text = L"������������\r\n�������������:";
			// 
			// LogoPb
			// 
			this->LogoPb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->LogoPb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoPb.Image")));
			this->LogoPb->Location = System::Drawing::Point(1091, 84);
			this->LogoPb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LogoPb->Name = L"LogoPb";
			this->LogoPb->Size = System::Drawing::Size(376, 265);
			this->LogoPb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LogoPb->TabIndex = 25;
			this->LogoPb->TabStop = false;
			// 
			// ChooseLogoBtn
			// 
			this->ChooseLogoBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ChooseLogoBtn->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChooseLogoBtn->Location = System::Drawing::Point(347, 174);
			this->ChooseLogoBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChooseLogoBtn->Name = L"ChooseLogoBtn";
			this->ChooseLogoBtn->Size = System::Drawing::Size(223, 44);
			this->ChooseLogoBtn->TabIndex = 24;
			this->ChooseLogoBtn->Text = L"������� ����";
			this->ChooseLogoBtn->UseVisualStyleBackColor = false;
			this->ChooseLogoBtn->Click += gcnew System::EventHandler(this, &AddDataForm::ChooseLogoBtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(39, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 23);
			this->label4->TabIndex = 23;
			this->label4->Text = L"��������� �������:";
			// 
			// NewPostAddressTb
			// 
			this->NewPostAddressTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewPostAddressTb->Location = System::Drawing::Point(347, 130);
			this->NewPostAddressTb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NewPostAddressTb->Name = L"NewPostAddressTb";
			this->NewPostAddressTb->Size = System::Drawing::Size(703, 26);
			this->NewPostAddressTb->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(39, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 23);
			this->label3->TabIndex = 21;
			this->label3->Text = L"�������� �����:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(272, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(446, 27);
			this->label2->TabIndex = 20;
			this->label2->Text = L"���������� ����� ������ � ���� ������";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(39, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 23);
			this->label1->TabIndex = 18;
			this->label1->Text = L"����������� ����:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Jpg files(*.jpg)|*.jpg|Jpeg files(*.jpeg)|*.jpeg|Png files(*.png)|*.png";
			// 
			// MinMarkNum
			// 
			this->MinMarkNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinMarkNum->Location = System::Drawing::Point(347, 375);
			this->MinMarkNum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MinMarkNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->MinMarkNum->Name = L"MinMarkNum";
			this->MinMarkNum->ReadOnly = true;
			this->MinMarkNum->Size = System::Drawing::Size(99, 24);
			this->MinMarkNum->TabIndex = 36;
			// 
			// LastMinMarkNum
			// 
			this->LastMinMarkNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LastMinMarkNum->Location = System::Drawing::Point(347, 427);
			this->LastMinMarkNum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->LastMinMarkNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->LastMinMarkNum->Name = L"LastMinMarkNum";
			this->LastMinMarkNum->ReadOnly = true;
			this->LastMinMarkNum->Size = System::Drawing::Size(99, 24);
			this->LastMinMarkNum->TabIndex = 37;
			// 
			// CostNum
			// 
			this->CostNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CostNum->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->CostNum->Location = System::Drawing::Point(347, 505);
			this->CostNum->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->CostNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->CostNum->Name = L"CostNum";
			this->CostNum->Size = System::Drawing::Size(99, 24);
			this->CostNum->TabIndex = 38;
			this->CostNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddDataForm::CostNum_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(39, 319);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 23);
			this->label9->TabIndex = 39;
			this->label9->Text = L"����� ��������:";
			// 
			// EdFormTb
			// 
			this->EdFormTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EdFormTb->Location = System::Drawing::Point(347, 316);
			this->EdFormTb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EdFormTb->Name = L"EdFormTb";
			this->EdFormTb->Size = System::Drawing::Size(703, 26);
			this->EdFormTb->TabIndex = 40;
			this->EdFormTb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddDataForm::EdFormTb_KeyPress);
			// 
			// InstNameCmb
			// 
			this->InstNameCmb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InstNameCmb->FormattingEnabled = true;
			this->InstNameCmb->Location = System::Drawing::Point(347, 84);
			this->InstNameCmb->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->InstNameCmb->Name = L"InstNameCmb";
			this->InstNameCmb->Size = System::Drawing::Size(703, 26);
			this->InstNameCmb->TabIndex = 41;
			this->InstNameCmb->SelectedIndexChanged += gcnew System::EventHandler(this, &AddDataForm::InstNameCmb_SelectedIndexChanged);
			this->InstNameCmb->TextChanged += gcnew System::EventHandler(this, &AddDataForm::InstNameCmb_TextChanged);
			this->InstNameCmb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddDataForm::InstNameCmb_KeyPress);
			// 
			// AddDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1496, 608);
			this->Controls->Add(this->InstNameCmb);
			this->Controls->Add(this->EdFormTb);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->CostNum);
			this->Controls->Add(this->LastMinMarkNum);
			this->Controls->Add(this->MinMarkNum);
			this->Controls->Add(this->NewSaveDataBtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->NewSpNameTb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->LogoPb);
			this->Controls->Add(this->ChooseLogoBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NewPostAddressTb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"AddDataForm";
			this->Text = L"AddDataForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddDataForm::AddDataForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddDataForm::AddDataForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AddDataForm::AddDataForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoPb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinMarkNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastMinMarkNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CostNum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// ���������� ������� �������� ���� ���������� ������ (���������� ��������� ������ ������������ ����� �� ������������ �����)
	private: System::Void AddDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ Stname;
		if (instNames != nullptr)
		{
			InstNameCmb->Items->Clear();
			for (int i = 0; i < arrlen; i++)
			{
				InstNameCmb->Items->Add(instNames[i]);
			}
			InstNameCmb->Refresh();
		}
	}
		   // ���������� ������� �������� ���� ���������� ������
	private: System::Void AddDataForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Enabled = true;
		if (data_added) MessageBox::Show("������ ������� ��������� � ������!");
	}
		   // ������� ��������� ������ � ���� "���������" ����������� ������� ���-���� ����� ����
	private: System::Void CostNum_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsDigit(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar))
		{
			e->Handled = true;
		}
	}
		   // ������� ��������� ������ � ���� "����� ��������" ����������� ������� ���-���� ����� ����
	private: System::Void EdFormTb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsLetter(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar))
		{
			e->Handled = true;
		}
	}
		   // ������� ������� �� ������ ��� ������ �����������  
	private: System::Void ChooseLogoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			filename = openFileDialog1->FileName;
			LogoPb->BackgroundImage = nullptr;
			LogoPb->Image = Image::FromFile(filename);
		}
	}
		   // ���������� ������� ������ �������� �� ������� combobox
	private: System::Void InstNameCmb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (InstNameCmb->SelectedIndex != -1)
		{
			String^ name;
			NewPostAddressTb->Enabled = false;
			ChooseLogoBtn->Enabled = false;

			current = dataBase;
			name = InstNameCmb->SelectedItem->ToString();
			for (int i = 0; i < arrlen; i++)
			{
				if (name->CompareTo(current->data->instName) == 0)
				{
					NewPostAddressTb->Text = current->data->postAddress;
					openFileDialog1->FileName = current->data->logo;
					LogoPb->Image = Image::FromFile(openFileDialog1->FileName);
					LogoPb->Invalidate();
					break;
				}
				else
				{
					current = current->data->next;
				}
			}

		}
	}
		   // ������� ��������� ������ � ���� ��� �������� ����
	private: System::Void InstNameCmb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		NewPostAddressTb->Enabled = true;
		ChooseLogoBtn->Enabled = true;
		if (InstNameCmb->Items->Contains(InstNameCmb->Text)) InstNameCmb->SelectedItem = InstNameCmb->Text;
	}
		   // ���������� � ��� ���� �������� �������� (����������� ������ ����� � �������)
	private: System::Void InstNameCmb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsLetter(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar) && !e->KeyChar.IsWhiteSpace(e->KeyChar))
		{
			e->Handled = true;
		}
	}
		   // ���������� ������� ������� �� ������ ���������� ������
	private: System::Void NewSaveDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		marshal_context^ mrshcntx = gcnew marshal_context();
		// ���� ���� ������ ���� ������ ���������
		if (InstNameCmb->Text == "" || NewPostAddressTb->Text == "" || filename == "" || NewSpNameTb->Text == "" || EdFormTb->Text == "") MessageBox::Show("��� ���� ������ ���� ���������!");
		else if (InstNameCmb->SelectedIndex == -1)	// ���� ��� �� ������
		{
			new_element = gcnew List();
			new_specs = new map<int, speciality>;
			map<int, speciality> specs;
			speciality spec;
			new_element->data = gcnew List::node();

			new_element->data->instName = InstNameCmb->Text;
			new_element->data->postAddress = NewPostAddressTb->Text;
			new_element->data->logo = filename;

			spec.spec_name = mrshcntx->marshal_as<string>(NewSpNameTb->Text);
			spec.ed_form = mrshcntx->marshal_as<string>(EdFormTb->Text);
			spec.min_mark = MinMarkNum->Value.ToInt32(MinMarkNum->Value);
			spec.last_min_mark = LastMinMarkNum->Value.ToInt32(LastMinMarkNum->Value);
			spec.cost = CostNum->Value.ToInt64(CostNum->Value);

			specs.insert(make_pair(0, spec));
			*new_specs = specs;
			new_element->data->specList = new_specs;
			data_added = true;
			Owner->Enabled = false;
			Owner->Enabled = true;
			this->Close();
		}
		else   // ���� ���������� ������������� � ������������� ����
		{
			speciality spec;
			new_spec = new speciality;

			spec.spec_name = mrshcntx->marshal_as<string>(NewSpNameTb->Text);
			spec.ed_form = mrshcntx->marshal_as<string>(EdFormTb->Text);
			spec.min_mark = MinMarkNum->Value.ToInt32(MinMarkNum->Value);
			spec.last_min_mark = LastMinMarkNum->Value.ToInt32(LastMinMarkNum->Value);
			spec.cost = CostNum->Value.ToInt64(CostNum->Value);

			*new_spec = spec;
			is_new_inst = false;
			data_added = true;
			Owner->Enabled = true;
			Owner->Enabled = false;
			this->Close();
		}
	}
		   // ���������� ������� �������� �����
	private: System::Void AddDataForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!data_added && InstNameCmb->Text != "" && NewPostAddressTb->Text != "" && filename != "" && NewSpNameTb->Text != "" && EdFormTb->Text != "")
		{
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show("��������� ������ ����� ��� ��� �����!\n�� ������������� ������ ����� ��� ���������� ������?", "�������� ����� ������!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) return;
			else e->Cancel = true;
		}
		Owner->Enabled = true;
		Owner->Enabled = false;
	}
	};
}
