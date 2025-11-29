#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;

        int array[x];
        for (int i = 0; i < x; i++)
            cin >> array[i];

        // int length = (x * (x - 1) / 2);
        // int arrayRes[length];

        int value = array[0] + array[1] + 1 + 2;

        int len = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = i + 1; j < x; j++)
            {
                if (value > array[i] + array[j] + j - i)
                    value = array[i] + array[j] + j - i;
            }
        }

        cout << value << endl;
    }

    return 0;
}