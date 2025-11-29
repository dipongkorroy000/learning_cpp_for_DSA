#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    switch (x % 2)
    {
    case 0:
        cout << "even number";
        break;

    case 1:
        cout << "odd number";
        break;

    default:
        cout << "this is default value";
        break;
    }

    return 0;
}