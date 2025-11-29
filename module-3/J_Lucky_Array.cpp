#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int array[x];
    for (int i = 0; i < x; i++)
        cin >> array[i];

    int minNum = array[0];

    for (int i = 0; i < x; i++)
        if (minNum > array[i])
            minNum = array[i];

    int count = 0;

    for (int i = 0; i < x; i++)
        if (minNum == array[i])
            count++;

    if (count % 2 != 0)
        cout << "Lucky";
    else
        cout << "Unlucky";

    return 0;
}