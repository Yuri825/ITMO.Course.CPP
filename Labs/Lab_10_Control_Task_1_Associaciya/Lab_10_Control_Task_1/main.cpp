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
	
	Triangle(Dot point1, Dot point2, Dot point3) // конструктор с параметрами координат
	{
		this->point1 = point1;
		this->point2 = point2;
		this->point3 = point3;
	}

	void getSideOfTriangle() // метод получения сторон треугольника
	{
		cout << "сторона ab = " << point1.distanceTo(point2) << endl;
		cout << "сторона bc = " << point2.distanceTo(point3) << endl;
		cout << "сторона ac = " << point3.distanceTo(point1) << endl;
	}

	void getPerimeterOfTriangle()
	{
		cout << "Периметр треугольника равен: " << point1.distanceTo(point2) + point2.distanceTo(point3) + point3.distanceTo(point1) << endl;
	}

	void getAreaOfTriangle() // площадь треугольника формула Герона
	{
		double p = (point1.distanceTo(point2) + point2.distanceTo(point3) + point3.distanceTo(point1)) / 2; // полупериметр
		
		cout << "Площадь треугольника равна: " << sqrt(p * (p - point1.distanceTo(point2)) * (p - point2.distanceTo(point3)) *
			(p - point3.distanceTo(point1))) << endl;
	}
};

int main()
{
	system("chcp 1251");
	Dot p1(2, 3);
	Dot p2(5, 4);
	Dot p3(6, 4);
	
	Triangle tri(p1, p2, p3);
	tri.getSideOfTriangle();
	tri.getPerimeterOfTriangle();
	tri.getAreaOfTriangle();
}


