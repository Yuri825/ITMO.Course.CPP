//Задание 2. Решение квадратного уравнения
//Создайте структуру – решение квадратного уравнения, содержащей два вещественных поля – корни квадратного уравнения.
//Реализуйте решение квадратного уравнения с помощью функции, возвращающей переменную типа структуры – решение этого 
//уравнения с полями – корнями уравнения.

#include <iostream>
#include <string>
using namespace std;

struct quadraticEquation
{
    double x1, x2;

    void Myroot(double a, double b, double c)
    {
        double D = b * b - 4.0 * a * c;
        if (D < 0)
            cout << "Дискриминант отрицательный, корней нет" << endl;
       
        if (D == 0)
        {
            x1 = -b / (2.0 * a);
            x2 = x1;
            cout << " Дискриминант равен нулю, корень один: " << x1 << endl;
        }

        if (D > 0)
        {
            x1 = (-b + sqrt(D)) / (2.0 * a);
            x2 = (-b - sqrt(D)) / (2.0 * a);
            cout << "Дискриминант равен: " << D << "\n" << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
};



int main()
{
    system("chcp 1251");
    quadraticEquation MyRoot;
    MyRoot.Myroot(1, 3, 2);
  
    return 0;
}