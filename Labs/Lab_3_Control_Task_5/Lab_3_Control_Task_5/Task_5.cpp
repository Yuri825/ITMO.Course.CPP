//Задание 5. Применение рекурсии для перевода целого числа в двоичный код
//Требуется написать рекурсивную функцию перевода целого положительного числа из десятичной системы исчисления в двоичную.
//Классический алгоритм перевода : нужно входной параметр num делить на 2 до тех пор, пока num > 2. 
//При каждом делении нужно выделять остаток с помощью выражения num % 2.

#include <iostream>

using namespace std;
string result = "";
string getTwoSystem(int num)
{

	if (num / 2 == 0)
	{
		return "1" + result;
	}
	else
	{
		if (num % 2 == 0)
		{
			result = "0" + result;
			num = num / 2;
		}
		else
		{
			result = "1" + result;
			num = num / 2;
		}
		return getTwoSystem(num);
	}
}

void main()
{
	system("chcp 1251");
	int a;
	cout << "Введите число, которое необходимо перевести в двоичный код" << endl;
	cin >> a;
	cout << getTwoSystem(a) << endl;
}
