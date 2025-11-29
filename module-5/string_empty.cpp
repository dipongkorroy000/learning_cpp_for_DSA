#include <iostream>

using namespace std;

int main()
{

    string name = "hello world";

    name.clear(); // clear string
    // if(name.empty() == true) cout << "empty" << endl;
    // else cout << "not empty" << endl;

    // alternative --------
    if (name.size() == 0)
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    return 0;
}