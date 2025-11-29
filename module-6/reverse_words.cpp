#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    string str; // input : I love you
    getline(cin, str);

    stringstream st(str);
    string word;

    st >> word;
    reverse(word.begin(), word.end());
    cout << word; // first word print then print a space then print word by word

    while (st >> word)
    {
        reverse(word.begin(), word.end());
        cout << " ";
        cout << word; // output : I evol uoy
    }

    return 0;
}