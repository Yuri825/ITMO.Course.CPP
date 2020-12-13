//Задание 1. Передача массива в функцию
//Реализуйте созданный вами функционал в упражнениях 1 и 2 в виде соответствующих функций, которые будут принимать массив и 
//возвращать требуемые результаты.
//Функция должна принимать два параметра : целочисленное значение – размер массива и сам массив.

#include <iostream>

using namespace std;

void FillArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    FillArray(arr, SIZE);
    PrintArray(arr, SIZE);
}

