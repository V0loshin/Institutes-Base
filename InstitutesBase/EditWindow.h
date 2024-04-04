#pragma once
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "AddDataForm.h"
#include "DataEditForm.h"
#include "Inst.h";
#include "List.h";


namespace InstitutesBase {

	using std::pair;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для EditWindow
	/// </summary>
	public ref class EditWindow : public System::Windows::Forms::Form
	{
	public:
		EditWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		Inst^ dataBase = gcnew Inst();	// база данных
		List^ current = gcnew List();	// текущий ВУЗ
		bool data_changed = false;	// переменная определяющая изменены ли данные
		bool data_added = false;	// переменная определяющая добавлены ли данные
		int sel_row = 0;	// переменная для хранения индекса выбранной из таблицы строки
		AddDataForm^ addForm;	// переменная формы добавления данных
		DataEditForm^ editForm;		// переменная формы изменения данных
		map<int, speciality>* speclist;	// список специальностей

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EditWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ DataBaseTable;
	protected:








	private: System::Windows::Forms::Button^ btn_edit;
	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ DeleteBtn;













	private: System::Windows::Forms::DataGridViewTextBoxColumn^ InstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Post;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Speciality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EducationalType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MinMark;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastMinMark;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cost;










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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditWindow::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->DataBaseTable = (gcnew System::Windows::Forms::DataGridView());
			this->InstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Post = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Speciality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EducationalType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MinMark = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastMinMark = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cost = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->DeleteBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataBaseTable))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(1053, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 27);
			this->label3->TabIndex = 10;
			this->label3->Text = L"База данных";
			// 
			// DataBaseTable
			// 
			this->DataBaseTable->AllowUserToOrderColumns = true;
			this->DataBaseTable->BackgroundColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DataBaseTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DataBaseTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataBaseTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->InstName,
					this->Post, this->Speciality, this->EducationalType, this->MinMark, this->LastMinMark, this->Cost
			});
			this->DataBaseTable->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->DataBaseTable->Location = System::Drawing::Point(329, 68);
			this->DataBaseTable->Margin = System::Windows::Forms::Padding(15);
			this->DataBaseTable->MultiSelect = false;
			this->DataBaseTable->Name = L"DataBaseTable";
			this->DataBaseTable->ReadOnly = true;
			this->DataBaseTable->RowHeadersWidth = 51;
			this->DataBaseTable->RowTemplate->Height = 24;
			this->DataBaseTable->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->DataBaseTable->Size = System::Drawing::Size(1920, 750);
			this->DataBaseTable->TabIndex = 9;
			this->DataBaseTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EditWindow::DataBaseTable_CellClick);
			// 
			// InstName
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->InstName->DefaultCellStyle = dataGridViewCellStyle2;
			this->InstName->HeaderText = L"Наименование ВУЗа";
			this->InstName->MinimumWidth = 6;
			this->InstName->Name = L"InstName";
			this->InstName->ReadOnly = true;
			this->InstName->Width = 360;
			// 
			// Post
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->Post->DefaultCellStyle = dataGridViewCellStyle3;
			this->Post->HeaderText = L"Почтовый адрес";
			this->Post->MinimumWidth = 6;
			this->Post->Name = L"Post";
			this->Post->ReadOnly = true;
			this->Post->Width = 350;
			// 
			// Speciality
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->Speciality->DefaultCellStyle = dataGridViewCellStyle4;
			this->Speciality->HeaderText = L"Специальность";
			this->Speciality->MinimumWidth = 6;
			this->Speciality->Name = L"Speciality";
			this->Speciality->ReadOnly = true;
			this->Speciality->Width = 350;
			// 
			// EducationalType
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->EducationalType->DefaultCellStyle = dataGridViewCellStyle5;
			this->EducationalType->HeaderText = L"Форма обучения";
			this->EducationalType->MinimumWidth = 6;
			this->EducationalType->Name = L"EducationalType";
			this->EducationalType->ReadOnly = true;
			this->EducationalType->Width = 90;
			// 
			// MinMark
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MinMark->DefaultCellStyle = dataGridViewCellStyle6;
			this->MinMark->HeaderText = L"Проходной балл";
			this->MinMark->MinimumWidth = 6;
			this->MinMark->Name = L"MinMark";
			this->MinMark->ReadOnly = true;
			this->MinMark->Width = 75;
			// 
			// LastMinMark
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->LastMinMark->DefaultCellStyle = dataGridViewCellStyle7;
			this->LastMinMark->HeaderText = L"Конкурс прошлого года";
			this->LastMinMark->MinimumWidth = 6;
			this->LastMinMark->Name = L"LastMinMark";
			this->LastMinMark->ReadOnly = true;
			this->LastMinMark->Width = 75;
			// 
			// Cost
			// 
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Cost->DefaultCellStyle = dataGridViewCellStyle8;
			this->Cost->HeaderText = L"Стоимость при договорном обучении";
			this->Cost->MinimumWidth = 6;
			this->Cost->Name = L"Cost";
			this->Cost->ReadOnly = true;
			this->Cost->Width = 90;
			// 
			// btn_edit
			// 
			this->btn_edit->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btn_edit->Enabled = false;
			this->btn_edit->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_edit->Location = System::Drawing::Point(12, 68);
			this->btn_edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(285, 66);
			this->btn_edit->TabIndex = 11;
			this->btn_edit->Text = L"Редактировать строку";
			this->btn_edit->UseVisualStyleBackColor = false;
			this->btn_edit->Click += gcnew System::EventHandler(this, &EditWindow::btn_edit_Click);
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btn_add->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_add->Location = System::Drawing::Point(12, 151);
			this->btn_add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(285, 66);
			this->btn_add->TabIndex = 12;
			this->btn_add->Text = L"Добавить строку";
			this->btn_add->UseVisualStyleBackColor = false;
			this->btn_add->Click += gcnew System::EventHandler(this, &EditWindow::btn_add_Click);
			// 
			// DeleteBtn
			// 
			this->DeleteBtn->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->DeleteBtn->Enabled = false;
			this->DeleteBtn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteBtn->Location = System::Drawing::Point(12, 234);
			this->DeleteBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DeleteBtn->Name = L"DeleteBtn";
			this->DeleteBtn->Size = System::Drawing::Size(285, 66);
			this->DeleteBtn->TabIndex = 13;
			this->DeleteBtn->Text = L"Удалить строку";
			this->DeleteBtn->UseVisualStyleBackColor = false;
			this->DeleteBtn->Click += gcnew System::EventHandler(this, &EditWindow::DeleteBtn_Click);
			// 
			// EditWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1924, 831);
			this->Controls->Add(this->DeleteBtn);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_edit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DataBaseTable);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"EditWindow";
			this->Text = L"EditWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EditWindow::EditWindow_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &EditWindow::EditWindow_FormClosed);
			this->Load += gcnew System::EventHandler(this, &EditWindow::EditWindow_Load);
			this->EnabledChanged += gcnew System::EventHandler(this, &EditWindow::EditWindow_EnabledChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataBaseTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// метод вывода данных в таблицу
	public: void DrawData() {
		map<int, speciality> specs;
		int index = 0;
		int count = 0;

		if (dataBase->elemsCount != 0)
		{
			btn_edit->Enabled = true;
			DeleteBtn->Enabled = true;
			current = dataBase;

			for (int i = 0; i < dataBase->elemsCount; i++)
			{
				for (int j = 0; j < current->data->specList->size(); j++)
				{
					count++;
				}
				current = current->data->next;
			}
			current = dataBase;

			DataBaseTable->RowCount = count;

			for (int i = 0; i < dataBase->elemsCount; i++)
			{
				specs = *current->data->specList;
				for (auto it = specs.begin(); it != specs.end(); ++it)
				{
					DataBaseTable[0, index]->Value = current->data->instName;
					DataBaseTable[1, index]->Value = current->data->postAddress;
					DataBaseTable[2, index]->Value = marshal_as<String^>(it->second.spec_name);
					DataBaseTable[3, index]->Value = marshal_as<String^>(it->second.ed_form);
					DataBaseTable[4, index]->Value = it->second.min_mark;
					DataBaseTable[5, index]->Value = it->second.last_min_mark;
					DataBaseTable[6, index]->Value = it->second.cost;
					index++;
				}
				current = current->data->next;
			}
			current = dataBase;
		}
		else
		{
			DataBaseTable[0, 0]->Value = "";
			DataBaseTable[1, 0]->Value = "";
			DataBaseTable[2, 0]->Value = "";
			DataBaseTable[3, 0]->Value = "";
			DataBaseTable[4, 0]->Value = "";
			DataBaseTable[5, 0]->Value = "";
			DataBaseTable[6, 0]->Value = "";
			btn_edit->Enabled = false;
			DeleteBtn->Enabled = false;
			MessageBox::Show("В базе данных не найдено ни одной записи!");
		}
	}
		  // обработчик события нажатия на кнопку редактирования записи
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sel_row == -1) MessageBox::Show("Выберите одну строку или ячейку для редактирования соответствующей строки!");
		else
		{
			this->Enabled = false;
			editForm = gcnew DataEditForm();
			data_changed = true;
			editForm->set_current_spec(current, DataBaseTable[2, sel_row]->Value->ToString());
			editForm->Show();
			editForm->Owner = this;
			
		}
	}
		   // обработчик события нажатия на кнопку добавления записи
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Enabled = false;
		addForm = gcnew AddDataForm();
		data_added = true;
		if (dataBase->elemsCount != 0) addForm->load_names(dataBase->SearchInstNames(), dataBase);
		addForm->Show();
		addForm->Owner = this;
		
	}
		   // обработчик события закрытия окна редактирования данных
	private: System::Void EditWindow_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Enabled = false;
		Owner->Enabled = true;
		Owner->Show();
	}
		   // обработчик события загрузки данного окна 
	private: System::Void EditWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		dataBase->LoadData();
		this->DrawData();
		btn_edit->Enabled = false;
		DeleteBtn->Enabled = false;
		DataBaseTable->ClearSelection();
	}
		   // обработчик события нажатия на клетку таблицы
	private: System::Void DataBaseTable_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		btn_edit->Enabled = true;
		DeleteBtn->Enabled = true;
		sel_row = e->RowIndex;
		String^ name = DataBaseTable[0, sel_row]->Value->ToString();
		current = dataBase;

		for (int i = 0; i < dataBase->elemsCount; i++)
		{
			if (current->data->instName->CompareTo(name) != 0) current = current->data->next;
			else break;
		}
	}
		   // событие нажатия на кнопку удаления выбранной строки
	private: System::Void DeleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show("Вы действительно хотите безвозвратно удалить эти данные?", "Вы уверены?", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			if (current->data->specList->size() == 1) // если у ВУЗа одна специальность удаляется вся информация о ВУЗе
			{
				dataBase->DeleteElement(current);	// удаление выбранного элемента
				dataBase->elemsCount--;
			}
			else   // иначе удаляется только выбранная специальность
			{
				map<int, speciality> specs;
				marshal_context^ mrshcntx = gcnew marshal_context();
				speclist = new map<int, speciality>;
				specs = *current->data->specList;
				for (auto it = specs.begin(); it != specs.end(); ++it)
				{
					if (DataBaseTable[2, sel_row]->Value->ToString()->CompareTo(mrshcntx->marshal_as<String^>(it->second.spec_name)) == 0)
					{
						it = specs.erase(it);
						break;
					}
				}
				*speclist = specs;
				current->data->specList = speclist;
			}
			this->DrawData();
			DataBaseTable->ClearSelection();
			btn_edit->Enabled = false;
			DeleteBtn->Enabled = false;
		}
	}
		   // событие перед закрытием окна
	private: System::Void EditWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		dataBase->UploadData(); // выгрузка всех данных в файл
	}
	private: System::Void EditWindow_EnabledChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((addForm != nullptr) && (!addForm->data_added))
		{
			data_added = false;
		}
		else if ((editForm != nullptr) && (!editForm->data_changed))
		{
			data_changed = false;
		}
		if (data_changed)	// если были изменены данные 
		{
			data_changed = false;

			pair<pair<string, string>, speciality> update;
			update = editForm->set_update_spec();
			current->data->instName = marshal_as<String^>(update.first.first);
			current->data->postAddress = marshal_as<String^>(update.first.second);
			speclist = new map<int, speciality>;
			*speclist = dataBase->UpdateData(false, update.second, current);

			current->data->specList = speclist;

			this->DrawData();
			DataBaseTable->ClearSelection();
			btn_edit->Enabled = false;
			DeleteBtn->Enabled = false;
		}
		else if (data_added)	//если были добавлены данные
		{
			data_added = false;

			if (addForm->is_new_inst)
			{
				List^ new_elem = gcnew List();
				new_elem = addForm->add_new_inst();
				dataBase->AddElement(new_elem->data);
				dataBase->elemsCount++;
				this->DrawData();
				DataBaseTable->ClearSelection();
				btn_edit->Enabled = false;
				DeleteBtn->Enabled = false;
			}
			else
			{
				pair<string, speciality> newspec;
				newspec = addForm->add_new_spec();
				String^ cur_inst = marshal_as<String^>(newspec.first);
				current = dataBase;

				while (current->data->instName->CompareTo(cur_inst) != 0) current = current->data->next;

				speclist = new map<int, speciality>;
				*speclist = dataBase->UpdateData(true, newspec.second, current);

				current->data->specList = speclist;

				this->DrawData();
				btn_edit->Enabled = false;
				DeleteBtn->Enabled = false;
				DataBaseTable->ClearSelection();
			}
		}
	}
};
}

