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
    // static memory uses
    // Student student1(45, 5, 3.2);
    // cout << student1.roll << " " << student1.cls << " " << student1.gpa << endl;

    // dynamic memory uses
    Student *student2 = new Student(10, 5, 4.56);

    cout << (*student2).roll << " " << (*student2).cls << " " << student2->gpa << endl;

    delete student2;

    return 0;
}