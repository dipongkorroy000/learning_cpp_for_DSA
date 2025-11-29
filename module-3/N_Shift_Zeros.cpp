#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int array[x];
    for (int i = 0; i < x; i++)
        std::cin >> array[i];

    for (int i = 0; i < x; i++)
        for (int j = i + 1; j < x; j++)
            if (array[i] == 0)
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

    for (int i = 0; i < x; i++)
        std::cout << array[i] << " ";

    return 0;
}