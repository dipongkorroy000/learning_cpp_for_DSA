#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // constructor---
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student *function()
{
    Student *student1 = new Student(2, 5, 4.50);

    return student1;
}

int main()
{
    Student *student1Data_Pointer = function();

    cout << student1Data_Pointer->roll << " " << (*student1Data_Pointer).cls << " " << (*student1Data_Pointer).gpa;

    delete student1Data_Pointer;

    return 0;
}