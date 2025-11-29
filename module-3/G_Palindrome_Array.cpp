#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int array[x];
    for (int i = 0; i < x; i++)
        cin >> array[i];

    bool isTrue = true;

    for (int i = 0, j = x - 1; i <= j; i++, j--)
        if (array[i] != array[j])
        {
            isTrue = false;
            break;
        }

    isTrue ? cout << "YES" : cout << "NO";
    return 0;
}