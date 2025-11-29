#include <iostream>

using namespace std;

int main()
{
    string name = "Hello world";
    cout << name.size() << endl; // string size print

    cout << name.max_size() << endl; // 10^6 or 10^7

    cout << name.capacity() << endl;

    // name.resize(4); // just keep first 4 digit then all clear

    // name.resize(15); // add null value of last string

    name.resize(15, 'x'); // last string add x

    cout << name << endl;

    return 0;
}