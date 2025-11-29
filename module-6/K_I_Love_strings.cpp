#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        string a, b;
        cin >> a >> b;

        int size = a.size();
        int size2 = b.size();
        if (size < size2)
            size = size2;

        for (int j = 0; j < size; j++)
        {
            if (j< a.size())
                cout << a[j];
            if (j< b.size())
                cout << b[j];
        }
        cout << endl;
    }

    return 0;
}