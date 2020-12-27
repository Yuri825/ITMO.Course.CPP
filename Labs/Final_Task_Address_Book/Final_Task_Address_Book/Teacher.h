#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	string profession; // должность
	string workExpirience; // стаж работы
	string education; // образование

public:
	string getProfession();
	string getWorkExpirience();
	string getEducation();



	void setProfession(string profession);
	void setWorkExpirience(string workExpirience);
	void setEducation(string education);

	void setInformationTeacher(); //  арточка заполнени€ данных на учител€
	void getInformationTeacher(); // ѕолучение данных об учителе
};

