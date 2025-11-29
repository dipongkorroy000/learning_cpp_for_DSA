#include <iostream>

using namespace std;

int main()
{
    string str = "hello world";
    string str2 = "Hi";

    // str += str2;
    // alternative------
    str.append(str2);

    // str.push_back('A'); // push back a single charter

    // str.pop_back(); // remove last charter

    // str = str2;
    // alternative ------
    // str.assign(str2);

    // str.erase(5); // go 5 index after delete all

    // str.erase(3,5); // go 3 index and 3 to 3+5 index delete = 5 char delete

    // str.replace(6, 5, "Bangladesh"); // go 6 index and remove 5 char and include "Bangladesh"
    // str.replace(6, 0, "Bangladesh"); // go 6 index and remove 0 char and include "Bangladesh"

    // str.insert(5, "dip"); // go 5 index and insert "dip"

    cout << str << endl;

    return 0;
}