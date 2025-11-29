#include <iostream>

int main()
{
    int *array = new int[3];
    for (int i = 0; i < 3; i++)
        std::cin >> array[i];

    int *array2 = new int[5];
    for (int i = 0; i < 3; i++)
        array2[i] = array[i];

    array2[3] = 40;
    array2[4] = 50;

    delete[] array;

    for (int i = 0; i < 5; i++)
        std::cout << array2[i] << " ";

    delete[] array2;

    return 0;
}