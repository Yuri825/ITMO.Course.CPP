#include <iostream>

using namespace std;

double getCubRoot_1()
{
	double a;
	cout << "¬ведите число: " << endl;
	cin >> a;
	return pow(a, 1.0/3);

}




void main()
{
	system("chcp 1251");

	cout << getCubRoot_1() << endl;

	
}
