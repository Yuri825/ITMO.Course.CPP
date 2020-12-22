//Задание 2. Безопасная реализация класса Time
//Добавьте в класс Time класс, реализующий возможность реагировать на исключительные ситуации, возникающие, например,
//при создании «неправильных» объектов, проведении операций с объектами класса и т.д.

#include <iostream>
#include <string>

using namespace std;

class MyException
{
public:

    string mes;
    int value;
    MyException(string msg, int val)
    {
        mes = msg;
        value = val;
    }
private:

};

class Time
{

   

private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }


    Time(int h, int m, int s)
    {
        hours = 0;
        minutes = 0;
        seconds = 0;

        if (h < 0)
        {
            throw MyException("Вы ввели отрицательное значение часов: ", h);
        }

        if (m < 0)
        {
            throw MyException("Вы ввели отрицательное значение минут: ", m);
        }

        if (s < 0)
        {
            throw MyException("Вы ввели отрицательное значение секунд: ", s);
        }

        if (s > 60)
        {
            minutes = minutes + (floor(s / 60));
            seconds = s % 60;
        }
        else
        {
            seconds = s;
        }

        if (m > 60)
        {
            hours = floor(m / 60);
            minutes = minutes + (m % 60);
        }
        else
        {
            minutes = minutes + m;
        }

        if (h > 24)
        {
            hours = hours + (floor(h % 24));
        }
        else
        {
            hours = hours + h;
        }
    }

    void add_time(int h, int m, int s)
    {
        hours = hours + h;
        minutes = minutes + m;
        seconds = seconds + s;

        if (seconds > 60)
        {
            minutes = minutes + (floor(s / 60));
            seconds = seconds % 60;
        }

        if (minutes > 60)
        {
            hours = hours + floor(m / 60);
            minutes = minutes % 60;
        }

        if (hours > 24)
        {
            hours = hours + (floor(hours % 24));
        }

    }

    void Print()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    int getHours() { return hours; }
    int getMinutes() { return minutes; }
    int getSeconds() { return seconds; }

    void setHours(int h) { hours = h; }
    void setMinutes(int m) { minutes = m; }
    void setSeconds(int s) { seconds = s; }
};

int main()
{
    system("chcp 1251");
    try
    {
        Time s(1, 70, -70);

        Time d(2, 80, 80);

        Time m;
        s.add_time(d.getHours(), d.getMinutes(), d.getSeconds());
        m.setHours(s.getHours());
        m.setMinutes(s.getMinutes());
        m.setSeconds(s.getSeconds());

        m.Print();
    }
    catch (MyException &ex)
    {
        cout << ex.mes << " " << ex.value << endl;
    }
   
       
   

    return 0;
}