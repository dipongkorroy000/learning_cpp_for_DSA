#include <iostream>
#include <string.h>

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student student, student2, student3;

    /**
     *
     *  INPUT----
     *  sarnika rani
        10 4.5
        sahadeb kumar
        12 4.4
     */

    // student.roll = 10;
    // student.gpa = 4.52;

    // char tempArray[100] = "sarnika";
    // strcpy(student.name, tempArray);

    std::cin.getline(student.name, 100);
    std::cin >> student.roll >> student.gpa;

    std::cout << student.name << " " << student.roll << " " << student.gpa << std::endl;

    std::cin.ignore(); // ignore first line enter
    std::cin.getline(student2.name, 100);
    std::cin >> student2.roll >> student2.gpa;

    std::cout << student2.name << " " << student2.roll << " " << student2.gpa << std::endl;

    return 0;
}