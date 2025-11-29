#include <iostream>
#include <algorithm>
using namespace std;

int *sort_it(int x)
{
    int *array = new int[x];
    for (int i = 0; i < x; i++)
        cin >> array[i];

    // for (int i = 0; i < x; i++)
    //     for (int j = i + 1; j < x; j++)
    //         if (array[i] < array[j])
    //         {
    //             int temp = array[i];
    //             array[i] = array[j];
    //             array[j] = temp;
    //         }

    sort(array, array + x, greater<int>());

    return array;
}

int main()
{

    int x;
    cin >> x;

    int *result = sort_it(x);

    for (int i = 0; i < x; i++)
        cout << result[i] << " ";

    delete[] result;

    return 0;
}