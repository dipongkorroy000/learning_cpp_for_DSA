#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        string str;
        cin >> str;
        int sum1 = 0;
        int sum2 = 0;
        for (int j = 0, k = 5; j < 3; j++, k--)
        {
            for (int l = 0; l <= 9; l++)
            {
                if (str[j] == l + 48)
                    sum1 += l;

                if (str[k] == l + 48)
                    sum2 += l;
            }
        }

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}