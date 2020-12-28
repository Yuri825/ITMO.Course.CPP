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
    cout << "Ввод данных студента:" << endl;

    cout << "Введите имя" << endl;
    string n;
    cin.ignore();
    getline(cin, n);
    setName(n);

    cout << "Введите отчество" << endl;
    string l;
    getline(cin, l);
    setLastname(l);

    cout << "Введите фамилию" << endl;
    string s;
    getline(cin, s);
    setSurname(s);

    cout << "Введите курс" << endl;
    getline(cin, course);

    cout << "Введите средний балл студента" << endl;
    getline(cin, avgBall);

    cout << "Введите телефон" << endl;
    string p;
    getline(cin, p);
    setPhone(p);
}

void Student::getInformationStudent()
{
    cout << getName() << " " << getLastname() << " " << getSurname() << endl;
    cout << "Курс: " << course << endl;
    cout << "Средний балл: " << avgBall << endl;
    cout << "Телефон: " << getPhone() << endl;
}
