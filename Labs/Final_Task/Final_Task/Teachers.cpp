#include "Teachers.h"


string Teachers::getProfession()
{
    return profession;
}

//string Teachers::getPhone()
//{
//    return phone;
//}

string Teachers::getAgeWork()
{
    return ageWork;
}


void Teachers::setProfession(string profession)
{
    this->profession = profession;
}

//void Teachers::setPhone(string phone)
//{
//    this->phone = phone;
//}

void Teachers::setAgeWork(string ageWork)
{
    this->ageWork = ageWork;
}

void Teachers::setInformationTeacher()
{
    cout << "���� ������ �������:" << endl;
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

    cout << "������� ���������" << endl;
    getline(cin, profession);

    cout << "������� ���� ������" << endl;
    getline(cin, ageWork);

    cout << "������� �������" << endl;
    string p;
    getline(cin, p);
    setPhone(p);
}

void Teachers::getInformationTeacher()
{
    cout << getName() << " " << getLastname() << " " << getSurname() << endl;
    cout << "���������: " << profession << endl;
    cout << "���� ������: " << ageWork << endl;
    cout << "�������: " << getPhone() << endl;

}






