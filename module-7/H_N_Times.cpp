#include <bits/stdc++.h>
using namespace std;

void functionCout(int x, char c)
{
    cout << c;
    while (x--)
    {
        cout << " " << c;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        x--;
        char c;
        cin >> c;

        functionCout(x, c);
    }

    return 0;
}