#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int size = str.size();

    for (int i = 0; i < size - 5; i++)
    {
        int j = i;
        int k = 5 + i;
        int start, end;
        string s;
        for (int l = j; l < k; l++)
        {
            s += str[l];
        }

        // cout << s << endl;
        if (s == "EGYPT")
        {
            // cout << j << " " << k << endl;
            str[j] = ' ';
            str.erase(j+1, 4);
        }
    }

    cout << str;

    return 0;
}