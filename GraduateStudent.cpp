#include "GraduateStudent.h"
#include <iostream>

using namespace std;

GraduateStudent::GraduateStudent(
    int r,
    string n,
    int m)
    : Student(r, n, m)
{
}

void GraduateStudent::display()
{
    cout << "\nGraduate Student\n";
    Student::display();
}