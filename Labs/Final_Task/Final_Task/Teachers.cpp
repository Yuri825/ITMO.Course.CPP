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
    cout << "Ввод данных учителя:" << endl;
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

    cout << "Введите должность" << endl;
    getline(cin, profession);

    cout << "Введите стаж работы" << endl;
    getline(cin, ageWork);

    cout << "Введите телефон" << endl;
    string p;
    getline(cin, p);
    setPhone(p);
}

void Teachers::getInformationTeacher()
{
    cout << getName() << " " << getLastname() << " " << getSurname() << endl;
    cout << "Должность: " << profession << endl;
    cout << "Стаж работы: " << ageWork << endl;
    cout << "Телефон: " << getPhone() << endl;

}






