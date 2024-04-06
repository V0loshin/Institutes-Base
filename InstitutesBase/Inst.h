#pragma once
#include <map>
#include <string>
#include <set>
#include <forward_list>
#include "List.h"
#include <codecvt>

using namespace System;
using std::map;
using std::set;
using std::forward_list;
using std::string;

public ref class Inst :public List	// класс базы данных ВУЗов наследующий класс списка List
{

public:
	int elemsCount;		// поле для хранения количества записей в базе данных

	Inst() {	// конструктор класса
		elemsCount = 0;
	}

	void LoadData();	// метод для загрузки данных из файла с расширением json
	void UploadData();	// метод для выгрузки данных в файл с расширением json
	set<string> SearchInstNames();	// метод для поиска названий ВУЗов в списке
	map<int, speciality> SpNameSearch(String^ Inst, String^ name);	// метод для поиска специальностей по названию
	map<int, speciality> RangeSearch(String^ Inst, int min, int max);	// метод для поиска специальностей по диапазону проходных баллов
	map<int, speciality> UpdateData(bool new_data, speciality upd, List^ current);	// метод для изменения данных выбранной специальности
};
