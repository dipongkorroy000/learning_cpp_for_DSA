#include <iostream>

using namespace std;

int main()
{
    // input
    /**
     * 10
     * hello world
     */
    int x;
    cin >> x;
    string name;

    cin.ignore(); // ignore enter
    getline(cin, name);

    cout << x << endl;
    cout << name << endl;

    // output
    /**
     * 10
     * hello world
     */

    return 0;
}