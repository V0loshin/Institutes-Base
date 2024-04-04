#pragma once
#include <string>
#include <map>

using namespace System;
using std::string;
using std::map;

struct speciality {		//  ��������� ��� �������� ������ �� ����� �������������
	string spec_name;	// �������� �������������
	string ed_form;		// ����� ��������
	int min_mark;	// ��������� ����
	int last_min_mark;	// ������� �������� ����
	int cost;	// ��������� �������� �� ����������� ������
};

public ref class List
{

public:
	ref struct node {	// ��������� ��� �������� ������ �� ����� ���� (� ����������� ������)
		String^ instName;	// �������� ����
		String^ logo;	// ���� �� ��������
		String^ postAddress;	// �������� �����
		map<int, speciality>* specList;	// ������ �������������� ����
		List^ next;

		node()	// ����������� �� ��������� ��� ��������� node 
		{
			this->instName = "";
			this->logo = "";
			this->postAddress = "";
			this->specList = nullptr;
			this->next = nullptr;
		}
	};
	node^ data;	// ���� ������ List ��� �������� ������

	List() {}	// ����������� ������
	~List() {}	// ���������� ������

	void AddElement(node^ instData);	// ����� ���������� ������ ���� � ����� ������
	void DeleteElement(List^ elem);		// ����� �������� ���� �� ������
};

