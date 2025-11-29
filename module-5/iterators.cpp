#include <iostream>
using namespace std;

int main()
{
    string name = "hello world";

    // cout << *name.begin() << endl;     // 0 index value print
    // cout << *(name.end() - 1) << endl; // string last index value print

    // for (string::iterator i = name.begin(); i < name.end(); i++)
    //     cout << *i << endl;
    // alternative---------
    // c++ update version
    for (auto i = name.begin(); i < name.end(); i++)
        cout << *i << endl;

    return 0;
}