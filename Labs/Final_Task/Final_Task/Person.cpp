#include "Person.h"

string Person::getName()
{
	return name;
}

string Person::getLastname()
{
	return lastname;
}

string Person::getSurname()
{
	return surname;
}

string Person::getPhone()
{
	return phone;
}

void Person::setName(string name)
{
	this->name = name;
}

void Person::setLastname(string lastname)
{
	this->lastname = lastname;
}

void Person::setSurname(string surname)
{
	this->surname = surname;
}

void Person::setPhone(string phone)
{
	this->phone = phone;
}
