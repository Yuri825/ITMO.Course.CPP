#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string name; // имя
	string lastname; // отчество
	string surname; // фамилия

	string phone; // телефон

public:
	virtual string getName();
	virtual string getLastname();
	virtual string getSurname();
	virtual string getPhone();

	virtual void setName(string name);
	virtual void setLastname(string name);
	virtual void setSurname(string name);
	virtual void setPhone(string name);
};

