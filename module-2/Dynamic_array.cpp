// #include <iostream>
// int main()
// {
//     int array[5];

//     for (int i = 0; i < 5; i++)
//         std::cin >> array[i];

//     for (int i = 0; i < 5; i++)
//         std::cout << array[i] << " ";
//     return 0;
// }

// Dynamic array declare
#include <iostream>
int main()
{
    // int array[5];    // static array
    int *dynamicMemoryAddress = new int[5]; // Dynamic array

    for (int i = 0; i < 5; i++)
        std::cin >> dynamicMemoryAddress[i];

    for (int i = 0; i < 5; i++)
        std::cout << dynamicMemoryAddress[i] << " ";
    return 0;
}