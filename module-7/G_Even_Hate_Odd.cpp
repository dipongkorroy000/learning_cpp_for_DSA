#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int array[x];
        for (int i = 0; i < x; i++)
            cin >> array[i];

        if (x % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int array2[10];
        for (int i = 0; i < 10; i++)
            array2[i] = 0;

        int even = 0;
        int odd = 0;
        for (int j = 0; j < x; j++)
        {
            if (array[j] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == odd)
            cout << 0 << endl;
        else
        {
            int updateNum = (even - odd) / 2;
            cout << abs(updateNum) << endl;
        }
    }
    return 0;
}