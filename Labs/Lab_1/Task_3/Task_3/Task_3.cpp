#include <iostream>
#include <math.h>

using namespace std;

void main()
{
	system("chcp 1251");
	double p, a, b, c;

	cout << "¬ведите значение периметра равностороннего треугольника:\n";
	cin >> a;
	b = a;
	c = a;

	p = 0.5 * (a + b + c);
	
	cout << round(sqrt(p * (p - a) * (p - b) * (p - c)) * 100) / 100;
}