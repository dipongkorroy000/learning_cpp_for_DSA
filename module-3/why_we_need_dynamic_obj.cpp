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
        // this is a pointer
        this->roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

Student *function()
{
    Student student1(45, 5, 3.2);

    Student *pointer = &student1;

    return pointer;
}

int main()
{
    Student *student1Data_Pointer = function();

    // output -> garbage value
    cout << (*student1Data_Pointer).roll << " " << (*student1Data_Pointer).cls << " " << (*student1Data_Pointer).gpa << endl;

    return 0;
}