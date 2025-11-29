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
    int maxNum = minNum;

    int minLen;
    int maxLen;

    for (int i = 0; i < x; i++)
        if (minNum > array[i])
        {
            minLen = i;
            minNum = array[i];
        }

    for (int i = 0; i < x; i++)
        if (maxNum < array[i])
        {
            maxLen = i;
            maxNum = array[i];
        }

    array[minLen] = maxNum;
    array[maxLen] = minNum;

    for (int i = 0; i < x; i++)
        cout << array[i] << " ";
}