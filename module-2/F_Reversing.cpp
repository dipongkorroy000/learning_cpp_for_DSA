#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    int array[x];
    for (int i = 0; i < x; i++)
        std::cin >> array[i];

    for (int i = x-1; i >= 0; i--)
        std::cout << array[i] << " ";

    return 0;
}