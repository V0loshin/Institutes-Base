#pragma once

namespace InstitutesBase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для InfoForm
	/// </summary>
	public ref class InfoForm : public System::Windows::Forms::Form
	{
	public:
		InfoForm(void)
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
		~InfoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ TelegramLink;
	private: System::Windows::Forms::LinkLabel^ ELPostLink;
	private: System::Windows::Forms::LinkLabel^ VkLink;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TelegramLink = (gcnew System::Windows::Forms::LinkLabel());
			this->ELPostLink = (gcnew System::Windows::Forms::LinkLabel());
			this->VkLink = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(229, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"О ПРОГРАММЕ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(38, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(539, 209);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(243, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ОБ АВТОРЕ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(38, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(171, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Автор: Волошин И. Д.\r\nГруппа: КЭ-203\r\n";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(123, 409);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(360, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"По любым вопросам можно связаться со мной:";
			// 
			// TelegramLink
			// 
			this->TelegramLink->AutoSize = true;
			this->TelegramLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TelegramLink->Location = System::Drawing::Point(258, 449);
			this->TelegramLink->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->TelegramLink->Name = L"TelegramLink";
			this->TelegramLink->Size = System::Drawing::Size(171, 17);
			this->TelegramLink->TabIndex = 11;
			this->TelegramLink->TabStop = true;
			this->TelegramLink->Text = L"https://t.me/Ya_Ilya_name";
			// 
			// ELPostLink
			// 
			this->ELPostLink->AutoSize = true;
			this->ELPostLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ELPostLink->Location = System::Drawing::Point(259, 467);
			this->ELPostLink->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ELPostLink->Name = L"ELPostLink";
			this->ELPostLink->Size = System::Drawing::Size(161, 17);
			this->ELPostLink->TabIndex = 10;
			this->ELPostLink->TabStop = true;
			this->ELPostLink->Text = L"ilya.voloshin.16@mail.ru";
			// 
			// VkLink
			// 
			this->VkLink->AutoSize = true;
			this->VkLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->VkLink->LinkColor = System::Drawing::Color::Blue;
			this->VkLink->Location = System::Drawing::Point(258, 431);
			this->VkLink->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->VkLink->Name = L"VkLink";
			this->VkLink->Size = System::Drawing::Size(148, 17);
			this->VkLink->TabIndex = 9;
			this->VkLink->TabStop = true;
			this->VkLink->Text = L"https://vk.com/il_pump";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(163, 431);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"ВКонтакте: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(163, 449);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 18);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Teleram:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(163, 467);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 18);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Почта:";
			// 
			// InfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(625, 519);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TelegramLink);
			this->Controls->Add(this->ELPostLink);
			this->Controls->Add(this->VkLink);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"InfoForm";
			this->Text = L"InfoForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &InfoForm::InfoForm_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// событие закрытия формы 
	private: System::Void InfoForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Enabled = true;
	}
};
}