/*
		   // обработчик события изменения состояния видимости данного окна
	private: System::Void EditWindow_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((addForm != nullptr) && (!addForm->data_added))
		{
			data_added = false;
		}
		else if ((editForm != nullptr) && (!editForm->data_changed))
		{
			data_changed = false;
		}
		if (data_changed)	// если были изменены данные
		{

			/*if (!data_added)
data_changed = false;
//data_added = false;

pair<pair<string, string>, speciality> update;
update = editForm->set_update_spec();
current->data->instName = marshal_as<String^>(update.first.first);
current->data->postAddress = marshal_as<String^>(update.first.second);
speclist = new map<int, speciality>;
*speclist = dataBase->UpdateData(update.second, current);

current->data->specList = speclist;

this->DrawData();
//DataBaseTable_CellClick(DataBaseTable, gcnew DataGridViewCellEventArgs(0, sel_row));
/*}
		}
		else if (data_added)	//если были добавлены данные
		{
		data_added = false;/*
		data_changed = false;

		if (addForm->is_new_inst)
		{
			List^ new_elem = gcnew List();
			new_elem = addForm->add_new_inst();
			dataBase->AddElement(new_elem->data);
			dataBase->elemsCount++;
			this->DrawData();
			//DataBaseTable_CellClick(DataBaseTable, gcnew DataGridViewCellEventArgs(0, sel_row));
		}
		else
		{
			pair<string, speciality> newspec;
			newspec = addForm->add_new_spec();
			String^ cur_inst = marshal_as<String^>(newspec.first);
			current = dataBase;

			while (current->data->instName->CompareTo(cur_inst) != 0) current = current->data->next;

			speclist = new map<int, speciality>;
			*speclist = dataBase->UpdateData(newspec.second, current);

			current->data->specList = speclist;

			this->DrawData();
			// DataBaseTable_CellClick(DataBaseTable, gcnew DataGridViewCellEventArgs(0, sel_row));
		}
		}
		DataBaseTable_CellClick(DataBaseTable, gcnew DataGridViewCellEventArgs(0, sel_row));
	}
*/