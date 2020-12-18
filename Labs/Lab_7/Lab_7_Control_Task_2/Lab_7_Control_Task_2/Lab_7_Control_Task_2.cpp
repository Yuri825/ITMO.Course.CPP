//Задание 2. Решение квадратного уравнения
//Создайте структуру – решение квадратного уравнения, содержащей два вещественных поля – корни квадратного уравнения.
//Реализуйте решение квадратного уравнения с помощью функции, возвращающей переменную типа структуры – решение этого 
//уравнения с полями – корнями уравнения.

#include <iostream>
using namespace std;

struct quadraticEquation
{
    double x1;
    double x2;
};

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