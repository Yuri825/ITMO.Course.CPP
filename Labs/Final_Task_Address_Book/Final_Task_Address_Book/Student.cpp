#include "Student.h"

string Student::getCourse()
{
    return course;
}

int Student::getYearstudyYear()
{
    return yearstudyYear;
}

double Student::getBall()
{
    return ball;
}

void Student::setCourse(string course)
{
    this->course = course;
}

void Student::setYearstudyYear(int yearstudyYear)
{
    this->yearstudyYear = yearstudyYear;
}

void Student::setBall(double ball)
{
    this->ball = ball;
}
