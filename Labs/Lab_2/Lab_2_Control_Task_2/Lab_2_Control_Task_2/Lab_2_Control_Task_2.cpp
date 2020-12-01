//Даны три числа.
//Требуется определить наибольшее из них и вывести на экран.

#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251");

	int a, b, c;
	int arr[3];

	cout << "Введите a:\n";
	cin >> a;
	arr[0] = a;
	cout << "Введите b:\n";
	cin >> b;
	arr[1] = b;
	cout << "Введите c:\n";
	cin >> c;
	arr[2] = c;
	
	if (a > b && a > c)
	{
		cout << "Наибольшее число: " << a;
	}
	else if (b > a && b > c)
	{
		cout << "Наибольшее число: " << b;
	}
	else if (c > b && c > a)
	{
		cout << "Наибольшее число: " << c;
	}
	else
	{
		cout << "числа равны";
	}
	
}
