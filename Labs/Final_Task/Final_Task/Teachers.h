#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Teachers : public Person
{
private:
	string profession; // ���������
	string ageWork; // ���� ������

public:
	string getProfession();
	string getAgeWork();

	void setProfession(string profession);
	void setAgeWork(string ageWork);

	void setInformationTeacher(); // �������� ���������� ������ �� �������
	void getInformationTeacher(); // ��������� ������ �� �������
};

