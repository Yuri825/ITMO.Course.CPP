//Задание 1. Реализация класса Triangle

#include <iostream>
#include "dot.h"

using namespace std;

class Triangle
{
private:
	Dot point1;
	Dot point2;
	Dot point3;

public:
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3) // конструктор с параметрами координат
	{
		Dot ab(x1, y1, x2, y2); // первая сторона
		point1 = ab;

		Dot bc(x2, y2, x3, y3); // вторая сторона
		point2 = bc;

		Dot ac(x3, y3, x1, y1); // третья сторона
		point3 = ac;
	}

	void getSideOfTriangle() // метод получения сторон треугольника
	{
		cout << "сторона ab = " << point1.distanceTo() << endl;
		cout << "сторона bc = " << point2.distanceTo() << endl;
		cout << "сторона ac = " << point3.distanceTo() << endl;
	}

	void getPerimeterOfTriangle()
	{
		cout << "Периметр треугольника равен: " << point1.distanceTo() + point2.distanceTo() + point3.distanceTo() << endl;
	}

	void getAreaOfTriangle() // площадь треугольника формула Герона
	{
		double p = (point1.distanceTo() + point2.distanceTo() + point3.distanceTo()) / 2; // полупериметр
		cout << "Площадь треугольника равна: " << sqrt(p * (p - point1.distanceTo()) * (p - point2.distanceTo()) * 
			(p - point3.distanceTo())) << endl;
	}
};

int main()
{
	system("chcp 1251");
	Triangle tri(2, 3, 5, 4, 6, 4);
	tri.getSideOfTriangle();
	tri.getPerimeterOfTriangle();
	tri.getAreaOfTriangle();
}


