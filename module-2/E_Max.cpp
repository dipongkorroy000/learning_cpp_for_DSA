#include <iostream>

int main()
{

    int x;
    std::cin >> x;

    int array[x];
    for (int i = 0; i < x; i++)
        std::cin >> array[i];

    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (array[i] < array[j])
            {
                int tempValue = array[i];
                array[i] = array[j];
                array[j] = tempValue;
            }
        }
    }

    std:: cout << array[0];

    return 0;
}