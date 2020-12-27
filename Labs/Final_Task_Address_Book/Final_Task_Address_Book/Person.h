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
	   
	    long phone; // телефон

public:
	virtual string getName();
	virtual string getLastname();
	virtual string getSurname();
	virtual long getPhone();

	virtual void setName(string name);
	virtual void setLastname(string lastname);
	virtual void setSurname(string surname);
	virtual void setPhone(long phone);
};

