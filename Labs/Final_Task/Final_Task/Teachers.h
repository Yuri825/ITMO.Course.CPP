#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Teachers : public Person
{
private:
	string profession; // должность
	string ageWork; // стаж работы

public:
	string getProfession();
	string getAgeWork();

	void setProfession(string profession);
	void setAgeWork(string ageWork);

	void setInformationTeacher(); //  арточка заполнени€ данных на учител€
	void getInformationTeacher(); // ѕолучение данных на учител€
};

