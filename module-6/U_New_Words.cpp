#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int size = str.size();

    int e =0;
    int g =0;
    int y =0;
    int p =0; 
    int t =0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == 'e' || str[i] == 'E')
            e++;
        else if (str[i] == 'g' || str[i] == 'G')
            g++;
        else if (str[i] == 'y' || str[i] == 'Y')
            y++;
        else if (str[i] == 'p' || str[i] == 'P')
            p++;
        else if (str[i] == 't' || str[i] == 'T')
            t++;
    }

    int minNum = 0;
    for (int i = 1;; i++)
    {
        if (e >= i && g >= i && y >= i && p >= i && t >= i)
            minNum++;
        else
            break;
    }

    cout << minNum;

    return 0;
}