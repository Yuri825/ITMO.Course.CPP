#pragma once
#include "Person.h"

class Student
{
private:
	string course; // ����
	int yearstudyYear; // ��� ��������
	double ball; // ������������, ������� ����

public:
	string getCourse();
	int getYearstudyYear();
	double getBall();

	void setCourse(string course);
	void setYearstudyYear(int yearstudyYear);
	void setBall(double ball);
};

