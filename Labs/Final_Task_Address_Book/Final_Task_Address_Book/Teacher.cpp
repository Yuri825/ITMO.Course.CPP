#include "Teacher.h"

string Teacher::getProfession()
{
	return profession;
}

string Teacher::getWorkExpirience()
{
	return workExpirience;
}

string Teacher::getEducation()
{
	return education;
}

void Teacher::setProfession(string profession)
{
	this->profession = profession;
}

void Teacher::setWorkExpirience(string workExpirience)
{
	this->workExpirience = workExpirience;
}

void Teacher::setEducation(string education)
{
	this->education = education;
}

void Teacher::setInformationTeacher()
{
	cout << "Карточка заполнения данных на учителя" << endl;

	cout << "Введите имя: " << endl;
	string name;
	//cin >> name;
	getline(cin, name);
	setName(name);

	cout << "Введите отчество: " << endl;
	string lastname;
	getline(cin, lastname);
	setLastname(lastname);

	cout << "Введите фамилию: " << endl;
	string surname;
	getline(cin, surname);
	setSurname(surname);

	cout << "Телефон: " << endl;
	long phone;
	cin >> phone;
	//getline(cin, phone);
	setPhone(phone);
	
	
	cout << "Введите должность: " << endl;
	//cin >> profession;
	getline(cin, profession);
	setProfession(profession);

	cout << "Стаж работы: " << endl;
	getline(cin, workExpirience);
	setWorkExpirience(workExpirience);

	cout << "Образование: " << endl;
	getline(cin, education);
	setEducation(education);

}

void Teacher::getInformationTeacher()
{
	cout << "Данные учителя: " << endl;

	//cout << getName() << " " << getLastname() << " " << getSurname() << endl;
	cout << getName() << endl;
	cout << getLastname() << endl;
	cout << getSurname() << endl;
	cout << "Телефон: " << getPhone() << endl;
	cout << "Должность: " << getProfession() << endl;
	cout << "Стаж работы: " << getWorkExpirience() << endl;
	cout << "Образование: " << getEducation() << endl;
}




