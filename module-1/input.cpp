// #include <iostream>

// int main()
// {
//     int x;
//     int y;
//     std::cin >> x >> y;

//     std::cout << x << std::endl;
//     std :: cout << y << std:: endl;

//     return 0;
// }

// alternative --. using namespace std;
#include <iostream>
using namespace std;
int main()
{
    int x;
    char y;
    // scanf("%d", &x); c language
    cin >> x >> y;

    // printf("%d", x);
    // cout << x << endl;
    // cout << y << endl;
    // cout << (int)y << endl; // char variable ASCII value print

    // alternative -- ASCII value to char print
    int a = 97;
    cout << (char)a << endl; // char variable ASCII value print

    return 0;
}