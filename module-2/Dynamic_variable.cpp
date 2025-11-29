// Dynamic memory declaration
// #include<iostream>
// using namespace std;

// int main (){
//     int x =10;

//     int *p = new int; // dynamic variable decl

//     *p = 100;

//     cout << *p << endl;

//     return 0;
// }

// Static memory - variable
// #include <iostream>
// using namespace std;

// int *pointerAddress;

// void function()
// {
//     int x = 10;

//     pointerAddress = &x;

//     cout << "function\t" << *pointerAddress << endl;
//     return;
// }

// int main()
// {
//     function();

//     cout << "Main\t" << *pointerAddress << endl;
//     return 0;
// }

// Dynamic memory - variable
// #include <iostream>
// using namespace std;

// int *pointerAddress;

// void function()
// {
//     int *x = new int;

//     *x = 10;

//     pointerAddress = x;

//     cout << "function\t" << *pointerAddress << endl;
//     return;
// }

// int main()
// {
//     function();

//     cout << "Main\t" << *pointerAddress << endl;
//     return 0;
// }