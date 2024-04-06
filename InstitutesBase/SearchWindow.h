#pragma once
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <list>;
#include <set>
#include "Inst.h";
#include "List.h";

namespace InstitutesBase {

	using std::array;
	using std::set;
	using std::string;
	using namespace msclr::interop;
	using namespace cli;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearchWindow
	/// </summary>
	public ref class SearchWindow : public System::Windows::Forms::Form
	{
	public:
		SearchWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SearchWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ FirstLetter;
	private: System::Windows::Forms::Button^ LetterSearch;
	private: System::Windows::Forms::Button^ NoLetterFilter;
	private: System::Windows::Forms::ListBox^ InstList;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ SpecTable;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ SpNameBox;

	private: System::Windows::Forms::Button^ NameSearchBtn;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ RangeSearchBtn;
	private: System::Windows::Forms::Button^ ClearFiltersBtn;

	private: Inst^ dataBase = gcnew Inst();
		   //private: List^ dataBase = gcnew List();


	private: System::Windows::Forms::PictureBox^ Pb_logo;





	private: System::Windows::Forms::NumericUpDown^ minimum;
	private: System::Windows::Forms::NumericUpDown^ maximum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Speciality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EducationalType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MinMark;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastMinMark;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cost;

	private: System::Windows::Forms::Keys keys;









	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchWindow::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FirstLetter = (gcnew System::Windows::Forms::ComboBox());
			this->LetterSearch = (gcnew System::Windows::Forms::Button());
			this->NoLetterFilter = (gcnew System::Windows::Forms::Button());
			this->InstList = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SpecTable = (gcnew System::Windows::Forms::DataGridView());
			this->Speciality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EducationalType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MinMark = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastMinMark = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SpNameBox = (gcnew System::Windows::Forms::TextBox());
			this->NameSearchBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->RangeSearchBtn = (gcnew System::Windows::Forms::Button());
			this->ClearFiltersBtn = (gcnew System::Windows::Forms::Button());
			this->Pb_logo = (gcnew System::Windows::Forms::PictureBox());
			this->minimum = (gcnew System::Windows::Forms::NumericUpDown());
			this->maximum = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpecTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maximum))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 56);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Поиск по первой букве:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// FirstLetter
			// 
			this->FirstLetter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FirstLetter->FormattingEnabled = true;
			this->FirstLetter->Items->AddRange(gcnew cli::array< System::Object^  >(33) {
				L"А", L"Б", L"В", L"Г", L"Д", L"Е", L"Ё", L"Ж",
					L"З", L"И", L"Й", L"К", L"Л", L"М", L"Н", L"О", L"П", L"Р", L"С", L"Т", L"У", L"Ф", L"Ч", L"Ц", L"Ч", L"Ш", L"Щ", L"Ъ", L"Ы",
					L"Ь", L"Э", L"Ю", L"Я"
			});
			this->FirstLetter->Location = System::Drawing::Point(276, 64);
			this->FirstLetter->Margin = System::Windows::Forms::Padding(2);
			this->FirstLetter->Name = L"FirstLetter";
			this->FirstLetter->Size = System::Drawing::Size(54, 21);
			this->FirstLetter->TabIndex = 1;
			// 
			// LetterSearch
			// 
			this->LetterSearch->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->LetterSearch->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LetterSearch->Location = System::Drawing::Point(28, 98);
			this->LetterSearch->Margin = System::Windows::Forms::Padding(2);
			this->LetterSearch->Name = L"LetterSearch";
			this->LetterSearch->Size = System::Drawing::Size(231, 49);
			this->LetterSearch->TabIndex = 2;
			this->LetterSearch->Text = L"Найти";
			this->LetterSearch->UseVisualStyleBackColor = false;
			this->LetterSearch->Click += gcnew System::EventHandler(this, &SearchWindow::LetterSearch_Click);
			// 
			// NoLetterFilter
			// 
			this->NoLetterFilter->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->NoLetterFilter->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NoLetterFilter->Location = System::Drawing::Point(28, 159);
			this->NoLetterFilter->Margin = System::Windows::Forms::Padding(2);
			this->NoLetterFilter->Name = L"NoLetterFilter";
			this->NoLetterFilter->Size = System::Drawing::Size(231, 50);
			this->NoLetterFilter->TabIndex = 3;
			this->NoLetterFilter->Text = L"Сбросить фильтр";
			this->NoLetterFilter->UseVisualStyleBackColor = false;
			this->NoLetterFilter->Click += gcnew System::EventHandler(this, &SearchWindow::NoLetterFilter_Click);
			// 
			// InstList
			// 
			this->InstList->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InstList->FormattingEnabled = true;
			this->InstList->ItemHeight = 19;
			this->InstList->Location = System::Drawing::Point(28, 230);
			this->InstList->Margin = System::Windows::Forms::Padding(2);
			this->InstList->Name = L"InstList";
			this->InstList->Size = System::Drawing::Size(360, 403);
			this->InstList->TabIndex = 4;
			this->InstList->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchWindow::InstList_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(116, 17);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 27);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Список ВУЗов";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->InstList);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->FirstLetter);
			this->groupBox1->Controls->Add(this->NoLetterFilter);
			this->groupBox1->Controls->Add(this->LetterSearch);
			this->groupBox1->Location = System::Drawing::Point(9, 10);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(408, 667);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// SpecTable
			// 
			this->SpecTable->AllowUserToOrderColumns = true;
			this->SpecTable->BackgroundColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->SpecTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->SpecTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->SpecTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Speciality,
					this->EducationalType, this->MinMark, this->LastMinMark, this->Cost
			});
			this->SpecTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->SpecTable->Location = System::Drawing::Point(800, 68);
			this->SpecTable->Margin = System::Windows::Forms::Padding(2);
			this->SpecTable->Name = L"SpecTable";
			this->SpecTable->RowHeadersWidth = 51;
			this->SpecTable->RowTemplate->Height = 24;
			this->SpecTable->Size = System::Drawing::Size(801, 574);
			this->SpecTable->TabIndex = 7;
			// 
			// Speciality
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Speciality->DefaultCellStyle = dataGridViewCellStyle2;
			this->Speciality->HeaderText = L"Специальность";
			this->Speciality->MinimumWidth = 6;
			this->Speciality->Name = L"Speciality";
			this->Speciality->Width = 415;
			// 
			// EducationalType
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->EducationalType->DefaultCellStyle = dataGridViewCellStyle3;
			this->EducationalType->HeaderText = L"Форма обучения";
			this->EducationalType->MinimumWidth = 6;
			this->EducationalType->Name = L"EducationalType";
			this->EducationalType->Width = 90;
			// 
			// MinMark
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MinMark->DefaultCellStyle = dataGridViewCellStyle4;
			this->MinMark->HeaderText = L"Проходной балл";
			this->MinMark->MinimumWidth = 6;
			this->MinMark->Name = L"MinMark";
			this->MinMark->Width = 77;
			// 
			// LastMinMark
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->LastMinMark->DefaultCellStyle = dataGridViewCellStyle5;
			this->LastMinMark->HeaderText = L"Конкурс прошлого года";
			this->LastMinMark->MinimumWidth = 6;
			this->LastMinMark->Name = L"LastMinMark";
			this->LastMinMark->Width = 77;
			// 
			// Cost
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Cost->DefaultCellStyle = dataGridViewCellStyle6;
			this->Cost->HeaderText = L"Стоимость при договорном обучении";
			this->Cost->MinimumWidth = 6;
			this->Cost->Name = L"Cost";
			this->Cost->Width = 90;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1013, 27);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(397, 27);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Специальности и проходные баллы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(524, 232);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(189, 54);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Критерии поиска\r\nспециальностей";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(426, 318);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(130, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"По названию:";
			// 
			// SpNameBox
			// 
			this->SpNameBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SpNameBox->Location = System::Drawing::Point(555, 318);
			this->SpNameBox->Margin = System::Windows::Forms::Padding(2);
			this->SpNameBox->Name = L"SpNameBox";
			this->SpNameBox->Size = System::Drawing::Size(220, 23);
			this->SpNameBox->TabIndex = 11;
			// 
			// NameSearchBtn
			// 
			this->NameSearchBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->NameSearchBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameSearchBtn->Location = System::Drawing::Point(555, 360);
			this->NameSearchBtn->Margin = System::Windows::Forms::Padding(2);
			this->NameSearchBtn->Name = L"NameSearchBtn";
			this->NameSearchBtn->Size = System::Drawing::Size(219, 50);
			this->NameSearchBtn->TabIndex = 12;
			this->NameSearchBtn->Text = L"Найти по названию";
			this->NameSearchBtn->UseVisualStyleBackColor = false;
			this->NameSearchBtn->Click += gcnew System::EventHandler(this, &SearchWindow::NameSearchBtn_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(499, 427);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(227, 46);
			this->label6->TabIndex = 13;
			this->label6->Text = L"По диапазону проходных\r\nбаллов";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(510, 488);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 19);
			this->label7->TabIndex = 14;
			this->label7->Text = L"от";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(608, 488);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(27, 19);
			this->label8->TabIndex = 15;
			this->label8->Text = L"до";
			// 
			// RangeSearchBtn
			// 
			this->RangeSearchBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->RangeSearchBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RangeSearchBtn->Location = System::Drawing::Point(466, 527);
			this->RangeSearchBtn->Margin = System::Windows::Forms::Padding(2);
			this->RangeSearchBtn->Name = L"RangeSearchBtn";
			this->RangeSearchBtn->Size = System::Drawing::Size(280, 57);
			this->RangeSearchBtn->TabIndex = 18;
			this->RangeSearchBtn->Text = L"Найти по диапазону баллов";
			this->RangeSearchBtn->UseVisualStyleBackColor = false;
			this->RangeSearchBtn->Click += gcnew System::EventHandler(this, &SearchWindow::RangeSearchBtn_Click);
			// 
			// ClearFiltersBtn
			// 
			this->ClearFiltersBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClearFiltersBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearFiltersBtn->Location = System::Drawing::Point(466, 595);
			this->ClearFiltersBtn->Margin = System::Windows::Forms::Padding(2);
			this->ClearFiltersBtn->Name = L"ClearFiltersBtn";
			this->ClearFiltersBtn->Size = System::Drawing::Size(280, 52);
			this->ClearFiltersBtn->TabIndex = 19;
			this->ClearFiltersBtn->Text = L"Сбросить фильтры";
			this->ClearFiltersBtn->UseVisualStyleBackColor = false;
			this->ClearFiltersBtn->Click += gcnew System::EventHandler(this, &SearchWindow::ClearFiltersBtn_Click);
			// 
			// Pb_logo
			// 
			this->Pb_logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_logo.BackgroundImage")));
			this->Pb_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Pb_logo->Location = System::Drawing::Point(466, 27);
			this->Pb_logo->Margin = System::Windows::Forms::Padding(2);
			this->Pb_logo->Name = L"Pb_logo";
			this->Pb_logo->Size = System::Drawing::Size(297, 192);
			this->Pb_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Pb_logo->TabIndex = 20;
			this->Pb_logo->TabStop = false;
			// 
			// minimum
			// 
			this->minimum->Location = System::Drawing::Point(541, 490);
			this->minimum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->minimum->Name = L"minimum";
			this->minimum->ReadOnly = true;
			this->minimum->Size = System::Drawing::Size(45, 20);
			this->minimum->TabIndex = 10;
			// 
			// maximum
			// 
			this->maximum->Location = System::Drawing::Point(640, 490);
			this->maximum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->maximum->Name = L"maximum";
			this->maximum->ReadOnly = true;
			this->maximum->Size = System::Drawing::Size(48, 20);
			this->maximum->TabIndex = 10;
			this->maximum->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			// 
			// SearchWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1624, 676);
			this->Controls->Add(this->maximum);
			this->Controls->Add(this->minimum);
			this->Controls->Add(this->Pb_logo);
			this->Controls->Add(this->ClearFiltersBtn);
			this->Controls->Add(this->RangeSearchBtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->NameSearchBtn);
			this->Controls->Add(this->SpNameBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SpecTable);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"SearchWindow";
			this->Text = L"SearchWindow";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SearchWindow::SearchWindow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SearchWindow::SearchWindow_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpecTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maximum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// событие загрузки окна поиска
	private: System::Void SearchWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		set<string> namesList;
		dataBase->LoadData();
		String^ Stname;
		if (dataBase->elemsCount != 0) // если элементов в базе нет список ВУЗов пуст
		{
			namesList = dataBase->SearchInstNames();
		}
		
		InstList->Items->Clear();
		if (namesList.empty()) // если данных нет - форма не откроется
		{
			MessageBox::Show("В базе данных не найдено записей!");
			this->Close();
		}
		else { // иначе загружается список названий ВУЗов
			for (string name : namesList)
			{
				Stname = marshal_as<String^>(name);
				InstList->Items->Add(Stname);
			}
		}

		InstList->Refresh();
	}
		   // обработчик события выбора элемента из списка названий ВУЗов
	private: System::Void InstList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		List^ current = gcnew List();
		String^ selItem;
		map<int, speciality> specs;

		if (InstList->SelectedItem != nullptr) selItem = InstList->SelectedItem->ToString();
		else return;

		Bitmap^ image;
		OpenFileDialog^ open_dialog = gcnew OpenFileDialog();

		current = dataBase;
		while (current->data->instName->CompareTo(selItem) != 0)
		{
			current = current->data->next;
		}

		Pb_logo->Image = nullptr;
		open_dialog->FileName = current->data->logo;
		image = gcnew Bitmap(open_dialog->FileName);
		Pb_logo->Image = image;
		Pb_logo->BackgroundImage = nullptr;
		Pb_logo->Invalidate();

		specs = *current->data->specList;

		SpecTable->RowCount = specs.size();

		for (int i = 0; i < current->data->specList->size(); i++)
		{
			SpecTable[0, i]->Value = marshal_as<String^>((&specs[i])->spec_name);
			SpecTable[1, i]->Value = marshal_as<String^>((&specs[i])->ed_form);
			SpecTable[2, i]->Value = (&specs[i])->min_mark;
			SpecTable[3, i]->Value = (&specs[i])->last_min_mark;
			SpecTable[4, i]->Value = (&specs[i])->cost;

		}
		SpecTable->Invalidate();
	}
		   // обработчик события закрытия окна поиска данных
	private: System::Void SearchWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
	}
		   // событие нажатия на кнопку поиска ВУЗов по первой букве
	private: System::Void LetterSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		// если буква не выбрана выйдет сообщение
		if (FirstLetter->SelectedItem == nullptr) MessageBox::Show("Выберите первую букву для поиска");
		else
		{
			OpenFileDialog^ open_dialog = gcnew OpenFileDialog();
			Pb_logo->Image = nullptr;
			open_dialog->FileName = "images/noimage.jpg";
			Pb_logo->BackgroundImage = Image::FromFile(open_dialog->FileName);
			SpecTable->Rows->Clear();
			set<string> namesList;
			String^ STname;
			namesList = dataBase->SearchInstNames();
			String^ select_ch;
			select_ch = FirstLetter->SelectedItem->ToString()->ToLower();
			InstList->Items->Clear();

			if (dataBase->elemsCount != 0)
			{
				int j = 0;
				for (string name : namesList)
				{
					if (select_ch->CompareOrdinal(select_ch, 0, marshal_as<String^>(name)->ToLower(), 0, 1) == 0)
					{
						InstList->Items->Add(marshal_as<String^>(name));
					}
				}
				if (InstList->Items->Count == 0) MessageBox::Show("Записи на заданную букву не найдены!");
			}
			InstList->Refresh();
		}
	}
		   // событие сброса фильтра поиска ВУЗов по букве
	private: System::Void NoLetterFilter_Click(System::Object^ sender, System::EventArgs^ e) {
		InstList->Items->Clear();
		set<string> namesList;
		namesList = dataBase->SearchInstNames();
		String^ Stname;

		if (namesList.empty()) InstList->Items->Add("В базе данных записи не найдены!");
		else {
			for (string name : namesList)
			{
				Stname = marshal_as<String^>(name);
				InstList->Items->Add(Stname);
			}
		}
		InstList->Refresh();
		FirstLetter->SelectedIndex = -1;
	}
		   // событие нажатия на кнопку поиска специальностей по названию
	private: System::Void NameSearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (SpNameBox->Text == "") MessageBox::Show("Введите строку для поиска!");
		else if (SpNameBox->Text != "" && InstList->SelectedIndex == -1) MessageBox::Show("Выберите ВУЗ для поиска специальностей по данному параметру!");
		else
		{
			String^ selItem;
			selItem = InstList->SelectedItem->ToString();
			String^ sel_str = SpNameBox->Text;
			map<int, speciality> specs;
			int index = 0;

			specs = dataBase->SpNameSearch(selItem, sel_str);

			if (specs.size() != 0)
			{
				SpecTable->RowCount = specs.size();

				for (int i = 0; i < specs.size(); i++)
				{
					SpecTable[0, index]->Value = marshal_as<String^>((&specs[i])->spec_name);
					SpecTable[1, index]->Value = marshal_as<String^>((&specs[i])->ed_form);
					SpecTable[2, index]->Value = (&specs[i])->min_mark;
					SpecTable[3, index]->Value = (&specs[i])->last_min_mark;
					SpecTable[4, index]->Value = (&specs[i])->cost;
					index++;
				}
				SpecTable->Invalidate();
			}
			else MessageBox::Show("Специальости с таким названием не найдено!");

		}
	}
		   // событие нажатия на кнопку поиска специальностей по диапазону баллов
	private: System::Void RangeSearchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (minimum->Value > maximum->Value) MessageBox::Show("Некорректные данные!\nНижняя граница не может иметь значение больше верхней!");
		else if (InstList->SelectedIndex == -1) MessageBox::Show("Выберите ВУЗ для поиска специальностей по данному параметру!");
		else
		{
			String^ selItem;
			marshal_context^ mrshcntx = gcnew marshal_context();
			selItem = InstList->SelectedItem->ToString();
			map<int, speciality> specs;
			int index = 0;

			specs = dataBase->RangeSearch(selItem, minimum->Value.ToInt32(minimum->Value), maximum->Value.ToInt32(maximum->Value));

			if (specs.size() != 0)
			{
				SpecTable->RowCount = specs.size();

				for (int i = 0; i < specs.size(); i++)
				{
					SpecTable[0, index]->Value = marshal_as<String^>((&specs[i])->spec_name);
					SpecTable[1, index]->Value = marshal_as<String^>((&specs[i])->ed_form);
					SpecTable[2, index]->Value = (&specs[i])->min_mark;
					SpecTable[3, index]->Value = (&specs[i])->last_min_mark;
					SpecTable[4, index]->Value = (&specs[i])->cost;
					index++;
				}
				SpecTable->Invalidate();
			}
			else MessageBox::Show("Специальости с заданными баллами не найдено!");

		}
	}
		   // событие нажатия на кнопку сброса фильтров для поиска специальностей
	private: System::Void ClearFiltersBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (InstList->SelectedIndex != -1)
		{
			SpNameBox->Clear();
			minimum->Value = 0;
			maximum->Value = 500;
			List^ current = gcnew List();
			String^ selItem;
			map<int, speciality> specs;

			selItem = InstList->SelectedItem->ToString();

			current = dataBase;
			while (current->data->instName->CompareTo(selItem) != 0)
			{
				current = current->data->next;
			}

			specs = *current->data->specList;

			SpecTable->RowCount = specs.size();

			for (int i = 0; i < current->data->specList->size(); i++)
			{
				SpecTable[0, i]->Value = marshal_as<String^>((&specs[i])->spec_name);
				SpecTable[1, i]->Value = marshal_as<String^>((&specs[i])->ed_form);
				SpecTable[2, i]->Value = (&specs[i])->min_mark;
				SpecTable[3, i]->Value = (&specs[i])->last_min_mark;
				SpecTable[4, i]->Value = (&specs[i])->cost;
			}
			SpecTable->Invalidate();

		}
	}
	};
}
