#pragma once
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "List.h"
#include <utility>


namespace InstitutesBase {

	using std::pair;
	using std::make_pair;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DataEditForm
	/// </summary>
	public ref class DataEditForm : public System::Windows::Forms::Form
	{
	public:
		DataEditForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		List^ current = gcnew List();	// поле формы для хранения данных о записи с которой мы работаем
		String^ spec_name;	// поле формы для хранения названия специальности
		int spec_num;	// поле формы для хранения индекса специальности в списке специалностей
		bool data_changed = false;	// поле формы определяющее изменены ли данные
		bool fromSaveBtn = false;	// поле формы определяющее что форма закрыта после нажатия на кнопку сохранения изменений

	private: System::Windows::Forms::Label^ EdFormat;
	private: System::Windows::Forms::NumericUpDown^ MinMarkNum;
	private: System::Windows::Forms::NumericUpDown^ LastMinMarkNum;
	private: System::Windows::Forms::NumericUpDown^ CostNum;
	private: System::Windows::Forms::TextBox^ EducFormTb;

	public:

		void set_current_spec(List^ cur, String^ name) {	// метод для передачи данных о выбранной специальности из родительской формы
			this->current = cur;
			this->spec_name = name;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DataEditForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^ SaveDataBtn;
	protected:



	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ SpNameTb;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ InstNameTb;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ PostAddressTb;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DataEditForm::typeid));
			this->SaveDataBtn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SpNameTb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InstNameTb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PostAddressTb = (gcnew System::Windows::Forms::TextBox());
			this->EdFormat = (gcnew System::Windows::Forms::Label());
			this->EducFormTb = (gcnew System::Windows::Forms::TextBox());
			this->MinMarkNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->LastMinMarkNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->CostNum = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinMarkNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastMinMarkNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CostNum))->BeginInit();
			this->SuspendLayout();
			// 
			// SaveDataBtn
			// 
			this->SaveDataBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->SaveDataBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveDataBtn->Location = System::Drawing::Point(752, 416);
			this->SaveDataBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SaveDataBtn->Name = L"SaveDataBtn";
			this->SaveDataBtn->Size = System::Drawing::Size(255, 66);
			this->SaveDataBtn->TabIndex = 34;
			this->SaveDataBtn->Text = L"Сохранить данные";
			this->SaveDataBtn->UseVisualStyleBackColor = false;
			this->SaveDataBtn->Click += gcnew System::EventHandler(this, &DataEditForm::SaveDataBtn_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(23, 398);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(195, 84);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Стоимость \r\n(при договорном \r\nобучении)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(23, 345);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(262, 28);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Конкурс прошлого года:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(23, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 28);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Проходной балл:";
			// 
			// SpNameTb
			// 
			this->SpNameTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SpNameTb->Location = System::Drawing::Point(323, 181);
			this->SpNameTb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SpNameTb->Name = L"SpNameTb";
			this->SpNameTb->Size = System::Drawing::Size(683, 30);
			this->SpNameTb->TabIndex = 27;
			this->SpNameTb->TextChanged += gcnew System::EventHandler(this, &DataEditForm::SpNameTb_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(23, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 56);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Наименование\r\nспециальности:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(295, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 35);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Изменение данных строки";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 28);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Нименование ВУЗа:";
			// 
			// InstNameTb
			// 
			this->InstNameTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InstNameTb->Location = System::Drawing::Point(323, 71);
			this->InstNameTb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InstNameTb->Name = L"InstNameTb";
			this->InstNameTb->Size = System::Drawing::Size(683, 30);
			this->InstNameTb->TabIndex = 19;
			this->InstNameTb->TextChanged += gcnew System::EventHandler(this, &DataEditForm::InstNameTb_TextChanged);
			this->InstNameTb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DataEditForm::InstNameTb_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 28);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Почтовый адрес:";
			// 
			// PostAddressTb
			// 
			this->PostAddressTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PostAddressTb->Location = System::Drawing::Point(323, 119);
			this->PostAddressTb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PostAddressTb->Name = L"PostAddressTb";
			this->PostAddressTb->Size = System::Drawing::Size(683, 30);
			this->PostAddressTb->TabIndex = 22;
			this->PostAddressTb->TextChanged += gcnew System::EventHandler(this, &DataEditForm::PostAddressTb_TextChanged);
			// 
			// EdFormat
			// 
			this->EdFormat->AutoSize = true;
			this->EdFormat->Font = (gcnew System::Drawing::Font(L"Constantia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EdFormat->Location = System::Drawing::Point(23, 239);
			this->EdFormat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->EdFormat->Name = L"EdFormat";
			this->EdFormat->Size = System::Drawing::Size(198, 29);
			this->EdFormat->TabIndex = 36;
			this->EdFormat->Text = L"Форма обучения:";
			// 
			// EducFormTb
			// 
			this->EducFormTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EducFormTb->Location = System::Drawing::Point(323, 238);
			this->EducFormTb->Margin = System::Windows::Forms::Padding(4);
			this->EducFormTb->Name = L"EducFormTb";
			this->EducFormTb->Size = System::Drawing::Size(369, 30);
			this->EducFormTb->TabIndex = 37;
			this->EducFormTb->TextChanged += gcnew System::EventHandler(this, &DataEditForm::EducFormTb_TextChanged);
			this->EducFormTb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DataEditForm::EducFormTb_KeyPress);
			// 
			// MinMarkNum
			// 
			this->MinMarkNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MinMarkNum->Location = System::Drawing::Point(323, 293);
			this->MinMarkNum->Margin = System::Windows::Forms::Padding(4);
			this->MinMarkNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->MinMarkNum->Name = L"MinMarkNum";
			this->MinMarkNum->ReadOnly = true;
			this->MinMarkNum->Size = System::Drawing::Size(99, 29);
			this->MinMarkNum->TabIndex = 38;
			this->MinMarkNum->ValueChanged += gcnew System::EventHandler(this, &DataEditForm::MinMarkNum_ValueChanged);
			// 
			// LastMinMarkNum
			// 
			this->LastMinMarkNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LastMinMarkNum->Location = System::Drawing::Point(323, 345);
			this->LastMinMarkNum->Margin = System::Windows::Forms::Padding(4);
			this->LastMinMarkNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->LastMinMarkNum->Name = L"LastMinMarkNum";
			this->LastMinMarkNum->ReadOnly = true;
			this->LastMinMarkNum->Size = System::Drawing::Size(99, 29);
			this->LastMinMarkNum->TabIndex = 39;
			this->LastMinMarkNum->ValueChanged += gcnew System::EventHandler(this, &DataEditForm::LastMinMarkNum_ValueChanged);
			// 
			// CostNum
			// 
			this->CostNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CostNum->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->CostNum->Location = System::Drawing::Point(323, 420);
			this->CostNum->Margin = System::Windows::Forms::Padding(4);
			this->CostNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000000, 0, 0, 0 });
			this->CostNum->Name = L"CostNum";
			this->CostNum->Size = System::Drawing::Size(99, 29);
			this->CostNum->TabIndex = 40;
			this->CostNum->ValueChanged += gcnew System::EventHandler(this, &DataEditForm::CostNum_ValueChanged);
			this->CostNum->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DataEditForm::CostNum_KeyPress);
			// 
			// DataEditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1029, 510);
			this->Controls->Add(this->CostNum);
			this->Controls->Add(this->LastMinMarkNum);
			this->Controls->Add(this->MinMarkNum);
			this->Controls->Add(this->EducFormTb);
			this->Controls->Add(this->EdFormat);
			this->Controls->Add(this->SaveDataBtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->SpNameTb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->PostAddressTb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->InstNameTb);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DataEditForm";
			this->Text = L"DataEditForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DataEditForm::DataEditForm_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &DataEditForm::DataEditForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &DataEditForm::DataEditForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MinMarkNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LastMinMarkNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CostNum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: pair<pair<string, string>, speciality> set_update_spec() {	// функция которая возвращает в родительскую форму обновленные данные
		marshal_context^ mrshcntx = gcnew marshal_context();
		map<int, speciality> specs;
		int index = spec_num;
		specs = *current->data->specList;
		pair<string, string> instdata;
		instdata.first = mrshcntx->marshal_as<string>(current->data->instName);
		instdata.second = mrshcntx->marshal_as<string>(current->data->postAddress);

		pair<pair<string, string>, speciality> update;	// пара передаваемых значений: название ВУЗа, почтовый адрес и данные измененной специальности 
		update.first = instdata;
		update.second = specs[index];
		return update;
	}
	// обработчик события закрытой формы:
	private: System::Void DataEditForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {	
		Owner->Enabled = true;
		if (data_changed) MessageBox::Show("Данные успешно сохранены!");
	}
	// обработчик события загрузки формы:
	private: System::Void DataEditForm_Load(System::Object^ sender, System::EventArgs^ e) {
		InstNameTb->Text = current->data->instName;
		PostAddressTb->Text = current->data->postAddress;

		speciality sel_spec;
		map<int, speciality> specs;

		specs = *current->data->specList;

		for (int i = 0; i < current->data->specList->size(); i++)
		{
			if (spec_name->CompareTo(marshal_as<String^>(specs[i].spec_name)) == 0)
			{
				sel_spec = specs[i];
				spec_num = i;
				break;
			}
		}

		SpNameTb->Text = marshal_as<String^>(sel_spec.spec_name);
		EducFormTb->Text = marshal_as<String^>(sel_spec.ed_form);
		MinMarkNum->Value = sel_spec.min_mark;
		LastMinMarkNum->Value = sel_spec.last_min_mark;
		CostNum->Value = sel_spec.cost;

		SaveDataBtn->Enabled = false;
	}
	// сообщение о том что данные не сохранены при закрытии формы
	private: System::Void DataEditForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if ((!fromSaveBtn && SaveDataBtn->Enabled && data_changed) || (SaveDataBtn->Enabled && !data_changed))
		{
			System::Windows::Forms::DialogResult result;
			result = MessageBox::Show("Сохраните изменения перед тем как выйти!\nВы действительно хотите выйти без сохранения изменений?", "Возможна утеря данных!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) return;
			else e->Cancel = true;
		}
		Owner->Enabled = true;
		Owner->Enabled = false;
	}
	// обработчик события нажатия на кнопку сохранения
	private: System::Void SaveDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (SpNameTb->Text == "" || EducFormTb->Text == "")
		{
			MessageBox::Show("Поля \"Наименование ВУЗа\", \"Почтовый адрес\", \"Наименование специальности\" и \"Форма обучения\" не могут быть пустыми!");
		}
		else
		{
			String^ instname = InstNameTb->Text;
			String^ post = PostAddressTb->Text;

			String^ name = SpNameTb->Text;
			String^ edform = EducFormTb->Text;
			int minmark = MinMarkNum->Value.ToInt32(MinMarkNum->Value);
			int lastminmark = LastMinMarkNum->Value.ToInt32(LastMinMarkNum->Value);
			int cost = CostNum->Value.ToInt64(CostNum->Value);

			marshal_context^ mrshcntx = gcnew marshal_context();

			map<int, speciality> specs;
			int i = spec_num;
			specs = *current->data->specList;

			// далее проверяется были ли изменены данные в каком-то из полей
			if (instname->CompareTo(current->data->instName) != 0)
			{
				current->data->instName = instname;
				data_changed = true;
			}
			if (post->CompareTo(current->data->postAddress) != 0)
			{
				current->data->postAddress = post;
				data_changed = true;
			}
			if (name->CompareTo(marshal_as<String^>(specs[i].spec_name)) != 0)
			{
				specs[i].spec_name = mrshcntx->marshal_as<string>(name);
				data_changed = true;
			}
			if (edform->CompareTo(marshal_as<String^>(specs[i].ed_form)) != 0)
			{
				specs[i].ed_form = mrshcntx->marshal_as<string>(edform);
				data_changed = true;
			}
			if (minmark != specs[i].min_mark)
			{
				specs[i].min_mark = minmark;
				data_changed = true;
			}
			if (lastminmark != specs[i].last_min_mark)
			{
				specs[i].last_min_mark = lastminmark;
				data_changed = true;
			}
			if (cost != specs[i].cost)
			{
				specs[i].cost = cost;
				data_changed = true;
			}

			if (data_changed)
			{
				fromSaveBtn = true;
				current->data->specList = &specs;
				Owner->Enabled = true;
			}
			else
			{
				SaveDataBtn->Enabled = false;
			}
			Owner->Enabled = false;
			this->Close();
		}
	}
	// событие изменения текста в поле "Форма обучения"
	private: System::Void EducFormTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}	   
	// событие изменения текста в поле "Название специальности"
	private: System::Void SpNameTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}
	// событие изменения текста в поле "Форма обучения" запрещающее вводить что-либо кроме букв
	private: System::Void EducFormTb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsLetter(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar))
		{
			e->Handled = true;
		}
	}
	// событие изменения текста в поле "Стоимость" запрещающее вводить что-либо кроме цифр
	private: System::Void CostNum_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsDigit(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar))
		{
			e->Handled = true;
		}
	}
	// события изменения текста в поле "Название ВУЗа", "Почтовый адрес", "Проходной балл", "Конкурс прошлого года", "Стоимость"
	private: System::Void MinMarkNum_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}
	private: System::Void LastMinMarkNum_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}
	private: System::Void CostNum_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}
	private: System::Void InstNameTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}
	private: System::Void PostAddressTb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		SaveDataBtn->Enabled = true;
	}
	private: System::Void InstNameTb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsLetter(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar))
		{
			e->Handled = true;
		}
	}
};
}
