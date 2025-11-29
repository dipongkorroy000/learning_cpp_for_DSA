#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, sum;
        cin >> n >> sum;
        int array[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];

        bool isTrue = false;

        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k < n; k++)
                {
                    if (array[i] + array[j] + array[k] == sum)
                    {
                        isTrue = true;
                        break;
                    }
                }

        isTrue ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}