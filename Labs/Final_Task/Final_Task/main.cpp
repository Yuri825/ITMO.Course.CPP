//Зачетное задание.«Адресная книга»
//Необходимо создать приложение, позволяющее записывать данные о людях(ФИО, телефон, род занятий и т.д.).
//Требуется
//•	реализовать иерархию классов :
//o	должны быть абстрактный класс(например, Person или Human) с общими методами(продумайте самостоятельно какими), производные классы, моделирующие, например, следующие сущности(род занятий) : студент, преподаватель, коллега по работе и т.д.
//o	применить отношение ассоциации(композиция или агрегации) между объектами(продумайте самостоятельно какими)
//•	реализовать запись людей в коллекцию(тип на усмотрение разработчика) и сохранение ее в текстовый файл;
//•	реализовать интерфейс взаимодействия в отдельном классе.


#include <iostream>
#include <string>
#include <map>
#include "Person.h"
#include "Teachers.h"
#include "Student.h"
using namespace std;

int main()
{
	system("chcp 1251");
	map <string, Teachers> myTeacher;
	map <string, Student> myStudent;
	int choice;

	cout << "Если хотите ввести данные на учителя, введите 1" << endl;
	cout << "Если хотите ввести данные на студента, введите 2" << endl;

	cin >> choice;
	if (choice == 1)
	{
		Teachers firstTeacher;
		Teachers secondTeacher;
		Teachers thirthTeacher;

		firstTeacher.setInformationTeacher();
		secondTeacher.setInformationTeacher();
		//thirthTeacher.setInformationTeacher();

		myTeacher[firstTeacher.getSurname()] = firstTeacher;
		myTeacher[secondTeacher.getSurname()] = secondTeacher;
		//myTeacher[thirthTeacher.getSurname()] = thirthTeacher;

		cout << endl << "Для вывода данных учителя введите фамилию" << endl;
		string f;
		getline(cin, f);
		myTeacher[f].getInformationTeacher();
	}
	
	if (choice == 2)
	{
		Student firstStudent;
		Student secondStudent;
		Student thirthStudent;

		firstStudent.setInformationStudent();
		secondStudent.setInformationStudent();
		//thirthStudent.setInformationStudent();

		myStudent[firstStudent.getSurname()] = firstStudent;
		myStudent[secondStudent.getSurname()] = secondStudent;
		//myStudent[thirthStudent.getSurname()] = thirthStudent;
	

		cout << endl << "Для вывода данных студента введите фамилию" << endl;
		string f;
		getline(cin, f);
		myStudent[f].getInformationStudent();
	}



	return 0;
}

