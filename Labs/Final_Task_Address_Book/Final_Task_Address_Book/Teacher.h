#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	string profession; // ���������
	string workExpirience; // ���� ������
	string education; // �����������

public:
	string getProfession();
	string getWorkExpirience();
	string getEducation();



	void setProfession(string profession);
	void setWorkExpirience(string workExpirience);
	void setEducation(string education);

	void setInformationTeacher(); // �������� ���������� ������ �� �������
	void getInformationTeacher(); // ��������� ������ �� �������
};

