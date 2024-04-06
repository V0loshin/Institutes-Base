#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "Inst.h"
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <nlohmann/json.hpp>
#include <codecvt>
#include <iomanip>
#include <initializer_list>
#include <utility>  // make_pair()

using std::ifstream;
using std::ofstream;
using std::string;
using std::set;
using std::map;
using std::pair;
using std::make_pair;
using namespace System;
using namespace msclr::interop;

std::wstring ConvertStrToWstr(string str) {
	std::wstring_convert < std::codecvt_utf8_utf16 < wchar_t> > converter;
	return converter.from_bytes(str);
}

void Inst::LoadData() {		// метод для загрузки данных из файла с расширением json
	marshal_context^ mrshcntx = gcnew marshal_context();	// элемент для конвиртирования типов
	node^ data;	// структура для записи текущих данных
	speciality new_spec;	// структура для записи данных о текущей специальности
	nlohmann::json j;	// объект для загрузки данных из файла с расширением json
	bool formatted_data = false;	// булевая переменная для определения типа получаемых из файла данных (если wstring - true; если string - false)
	bool is_empty_file = false;		// булевая переменная для определения является ли файл пустым

	ifstream fin("Data.json");	// открываем поток для чтения
	if (fin.is_open())
	{

		try		// проверяем наличие данных в файле и корректность данных
		{
			j = nlohmann::json::parse(fin);
		}
		catch (...)
		{
			is_empty_file = true;
		}
		if (!is_empty_file)		// если файл не пустой
		{
			for (int i = 0; i < j["Institutes"].size(); i++)
			{
				data = gcnew node();
				try    // проверяем тип в котором хрянятся данные: wstring или string
				{
					data->instName = marshal_as<String^>(ConvertStrToWstr(j["Institutes"][i]["name"].get<string>()));
				}
				catch (...)
				{
					formatted_data = true;
				}
				if (!formatted_data)	// Если string
				{
					data->logo = marshal_as<String^>(ConvertStrToWstr(j["Institutes"][i]["logo"].get<string>()));
					data->postAddress = marshal_as<String^>(ConvertStrToWstr(j["Institutes"][i]["postaddress"].get<string>()));
					data->specList = new map<int, speciality>;
					for (int k = 0; k < j["Institutes"][i]["specialities"].size(); k++)
					{
						new_spec.spec_name = marshal_as<string>(marshal_as<String^>(ConvertStrToWstr(j["Institutes"][i]["specialities"][k][0].get<string>())));
						new_spec.ed_form = marshal_as<string>(marshal_as<String^>(ConvertStrToWstr(j["Institutes"][i]["specialities"][k][1].get<string>())));
						new_spec.min_mark = j["Institutes"][i]["specialities"][k][2].get<int>();
						new_spec.last_min_mark = j["Institutes"][i]["specialities"][k][3].get<int>();
						new_spec.cost = j["Institutes"][i]["specialities"][k][4].get<int>();

						data->specList->insert(make_pair(k, new_spec));
					}

					data->next = nullptr;

					if (this->data == nullptr)
					{
						this->data = data;
					}
					else this->AddElement(data);
					elemsCount++;
				}
				else   // Если wstring
				{
					data->instName = marshal_as<String^>(j["Institutes"][i]["name"].get<std::wstring>().c_str());
					data->logo = marshal_as<String^>(j["Institutes"][i]["logo"].get<std::wstring>().c_str());
					data->postAddress = marshal_as<String^>(j["Institutes"][i]["postaddress"].get<std::wstring>().c_str());
					data->specList = new map<int, speciality>;
					for (int k = 0; k < j["Institutes"][i]["specialities"].size(); k++)
					{
						new_spec.spec_name = marshal_as<string>(marshal_as<String^>(j["Institutes"][i]["specialities"][k][0].get<std::wstring>().c_str()));
						new_spec.ed_form = marshal_as<string>(marshal_as<String^>(j["Institutes"][i]["specialities"][k][1].get<std::wstring>().c_str()));
						new_spec.min_mark = j["Institutes"][i]["specialities"][k][2].get<int>();
						new_spec.last_min_mark = j["Institutes"][i]["specialities"][k][3].get<int>();
						new_spec.cost = j["Institutes"][i]["specialities"][k][4].get<int>();

						data->specList->insert(make_pair(k, new_spec));
					}

					data->next = nullptr;

					if (this->data == nullptr)
					{
						this->data = data;
					}
					else this->AddElement(data);
					elemsCount++;
				}
			}
		}
	}
	fin.close();	// закрываем поток для чтения
}

set<string> Inst::SearchInstNames() {	// метод для поиска названий ВУЗов в списке
	marshal_context^ mrshcntx = gcnew marshal_context();
	set<string> names;	// множество которое мы возвращаем
	set<string>* namesptr = new set<string>;
	string name;
	List^ current = gcnew List();
	if (this != nullptr)	// Проверяем налиичие элементов в списке
	{
		current = this;
		while (current->data->next != nullptr)	// пробегаем по списку и записываем названия ВУЗов
		{
			name = mrshcntx->marshal_as<string>(current->data->instName);
			namesptr->insert(name);
			current = current->data->next;
		}
		name = mrshcntx->marshal_as<string>(current->data->instName);
		namesptr->insert(name);
	}
	names = *namesptr;
	return names;	// возвращаем множество названий
}

