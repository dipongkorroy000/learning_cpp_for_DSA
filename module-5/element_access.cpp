#include<iostream>

using namespace std;

int main(){
    string str;

    cin >> str;

    cout << str[0] << endl;
    cout << str.at(0) << endl; // index function

    cout << str.front() << endl; // string first digit print
    cout << str.back() << endl; // string last digit print
    
    cout << str[str.size()-1] << endl; // string last digit print




    return 0;
}