#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	double x;
	double a, b;
	cout << "\n������� a � b : \n";
	cin >> a;
	cin >> b;
	x = a / b;
	cout.precision(3);
	cout << "\nx = " << x << endl;
	cout << sizeof(a / b) << ends << sizeof(x) << endl;
	return 0;
}