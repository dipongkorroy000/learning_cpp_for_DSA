#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;
    Student student1, student2, student3;

    for (int i = 0; i < t; i++)
    {
        cin >> student1.id >> student1.name >> student1.section >> student1.marks;
        cin >> student2.id >> student2.name >> student2.section >> student2.marks;
        cin >> student3.id >> student3.name >> student3.section >> student3.marks;

        if (student1.marks >= student2.marks && student1.marks >= student3.marks)
        {
            cout << student1.id << " " << student1.name << " " << student1.section << " " << student1.marks << endl;
            continue;
        }
        else if (student2.marks >= student1.marks && student2.marks >= student3.marks)
        {
            cout << student2.id << " " << student2.name << " " << student2.section << " " << student2.marks << endl;
            continue;
        }
        else if (student3.marks >= student1.marks && student3.marks >= student2.marks)
        {
            cout << student3.id << " " << student3.name << " " << student3.section << " " << student3.marks << endl;
            continue;
        }
    }
}