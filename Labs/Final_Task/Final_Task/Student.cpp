#include "Student.h"

string Student::getCourse()
{
    return course;
}

string Student::getAvgBall()
{
    return avgBall;
}

void Student::setCourse(string course)
{
    this->course = course;
}

void Student::setAvgBall(string avgBall)
{
    this->avgBall = avgBall;
}

void Student::setInformationStudent()
{
    cout << "���� ������ ��������:" << endl;

    cout << "������� ���" << endl;
    string n;
    cin.ignore();
    getline(cin, n);
    setName(n);

    cout << "������� ��������" << endl;
    string l;
    getline(cin, l);
    setLastname(l);

    cout << "������� �������" << endl;
    string s;
    getline(cin, s);
    setSurname(s);

    cout << "������� ����" << endl;
    getline(cin, course);

    cout << "������� ������� ���� ��������" << endl;
    getline(cin, avgBall);

    cout << "������� �������" << endl;
    string p;
    getline(cin, p);
    setPhone(p);
}

void Student::getInformationStudent()
{
    cout << getName() << " " << getLastname() << " " << getSurname() << endl;
    cout << "����: " << course << endl;
    cout << "������� ����: " << avgBall << endl;
    cout << "�������: " << getPhone() << endl;
}
