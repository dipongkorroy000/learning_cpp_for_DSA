#include <iostream>
using namespace std;

class Cricketer
{
public:
    int jersey;
    string country;

    Cricketer(int jersey, string country)
    {
        this->jersey = jersey;
        this->country = country;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer(100, "India");
    Cricketer *kohli = new Cricketer(200, "India");

    // kohli->jersey = dhoni->jersey;
    // kohli->country = dhoni->country;
    
    // alternative copy
    *kohli = *dhoni; // dereference copy

    // cout << dhoni->jersey << endl;
    // cout << kohli->jersey << endl;

    delete dhoni;

    cout << kohli->jersey << " " << kohli->country << endl; // output : 100 India

    delete kohli;

    return 0;
}