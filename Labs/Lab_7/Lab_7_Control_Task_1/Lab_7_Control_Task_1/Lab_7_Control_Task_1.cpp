//Задание 1. Структура Time
//Создайте структуру с именем Time.Три ее поля, имеющие тип int, назовите hours, minutes и seconds.Напишите программу, 
//которая просит пользователя ввести время в формате часы, минуты, секунды.Можно запрашивать на ввод как три значения сразу, 
//так и выводить для каждой величины отдельное приглашение.Программа должна хранить время в структурной переменной типа Time 
//и выводить количество секунд во введенном времени.Добавьте в структуру две функции для сложения и вычитания интервалов времени.
//При решении задачи учитывайте естественные допустимые значения для реализуемых характеристик.

#include <iostream>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

int checkHour()
{
	int hour;
	cout << "Введите часы" << endl;
	cin >> hour;
	if (hour < 0 || hour > 24)
	{
		cout << "Неправильный ввод" << endl;
		checkHour();
	}
	else
	{
		return hour;
	}
	
}

int checkMinute()
{
	int minut;
	cout << "Введите минуты" << endl;
	cin >> minut;
	if (minut < 0 || minut > 60)
	{
		cout << "Неправильный ввод" << endl;
		checkMinute();
	}
	else
	{
		return minut;
	}
	
}

int checkSecond()
{
	int second;
	cout << "Введите секунды" << endl;
	cin >> second;
	if (second < 0 || second > 60)
	{
		cout << "Неправильный ввод" << endl;
		checkSecond();
	}
	else
	{
		return second;
	}
	
}

int main()
{
	system("chcp 1251");
	Time time;
	int hour, minut, second;

	hour = checkHour();
	minut = checkMinute();
	second = checkSecond();
			
	time.hours = hour;
	time.minutes = minut;
	time.seconds = second;

	cout << time.hours << "." << time.minutes << "." << time.seconds << endl;

	return 0;
}

