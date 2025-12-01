#include <bits/stdc++.h>
using namespace std;

// class Student
// {
// public:
//     string name;
//     int roll;
//     int marks;
// };

// int main()
// {
//     // int array[10];
//     int n;
//     cin >> n;
//     Student array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin.ignore();
//         getline(cin, array[i].name);
//         cin >> array[i].roll >> array[i].marks;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
//     }

//     return 0;
// }

// 2
// sakib hasan
// 15 89
// rakib khan
// 18 65

// sakib hasan 15 89
// rakib khan 18 65

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    // int array[10];
    int n;
    cin >> n;
    Student array[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, array[i].name);
        cin >> array[i].roll >> array[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }

    return 0;
}