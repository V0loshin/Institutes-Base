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

public ref class Inst :public List	// ����� ���� ������ ����� ����������� ����� ������ List
{

public:
	int elemsCount;		// ���� ��� �������� ���������� ������� � ���� ������

	Inst() {	// ����������� ������
		elemsCount = 0;
	}

	void LoadData();	// ����� ��� �������� ������ �� ����� � ����������� json
	void UploadData();	// ����� ��� �������� ������ � ���� � ����������� json
	set<string> SearchInstNames();	// ����� ��� ������ �������� ����� � ������
	map<int, speciality> SpNameSearch(String^ Inst, String^ name);	// ����� ��� ������ �������������� �� ��������
	map<int, speciality> RangeSearch(String^ Inst, int min, int max);	// ����� ��� ������ �������������� �� ��������� ��������� ������
	map<int, speciality> UpdateData(bool new_data, speciality upd, List^ current);	// ����� ��� ��������� ������ ��������� �������������
};
