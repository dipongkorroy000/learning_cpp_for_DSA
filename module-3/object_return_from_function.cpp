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

Student function()
{
    Student student1(45, 5, 3.2);
    return student1;
}

int main()
{
    Student student1Data = function();

    cout << student1Data.roll << " " << student1Data.cls << " " << student1Data.gpa << endl;

    return 0;
}