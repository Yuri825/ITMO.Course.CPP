//Задание 1. Класс Time
//Создайте класс с именем Time, содержащий три поля типа int, предназначенные для хранения часов, минут и секунд.
//Один из конструкторов класса должен инициализировать поля нулевыми значениями, а другой конструктор — заданным набором значений.
//В конструктор с параметрами добавьте реализацию приведения больших неправильных значений параметров к правильным значениям,
//например, если клиент захочет создать время с параметром минут равным 70, то конструктор должен преобразовать это значение 
//к правильному виду : количество часов и минут.
//Создайте метод класса, который будет выводить значения полей на экран в формате 11:59 : 59, и метод, складывающий значения 
//двух объектов типа Time, передаваемых в качестве аргументов.
//Где это возможно и оправдано, сделайте методы константными.
//В функции main() следует создать два инициализированных объекта(подумайте, должны ли они быть константными) и один 
//неинициализированный объект.Затем сложите два инициализированных значения, а результат присвойте третьему объекту и 
//выведите его значение на экран.

#include <iostream>

using namespace std;

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
    Time s(1,70,70);
    
    Time d(2, 80, 80);
   
    Time m;
    s.add_time(d.getHours(), d.getMinutes(), d.getSeconds());
    m.setHours(s.getHours());
    m.setMinutes(s.getMinutes());
    m.setSeconds(s.getSeconds());

    m.Print();
   
    return 0;
}

