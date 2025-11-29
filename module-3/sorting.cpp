#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    /**
     * input 5
             2 6 8 3 4
     */
    for (int i = 0; i < n; i++)
        cin >> array[i];

    // sort(starting, ending);
    // sort(array, array + n); // ascending
    sort(array, array + n, greater<int>()); // descending

    /**
    * output 5
             2 6 8 3 4
    */

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}