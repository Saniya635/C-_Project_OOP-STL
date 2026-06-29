#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
protected:
    int rollNo;
    std::string name;
    int marks;

public:
    Student(int r, std::string n, int m);

    virtual void display();

    virtual char getGrade();
};

#endif