#include <msclr/marshal.h>
#include "List.h"
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using std::ifstream;
using std::string;
using namespace msclr::interop;

void List::AddElement(node^ instData) {	// ����� ���������� ������ �������� � ����� ������

	if (this->data != nullptr)	// ���� ������ ������� ����������
	{
		List^ newElement = gcnew List();
		newElement->data = instData;
		List^ current = gcnew List();
		current = this;

		while (current->data->next != nullptr) current = current->data->next;
		current->data->next = newElement;
	}
	else   // ���� ������ ������� �� ����������
	{
		this->data = instData;
	}
}

void List::DeleteElement(List^ elem) {	// ����� �������� �������� �� ������
	List^ current = gcnew List();
	List^ previous = gcnew List();
	current = this;
	if (current->data->next != nullptr)	// ���� ������ ������� �� �� ������ ��������
	{

		if (current->data->instName->CompareTo(elem->data->instName) == 0)	// ���� ����� ������� ������ �������
		{
			current = current->data->next;
			this->data = gcnew node();
			this->data = current->data;
		}
		else   // ���� ������� �� ������
		{
			while (current->data->next != nullptr)
			{
				previous = current;
				current = current->data->next;
				if (current->data->instName->CompareTo(elem->data->instName) == 0)
				{
					if (current->data->next != nullptr)	// ���� ��������� ������� �� ��������� � ������
					{
						previous->data->next = current->data->next;
						current->data->next = nullptr;
					}
					else   // ���� �� ���������
					{
						previous->data->next = nullptr;
					}
				}
			}
		}

	}
	else   // ���� � ������ ����� ���� �������
	{
		this->data = nullptr;
	}
}