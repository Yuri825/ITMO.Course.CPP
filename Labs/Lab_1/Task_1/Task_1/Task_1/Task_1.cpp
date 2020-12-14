#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	cout << "Введите ваше имя" << endl;
	getline(cin, name);
	cout << "Привет, " << name << "!\n";
}