#include<iostream>

int main(){
    int a,b,c;
    std::cin >> a >> b >> c;

    if(a <= b && a <= c) std::cout << a;
    else if(b <= c && b <= a) std::cout << b;
    else std::cout << c;

    std:: cout << " ";

    // if(a > b && a < c) std::cout << a;
    // if(a < b && a > c) std::cout << a;

    // if(b < a && b > c) std::cout << b;
    // if(b > a && b < c) std::cout << b;

    // if(c > a && c < b) std::cout << c;
    // if(c < a && c > b) std::cout << c;

    // std:: cout << " ";

    if(a >= b && a >= c) std::cout << a;
    else if(b >= a && b >= c) std::cout << b;
    else std::cout << c;
}