

#include <iostream>
#include <vector>

#include "human.h"
#include "student.h"
#include "teacher.h"
#include "TeacherOrStudent.h"

using namespace std;

int main()
{
    system("chcp 1251");

    // Оценкистудента
    vector<int> scores;

    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    TeacherOrStudent t; 

    student* stud = new student("Петров", "Иван", "Алексеевич", scores);
    t.getInfo(stud);
    cout << stud->get_full_name() << endl;
    cout << "Средний балл : " << stud->get_average_score() << endl;

    unsigned int teacher_work_time = 40;
    teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
    t.getInfo(tch);
    cout << tch->get_full_name() << endl;
    cout << "Количество часов: " << tch->get_work_time() << endl;

    return 0;
}

