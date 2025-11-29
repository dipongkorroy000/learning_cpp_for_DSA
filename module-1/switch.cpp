#include <iostream>
using namespace std;

int main()
{

    int day;
    cin >> day;

    // if day == 1 result Saturday
    // when one condition is true then all run -- this problem solve by break;

    switch (day)
    {
    case 1:
        cout << "Saturday\n";
        break;

    case 2:
        cout << "Sunday\n";
        break;

    case 3:
        cout << "Monday\n";
        break;

    case 4:
        cout << "Tuesday\n";
        break;

    case 5:
        cout << "Wednesday\n";
        break;

    default:
        cout << "When any case not true then this default case run";
    }

    return 0;
}