#pragma once
#include "Person.h"

class Student
{
private:
	string course; // курс
	int yearstudyYear; // год обучения
	double ball; // успеваемость, средний балл

public:
	string getCourse();
	int getYearstudyYear();
	double getBall();

	void setCourse(string course);
	void setYearstudyYear(int yearstudyYear);
	void setBall(double ball);
};

