#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// int main()
// {                     // input
//     int n;            // 2
//     cin >> n;         // sakib 15 89
//     Student array[n]; // rakib 18 65

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i].name >> array[i].roll >> array[i].marks;
//     }

//     int minValue = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         minValue = min(array[i].marks, minValue);
//     }

//     cout << minValue; // min marks print -- 65

//     return 0;
// }

int main()
{                     // input
    int n;            // 2
    cin >> n;         // sakib 15 89
    Student array[n]; // rakib 18 65

    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }

    Student minObj;
    minObj.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(minObj.marks > array[i].marks){
            minObj = array[i];
        }
    }

    cout << minObj.name << " " << minObj.roll << " " << minObj.marks; // min Obj print -- rakib 18 65

    return 0;
}