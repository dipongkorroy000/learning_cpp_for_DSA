#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int balloons = 0;
        int solved[26];
        for (int i = 0; i < 26; i++)
            solved[i] = 0;

        for (int i = 0; i < n; i++)
        {
            int idx = s[i] - 'A';

            if (solved[idx] == 0)
            {
                balloons += 2;
                solved[idx] = 1;
            }
            else
                balloons += 1;
        }

        cout << balloons << endl;
    }

    return 0;
}
