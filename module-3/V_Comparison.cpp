#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;
    cin >> a >> op >> b;

    bool isTrue = false;

    if ('>' == op)
    {
        if (a > b)
            isTrue = true;
    }
    else if ('<' == op)
    {
        if (a < b)
            isTrue = true;
    }

    else if ('=' == op)
    {
        if (a == b)
            isTrue = true;
    }

    isTrue ? cout << "Right" : cout << "Wrong";

    return 0;
}