//Задание 1. Вычисление корней квадратного уравнения
//Требуется реализовать функцию вычисления корней квадратного уравнения.
//• Функция должна возвращать значение 1, если корни найдены, значение нуля, если оба корня совпадают, и значение - 1, если корней не существует.
//• Значения корней уравнений должны возвращаться в качестве аргументов функции, передаваемых по ссылке.
//Прототип функции должен выглядеть следующим образом :
//int Myroot(double, double, double, double&, double&);

#include <iostream>
#include <cmath>

using namespace std;

int Myroot(double, double, double, double&, double&);



int main()
{
	system("chcp 1251");
    double a, b, c, ch, x1, x2;
    cout << "Введите a, b, c" << endl;
    cin >> a >> b >> c;
    ch = Myroot(a, b, c, x1, x2);
    cout << ch << endl;
	return 0;
}

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double D = b * b - 4.0 * a * c;
    if (D < 0)
        return -1;
    if (a == 0)
    {
        if (b == 0)
            return -1;
        x2 = x1 = -c / b;
        return 0;
    }
    if (D == 0)
    {
        x1 = -b / (2.0 * a);
        x2 = x1;
        return 0;
    }
    x1 = (-b + sqrt(D)) / (2.0 * a);
    x2 = (-b - sqrt(D)) / (2.0 * a);
    return 1;
}