map<int, speciality> Inst::SpNameSearch(String^ Inst, String^ name) {	// метод поиска специальностей по названию
	List^ current = gcnew List();
	map<int, speciality> specs;
	map<int, speciality> res_map;	// возвращаемый список специальностей
	int count = 0;
	current = this;
	while (current->data->instName->CompareTo(Inst) != 0)	// с помощью цикла находим нужный ВУЗ 
	{
		current = current->data->next;
	}

	specs = *current->data->specList;	// получаем список специальностей этого ВУЗа

	for (int i = 0; i < specs.size(); i++)	// пробегаем по списку и в случае совпадения названия специальности и искомого добавляем в итоговый список
	{
		if (name->CompareTo(marshal_as<String^>((&specs[i])->spec_name)) == 0)
		{
			res_map.insert(make_pair(count, specs[i]));
			count++;
		}
	}
	return res_map;
}

map<int, speciality> Inst::RangeSearch(String^ Inst, int min, int max) {	// метод поиска специальности по диапазону проходных баллов
	List^ current = gcnew List();
	map<int, speciality> specs;
	map<int, speciality> res_map;	// возвращаемый список специальностей
	int count = 0;
	current = this;
	while (current->data->instName->CompareTo(Inst) != 0)
	{
		current = current->data->next;
	}

	specs = *current->data->specList;	// получаем список специальностей этого ВУЗа

	for (int i = 0; i < specs.size(); i++)	// пробегаем по списку и в случае совпадения названия специальности и искомого добавляем в итоговый список
	{
		if (specs[i].min_mark >= min && specs[i].min_mark <= max)
		{
			res_map.insert(make_pair(count, specs[i]));
			count++;
		}
	}
	return res_map;
}

map<int, speciality> Inst::UpdateData(bool new_data, speciality upd, List^ current) {	// метод обновления данных выбранной специальности
	int i = 0;
	map<int, speciality> specs;
	speciality spec;

	specs = *current->data->specList;	// получаем список специальностей ВУЗа

	if (new_data)	// если специальность новая то добавляем её в список специальностей
	{
		while (specs.find(i) != specs.end()) i++;

		spec.spec_name = upd.spec_name;
		spec.ed_form = upd.ed_form;
		spec.min_mark = upd.min_mark;
		spec.last_min_mark = upd.last_min_mark;
		spec.cost = upd.cost;

		specs.insert(make_pair(i, spec));
	}
	else   // если редактируем существующую то находим её по ключу в словаре и меняем её данные
	{
		for (auto it = specs.begin(); it != specs.end(); it++)
		{
			if (it->second.spec_name.compare(upd.spec_name) == 0)
			{
				i = it->first;
				break;
			}
		}
		specs[i].spec_name = upd.spec_name;
		specs[i].ed_form = upd.ed_form;
		specs[i].min_mark = upd.min_mark;
		specs[i].last_min_mark = upd.last_min_mark;
		specs[i].cost = upd.cost;
	}

	return specs;
}

void Inst::UploadData() {	// метод выгрузки данных в файл
	setlocale(LC_ALL, "Rus");
	nlohmann::json jout;	// объект для загрузки данных из файла с расширением json
	ofstream json_out("Data.json", std::ios::out);	// открываем файл для записи

	if (this->elemsCount != 0)	// выполняем выгрузку только если в базе есть данные
	{
		marshal_context^ mrshcntx = gcnew marshal_context();
		msclr::interop::marshal_context context;
		List^ current = gcnew List();
		map<int, speciality> specs;
		current = this;
		int j = 0;

		for (int i = 0; i < this->elemsCount; i++)
		{
			std::wstring name = context.marshal_as<std::wstring>(current->data->instName);
			std::wstring logo = context.marshal_as<std::wstring>(current->data->logo);
			std::wstring post = context.marshal_as<std::wstring>(current->data->postAddress);
			specs = *current->data->specList;
			auto it = specs.begin();
			std::wstring sp_name = context.marshal_as<std::wstring>(marshal_as<String^>(specs[0].spec_name));
			std::wstring sp_ed_form = context.marshal_as<std::wstring>(marshal_as<String^>(specs[0].ed_form));

			jout["Institutes"].push_back({ {"name", name}, {"logo", logo}, {"postaddress", post}, {"specialities", {{sp_name, sp_ed_form, specs[0].min_mark, specs[0].last_min_mark, specs[0].cost}}} });
			if (specs.size() > 1)	// записываем в json объект остальные специальности ВУЗа если их больше 1
			{
				j = 0;
				while (j != specs.size() - 1)
				{
					j++;
					++it;
					sp_name = context.marshal_as<std::wstring>(marshal_as<String^>(it->second.spec_name));
					sp_ed_form = context.marshal_as<std::wstring>(marshal_as<String^>(it->second.ed_form));
					jout["Institutes"][i]["specialities"].push_back({ sp_name, sp_ed_form, it->second.min_mark, it->second.last_min_mark, it->second.cost });
				}
			}
			current = current->data->next;	// переходим к следующему ВУЗу
		}
		json_out << std::setw(4) << jout;	// выводим все данные в файл
	}
	json_out.close();	// закрываем файл для записи
}
