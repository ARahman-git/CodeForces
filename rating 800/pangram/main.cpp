#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    string str;
    cin>> str;


    set<char> letter;

    for (char c : str)
    {
        letter.insert(tolower(c));
    }


    if (letter.size() == 26)
    {
        cout<< "YES";

    }
    else
        cout<< "NO";

    return 0;


}