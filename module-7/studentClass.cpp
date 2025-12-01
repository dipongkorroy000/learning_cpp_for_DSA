#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compareFunction(Student left, Student right)
{
    if (left.marks < right.marks)
        return true;
    else if (left.marks == right.marks)
    {
        return left.roll > right.roll;
    }
    else
        return false;
};

int main()
{
    int obj;
    cin >> obj;

    Student array[obj];

    for (int i = 0; i < obj; i++)
        cin >> array[i].name >> array[i].roll >> array[i].marks;

    sort(array, array + obj, compareFunction);

    for (int i = 0; i < obj; i++)
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;

    return 0;
}


// 5
// Asif 29 95
// Sakib 55 86
// Zubair 57 86
// Ahsan 39 86
// Joy 12 99

// Zubair 57 86
// Sakib 55 86
// Ahsan 39 86
// Asif 29 95
// Joy 12 99