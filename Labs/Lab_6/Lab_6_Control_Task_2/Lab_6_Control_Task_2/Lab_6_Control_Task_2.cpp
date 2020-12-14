//Задание 2. Сохранение данных в текстовый файл
//В решении упражнения 2 занятия 5 создайте текстовый файл и запишите в него два массива : исходный и отсортированный.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	const int N = 10;
	int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55};

	
	ofstream fOut;
	fOut.open("arrays.txt", ofstream::app); 

	fOut << "массив до сортировки: " << endl;
	for (int i : a)
	{
		fOut << i << ", "; // записываем в файл массив до сортировки
	}
	
	fOut.close();

	int min = 0; // для записи минимального значения
	int buf = 0; // для обмена значениями

	for (int i = 0; i < N; i++)
	{
		min = i; 
		
		for (int j = i + 1; j < N; j++)
			min = (a[j] < a[min]) ? j : min;
		
		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}
	

	fOut.open("arrays.txt", ofstream::app);
	fOut << "\nмассив после сортировки: " << endl;
	for (int i : a)
	{
		fOut << i << ", "; // записываем в файл массив после сортировки
	}
	fOut.close();
	return 0;
}

