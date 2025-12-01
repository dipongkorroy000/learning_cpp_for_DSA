#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compareFun(Student left, Student right)
{
    // if(left.marks < right.marks) return true;
    // if(left.marks > right.marks) return true;
    // if(left.roll <= right.roll) return true;
    // else return false;

    // alternative sort cut ---
    // return left.roll < right.roll; // condition return boolean value

    // if(left.marks > right.marks) return true;
    // else if(left.marks < right.marks) return false;
    // else {
    //     if(left.roll< right.roll) return true;
    //     else false;
    // }
    
    // alternative sort cut
    // if(left.marks == right.marks) return left.roll < right.roll;
    // else return left.marks > right.marks;

    // alternative ternary
    return (left.marks == right.marks) ? (left.roll < right.roll) : (left.marks > right.marks);
}

int main()
{
    int n;
    cin >> n;
    Student array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i].name >> array[i].roll >> array[i].marks;

    sort(array, array + n, compareFun); // when compareFun = false then swap

    for (int i = 0; i < n; i++)
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;

    return 0;
}

// input -----
// 3
// sakib 15 89
// rakib 18 65
// akib 14 76
// output --------
// rakib 18 65
// akib 14 76
// sakib 15 89

// input ----
// 3
// sakib 15 89
// rakib 18 65
// akib 14 76
// output -------
// sakib 15 89
// akib 14 76
// rakib 18 65

// input ----
// 4
// sakib 15 89
// rakib 18 65
// akib 14 76
// roni 12 65
// output -------
// sakib 15 89
// akib 14 76
// roni 12 65
// rakib 18 65