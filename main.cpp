#include <iostream>
#include <vector>
#include <fstream>
#include "GraduateStudent.h"

using namespace std;

int main()
{
    vector<Student*> students;

    students.push_back(
        new GraduateStudent(
            1,
            "Saksham",
            92));

    students.push_back(
        new GraduateStudent(
            2,
            "Rahul",
            80));

    ofstream file(
        "students.txt");

    for (auto s : students)
    {
        s->display();
        file << "Student Saved\n";
    }

    file.close();

    return 0;
}