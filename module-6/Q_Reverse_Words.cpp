#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string name;
    getline(cin, name);

    stringstream word(name);

    string firstword;
    word >> firstword;

    reverse(firstword.begin(), firstword.end());
    cout << firstword;

    while (word >> firstword)
    {
        reverse(firstword.begin(), firstword.end());
        cout << " " << firstword;
    }

    return 0;
}