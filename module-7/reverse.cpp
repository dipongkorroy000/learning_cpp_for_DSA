#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int objNum;
    cin >> objNum;

    Student array[objNum];

    for (int i = 0; i < objNum; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].roll;
    }

    for (int i = objNum-1; 0 <= i; i--)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }

    return 0;
}