#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    while (n--)
    {
        int q;
        cin>> q;
        string s, t;
        cin>> s>> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
        {
            cout<< "YES\n";
        }
        else
            cout<< "NO\n";


    }
}