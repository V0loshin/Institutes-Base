#include <msclr/marshal.h>
#include "List.h"
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using std::ifstream;
using std::string;
using namespace msclr::interop;

void List::AddElement(node^ instData) {	// Метод добавления нового элемента в конец списка

	if (this->data != nullptr)	// Если первый элемент существует
	{
		List^ newElement = gcnew List();
		newElement->data = instData;
		List^ current = gcnew List();
		current = this;

		while (current->data->next != nullptr) current = current->data->next;
		current->data->next = newElement;
	}
	else   // Если первый элемент НЕ существует
	{
		this->data = instData;
	}
}

void List::DeleteElement(List^ elem) {	// Метод удаления элемента из списка
	List^ current = gcnew List();
	List^ previous = gcnew List();
	current = this;
	if (current->data->next != nullptr)	// Если список состоит не из одного элемента
	{

		if (current->data->instName->CompareTo(elem->data->instName) == 0)	// Если нужно удалить первый элемент
		{
			current = current->data->next;
			this->data = gcnew node();
			this->data = current->data;
		}
		else   // Если удаляем не первый
		{
			while (current->data->next != nullptr)
			{
				previous = current;
				current = current->data->next;
				if (current->data->instName->CompareTo(elem->data->instName) == 0)
				{
					if (current->data->next != nullptr)	// Если найденный элемент не последний в списке
					{
						previous->data->next = current->data->next;
						current->data->next = nullptr;
					}
					else   // Если он последний
					{
						previous->data->next = nullptr;
					}
				}
			}
		}

	}
	else   // Если в списке всего один элемент
	{
		this->data = nullptr;
	}
}