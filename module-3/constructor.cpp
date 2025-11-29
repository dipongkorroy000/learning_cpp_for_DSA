// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;
// };

// int main()
// {
//     Student student1;

//     student1.roll = 45;
//     student1.cls = 5;
//     student1.gpa = 3.20;

//     Student student2;

//     student2.roll = 2;
//     student2.cls = 5;
//     student2.gpa = 5.00;

//     cout << student1.roll << " " << student1.cls << " " << student1.gpa << endl;
//     cout << student2.roll << " " << student2.cls << " " << student2.gpa << endl;

//     return 0;
// }

// -------- using class constructor
#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // constructor---
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
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