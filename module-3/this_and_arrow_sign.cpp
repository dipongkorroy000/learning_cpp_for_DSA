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

int main()
{
    Student student1(45, 5, 3.2);

    Student student2(2, 5, 5.00);

    cout << student1.roll << " " << student1.cls << " " << student1.gpa << endl;
    cout << student2.roll << " " << student2.cls << " " << student2.gpa << endl;

    return 0;
}