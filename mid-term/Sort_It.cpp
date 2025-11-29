#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int array[x];
    for (int i = 0; i < x; i++)
        cin >> array[i];

    // for (int i = 0; i < x; i++)
    //     for (int j = i + 1; j < x; j++)
    //         if (array[i] > array[j])
    //         {
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }

    sort(array, array + x);

    for (int i = 0; i < x; i++)
        cout << array[i] << " ";

    cout << endl;

    for (int i = x - 1; i >= 0; i--)
        cout << array[i] << " ";

    return 0;
}