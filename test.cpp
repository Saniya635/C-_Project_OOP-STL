#include <cassert>
#include "Student.h"

int main()
{
    Student s(
        1,
        "Test",
        95);

    assert(
        s.getGrade() == 'A');

    return 0;
}