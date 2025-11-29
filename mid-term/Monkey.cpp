#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    char array[100001];

    while (cin.getline(array, 100001))
    {
        for (int i = 0; array[i] != '\0'; i++)
            for (int j = i + 1; array[j] != '\0'; j++)
                if (array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                };

        for (int i = 0; array[i] != '\0'; i++)
            if (array[i] >= 'a' && array[i] <= 'z')
                cout << array[i];

        cout << endl;
    }

    return 0;
}