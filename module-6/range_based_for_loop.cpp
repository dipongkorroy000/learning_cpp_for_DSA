#include <iostream>
using namespace std;

int main()
{
    string str; // input : helloworld
    cin >> str;

    // for (int i = 0; i < str.size(); i++)
    //     cout << str[i]; // output : helloworld

    // alternative ----
    for (char c : str)
        cout << c; // output : helloworld -> one by one character print

    return 0;
}