#include <iostream>

int main()
{
    char x;
    std::cin >> x;

    if('a' <= x && 'z' >= x) std:: cout << "ALPHA" << std:: endl<< "IS SMALL";
    if('A' <= x && 'Z' >= x) std:: cout << "ALPHA" << std:: endl << "IS CAPITAL";
    if(48 <= x && 57 >= x) std:: cout << "IS DIGIT";

    return 0;
}