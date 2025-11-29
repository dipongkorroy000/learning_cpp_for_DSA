// #include <iostream>
// int *function()
// {
//     int array[5];
//     for (int i = 0; i < 5; i++)
//         std::cin >> array[i];

//     return array;
// }
// int main()
// {
//     int *value = function();
//     // this is not showing because it's a static array,, now solve this issue using dynamic array
//     // for (int i = 0; i < 5; i++)
//     //     std::cout << value[i];

//     return 0;
// }

// dynamic array return or heap memory array return
#include <iostream>
int *function()
{
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
        std::cin >> array[i];

    return array;
}
int main()
{
    int *value = function();
    for (int i = 0; i < 5; i++)
        std::cout << value[i] << " ";

    return 0;
}