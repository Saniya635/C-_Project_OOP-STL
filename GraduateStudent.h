#ifndef GRAD_H
#define GRAD_H

#include "Student.h"

class GraduateStudent
    : public Student
{
public:
    GraduateStudent(int r,
                    std::string n,
                    int m);

    void display() override;
};

#endif