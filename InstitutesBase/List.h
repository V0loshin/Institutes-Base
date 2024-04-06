#pragma once
#include <string>
#include <map>

using namespace System;
using std::string;
using std::map;

struct speciality {		//  Структура для хранения данных об одной специальности
	string spec_name;	// название спецаильности
	string ed_form;		// форма обучения
	int min_mark;	// проходной балл
	int last_min_mark;	// конкурс прошлого года
	int cost;	// стоимость обучения на контрактной основе
};

public ref class List
{

public:
	ref struct node {	// структура для хранения данных об одном ВУЗе (в односвязном списке)
		String^ instName;	// название ВУЗа
		String^ logo;	// путь до логотипа
		String^ postAddress;	// почтовый адрес
		map<int, speciality>* specList;	// список специальностей ВУЗа
		List^ next;

		node()	// конструктор по умолчанию для структуры node 
		{
			this->instName = "";
			this->logo = "";
			this->postAddress = "";
			this->specList = nullptr;
			this->next = nullptr;
		}
	};
	node^ data;	// поле класса List для хранения данных

	List() {}	// конструктор класса
	~List() {}	// деструктор класса

	void AddElement(node^ instData);	// метод добавления нового ВУЗа в конец списка
	void DeleteElement(List^ elem);		// метод удаления ВУЗа из списка
};

