//���� ��� �����.
//��������� ���������� ���������� �� ��� � ������� �� �����.

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251");

	int a, b, c;
	int arr[3];

	cout << "������� a:\n";
	cin >> a;
	arr[0] = a;
	cout << "������� b:\n";
	cin >> b;
	arr[1] = b;
	cout << "������� c:\n";
	cin >> c;
	arr[2] = c;
	
	if (a > b && a > c)
	{
		cout << "���������� �����: " << a;
	}
	else if (b > a && b > c)
	{
		cout << "���������� �����: " << b;
	}
	else if (c > b && c > a)
	{
		cout << "���������� �����: " << c;
	}
	else
	{
		cout << "����� �����";
	}
	
}
