#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(int r,
                 string n,
                 int m)
{
    rollNo = r;
    name = n;
    marks = m;
}

char Student::getGrade()
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 75)
        return 'B';
    else if (marks >= 50)
        return 'C';
    else
        return 'F';
}

void Student::display()
{
    cout << "Roll No: " << rollNo
         << "\nName: " << name
         << "\nMarks: " << marks
         << "\nGrade: "
         << getGrade()
         << endl;
}