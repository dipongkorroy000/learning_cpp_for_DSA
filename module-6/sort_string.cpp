#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str; // input helloworld
    cin >> str;

    sort(str.begin(), str.end());

    cout << str << endl; // output : dehllloorw


    return 0;
}