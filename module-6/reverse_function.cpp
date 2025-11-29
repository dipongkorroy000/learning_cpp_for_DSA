#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // int n; // input : 5 ->1 2 3 4 5

    // cin >> n;

    // int array[n];
    // for (int i = 0; i < n; i++)
    //     cin >> array[i];

    // reverse(array, array + n);

    // for (int i = 0; i < n; i++)
    //     cout << array[i] << " "; // output : 5 ->5 4 3 2 1

    // example -2
    string str; // input : hello

    cin >> str;

    reverse(str.begin(), str.end());

    cout << str; // output : olleh

    return 0;
}