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
	cout << "�������� ���������� ������ �� �������" << endl;

	cout << "������� ���: " << endl;
	string name;
	//cin >> name;
	getline(cin, name);
	setName(name);

	cout << "������� ��������: " << endl;
	string lastname;
	getline(cin, lastname);
	setLastname(lastname);

	cout << "������� �������: " << endl;
	string surname;
	getline(cin, surname);
	setSurname(surname);

	cout << "�������: " << endl;
	long phone;
	cin >> phone;
	//getline(cin, phone);
	setPhone(phone);
	
	
	cout << "������� ���������: " << endl;
	//cin >> profession;
	getline(cin, profession);
	setProfession(profession);

	cout << "���� ������: " << endl;
	getline(cin, workExpirience);
	setWorkExpirience(workExpirience);

	cout << "�����������: " << endl;
	getline(cin, education);
	setEducation(education);

}

void Teacher::getInformationTeacher()
{
	cout << "������ �������: " << endl;

	//cout << getName() << " " << getLastname() << " " << getSurname() << endl;
	cout << getName() << endl;
	cout << getLastname() << endl;
	cout << getSurname() << endl;
	cout << "�������: " << getPhone() << endl;
	cout << "���������: " << getProfession() << endl;
	cout << "���� ������: " << getWorkExpirience() << endl;
	cout << "�����������: " << getEducation() << endl;
}




