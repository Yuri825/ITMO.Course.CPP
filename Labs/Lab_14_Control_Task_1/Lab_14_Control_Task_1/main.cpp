//Задание 1. Шаблонная функция обработки массива
//Напишите шаблон функции, возвращающей среднее арифметическое всех элементов массива.
//Аргументами функции должны быть имя и размер массива(типа int).
//В функции main() проверьте работу с массивами типа int, long, double и char.

#include <iostream>
#include <math.h>

using namespace std;

template <typename T>
T getArr(T arr[], int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	
	T avg = sum / n;
	return avg;
}

int main()
{
	int arr[]{ 4,7,7 };
	double arr1[]{ 5.3, 6.8, 4.7, 3.2 };
	long arr2[]{ 689, 452, 785 };
	char arr3[]{125, 56, 8};

	int n = sizeof(arr) / sizeof(arr[0]);	
	cout << getArr(arr, n) << endl;

	n = sizeof(arr1) / sizeof(arr1[0]);
	cout << getArr(arr1, n) << endl;
	
	n = sizeof(arr2) / sizeof(arr2[0]);
	cout << getArr(arr2, n) << endl;

	n = sizeof(arr3) / sizeof(arr3[0]);
	cout << getArr(arr3, n) << endl;

	return 0;

}

