#pragma once
#include <string>
#include "Person.h"

class Student : public Person
{
private:
	string course;
	string avgBall;

public:
	string getCourse();
	string getAvgBall();

	void setCourse(string course);
	void setAvgBall(string avgBall);

	void setInformationStudent(); // �������� ���������� ������ �� ��������
	void getInformationStudent(); // ��������� ������ �� ��������
};

