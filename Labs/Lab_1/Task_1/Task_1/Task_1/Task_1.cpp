#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");
	string name;
	cout << "������� ���� ���" << endl;
	getline(cin, name);
	cout << "������, " << name << "!\n";
}