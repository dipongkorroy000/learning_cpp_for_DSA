#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d = 23.12345678;
    cout << fixed << setprecision(2) << d << endl; // output --> 23.12

    return 0;
}
