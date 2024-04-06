#pragma once

namespace InstitutesBase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
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
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NewInstNameTb;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NewPostAddressTb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ ChooseLogoBtn;
	private: System::Windows::Forms::PictureBox^ LogoPb;


	private: System::Windows::Forms::TextBox^ NewMinMarkTb;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ NewSpNameTb;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ NewLastMinMarkTb;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ NewCostTb;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ NewSaveDataBtn;
	private: System::Windows::Forms::Button^ NewCancel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NewInstNameTb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NewPostAddressTb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->ChooseLogoBtn = (gcnew System::Windows::Forms::Button());
			this->LogoPb = (gcnew System::Windows::Forms::PictureBox());
			this->NewMinMarkTb = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NewSpNameTb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->NewLastMinMarkTb = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->NewCostTb = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->NewSaveDataBtn = (gcnew System::Windows::Forms::Button());
			this->NewCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoPb))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 63);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Нименование ВУЗа:";
			// 
			// NewInstNameTb
			// 
			this->NewInstNameTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewInstNameTb->Location = System::Drawing::Point(251, 63);
			this->NewInstNameTb->Margin = System::Windows::Forms::Padding(2);
			this->NewInstNameTb->Name = L"NewInstNameTb";
			this->NewInstNameTb->Size = System::Drawing::Size(528, 26);
			this->NewInstNameTb->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(195, 17);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(446, 27);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Добавление новой строки в базу данных";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// NewPostAddressTb
			// 
			this->NewPostAddressTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewPostAddressTb->Location = System::Drawing::Point(251, 101);
			this->NewPostAddressTb->Margin = System::Windows::Forms::Padding(2);
			this->NewPostAddressTb->Name = L"NewPostAddressTb";
			this->NewPostAddressTb->Size = System::Drawing::Size(528, 26);
			this->NewPostAddressTb->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(20, 101);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Почтовый адрес:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(20, 141);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Загрузить логотип:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// ChooseLogoBtn
			// 
			this->ChooseLogoBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ChooseLogoBtn->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChooseLogoBtn->Location = System::Drawing::Point(251, 136);
			this->ChooseLogoBtn->Margin = System::Windows::Forms::Padding(2);
			this->ChooseLogoBtn->Name = L"ChooseLogoBtn";
			this->ChooseLogoBtn->Size = System::Drawing::Size(167, 36);
			this->ChooseLogoBtn->TabIndex = 6;
			this->ChooseLogoBtn->Text = L"Выбрать файл";
			this->ChooseLogoBtn->UseVisualStyleBackColor = false;
			// 
			// LogoPb
			// 
			this->LogoPb->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoPb.BackgroundImage")));
			this->LogoPb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->LogoPb->Location = System::Drawing::Point(809, 63);
			this->LogoPb->Margin = System::Windows::Forms::Padding(2);
			this->LogoPb->Name = L"LogoPb";
			this->LogoPb->Size = System::Drawing::Size(215, 193);
			this->LogoPb->TabIndex = 7;
			this->LogoPb->TabStop = false;
			// 
			// NewMinMarkTb
			// 
			this->NewMinMarkTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewMinMarkTb->Location = System::Drawing::Point(251, 246);
			this->NewMinMarkTb->Margin = System::Windows::Forms::Padding(2);
			this->NewMinMarkTb->Name = L"NewMinMarkTb";
			this->NewMinMarkTb->Size = System::Drawing::Size(74, 26);
			this->NewMinMarkTb->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(20, 246);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(158, 23);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Проходной балл:";
			// 
			// NewSpNameTb
			// 
			this->NewSpNameTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewSpNameTb->Location = System::Drawing::Point(251, 204);
			this->NewSpNameTb->Margin = System::Windows::Forms::Padding(2);
			this->NewSpNameTb->Name = L"NewSpNameTb";
			this->NewSpNameTb->Size = System::Drawing::Size(528, 26);
			this->NewSpNameTb->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(20, 183);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 46);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Наименование\r\nспециальности:";
			// 
			// NewLastMinMarkTb
			// 
			this->NewLastMinMarkTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewLastMinMarkTb->Location = System::Drawing::Point(251, 288);
			this->NewLastMinMarkTb->Margin = System::Windows::Forms::Padding(2);
			this->NewLastMinMarkTb->Name = L"NewLastMinMarkTb";
			this->NewLastMinMarkTb->Size = System::Drawing::Size(74, 26);
			this->NewLastMinMarkTb->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(20, 288);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(220, 23);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Конкурс прошлого года:";
			// 
			// NewCostTb
			// 
			this->NewCostTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewCostTb->Location = System::Drawing::Point(251, 351);
			this->NewCostTb->Margin = System::Windows::Forms::Padding(2);
			this->NewCostTb->Name = L"NewCostTb";
			this->NewCostTb->Size = System::Drawing::Size(74, 26);
			this->NewCostTb->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(20, 331);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(162, 69);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Стоимость \r\n(при договорном \r\nобучении)";
			// 
			// NewSaveDataBtn
			// 
			this->NewSaveDataBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->NewSaveDataBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewSaveDataBtn->Location = System::Drawing::Point(638, 370);
			this->NewSaveDataBtn->Margin = System::Windows::Forms::Padding(2);
			this->NewSaveDataBtn->Name = L"NewSaveDataBtn";
			this->NewSaveDataBtn->Size = System::Drawing::Size(191, 54);
			this->NewSaveDataBtn->TabIndex = 16;
			this->NewSaveDataBtn->Text = L"Сохранить данные";
			this->NewSaveDataBtn->UseVisualStyleBackColor = false;
			// 
			// NewCancel
			// 
			this->NewCancel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->NewCancel->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NewCancel->Location = System::Drawing::Point(833, 370);
			this->NewCancel->Margin = System::Windows::Forms::Padding(2);
			this->NewCancel->Name = L"NewCancel";
			this->NewCancel->Size = System::Drawing::Size(191, 54);
			this->NewCancel->TabIndex = 17;
			this->NewCancel->Text = L"Отмена";
			this->NewCancel->UseVisualStyleBackColor = false;
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1040, 435);
			this->Controls->Add(this->NewCancel);
			this->Controls->Add(this->NewSaveDataBtn);
			this->Controls->Add(this->NewCostTb);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->NewLastMinMarkTb);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->NewMinMarkTb);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->NewSpNameTb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->LogoPb);
			this->Controls->Add(this->ChooseLogoBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NewPostAddressTb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NewInstNameTb);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AddForm";
			this->Text = L"AddForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddForm::AddForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddForm::AddForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogoPb))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Enabled = true;
	}
private: System::Void AddForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

}
};
}
