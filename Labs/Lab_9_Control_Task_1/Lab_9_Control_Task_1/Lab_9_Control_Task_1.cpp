//Задание 1. Безопасная реализация класса Triangle
//Требуется разработать класс Triangle, представляющий треугольник, который задается тремя сторонами.
//Для класса определить функцию, вычисляющую площадь треугольника по трем сторонам(см.практическое занятие 1).
//Реализовать генерацию исключительной ситуации при попытке задать стороны недопустимой длины – если хотя бы одна из 
//сторон имеет длину большую, чем сумма двух других сторон.

#include <iostream>

using namespace std;

class  Triangle
{
public:
	//double a, b, c;

	double getSTheSame(double a, double b, double c) // площадь разностороннего треугольника
	{
		if (a > (b + c))
		{
			throw a;
		}
		else if (b > (a + c))
		{
			throw b;
		}
		else if (c > (a + b))
		{
			throw c;
		}

		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
};


int main()
{
	system("chcp 1251");
	Triangle firstTriangle;
	try
	{
		double a, b, c;
		cout << "Введите a: " << endl;
		cin >> a;
		cout << "Введите b: " << endl;
		cin >> b;
		cout << "Введите c: " << endl;
		cin >> c;
		cout << "Площадь треугольника: " << firstTriangle.getSTheSame(a, b, c) << endl;
	}
	catch (const double ex)
	{
		cout << "Проблема в числе: " << ex << endl;
	}
	
}

