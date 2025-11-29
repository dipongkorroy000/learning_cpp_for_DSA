#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name;
    getline(cin, name);

    cout << name << endl;

    // stringstream ----
    stringstream fullname(name);

    string word;

    // fullname >> word;
    // cout << word << endl;

    // fullname >> word;
    // cout << word << endl;

    // fullname >> word;
    // cout << word << endl;

    // fullname >> word;
    // cout << word << endl;

    // using loop for all specific word print
    int countWord = 0;
    while (fullname >> word)
    {
        cout << word << endl;
        countWord++;
    }
    cout << countWord << endl;

    return 0;
}