#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Total marks of " << name << " = " << math + english << endl;
    }
};

int main()
{
    Student sakib("sakib ahmed", 23, 80, 85);

    Student rakib("rakib ahmed", 20, 90, 95);

    sakib.total();
    rakib.total();

    return 0;
}