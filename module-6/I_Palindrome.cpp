#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int size = str.size();

    bool isPalindrome = true;

    for (int i = 0, j = size - 1; i < j; i++, j--)
        if (str[i] != str[j])
        {
            isPalindrome = false;
            break;
        }

    if (isPalindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}