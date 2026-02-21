#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    int count = 0;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
            count++;
    }

    if (count > word.length() - count)
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    else
        transform(word.begin(), word.end(), word.begin(), ::tolower);

    cout << word;

    return 0;
}