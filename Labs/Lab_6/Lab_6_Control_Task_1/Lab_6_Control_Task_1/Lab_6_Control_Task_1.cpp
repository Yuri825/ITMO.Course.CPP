// Задание 1. Запись текста в файл
//Требуется написать программу для записи небольшого стихотворения с клавиатуры в текстовый файл.

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");

    ofstream fOut;
   
        fOut.open("poetry.txt", ofstream::app);

        for (int i = 0; i < 4; i++)
        {
        if (!fOut.is_open())
        {
            cout << "Какая-то ошибка";
        }
        else
        {
            cout << "Введите строчку стихотворения" << endl;
            string line;
            getline(cin, line);
            fOut << line;
            fOut << "\n";
        }
    }
    
    
    fOut.close();
}

