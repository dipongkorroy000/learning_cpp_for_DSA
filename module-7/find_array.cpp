#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    cin >> word;

    stringstream singleWord(sentence);

    string findWord;

    int sum = 0;
    while (singleWord >> findWord)
        if (findWord == word)
            sum++;

    cout << sum << endl;
    return 0;
}

// Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank 
// john

// 2