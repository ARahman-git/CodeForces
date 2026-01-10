#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, a, b;
    cin>> n;
    while (n--)
    {
        cin>> l>> a>> b;
        int i = 1;

        int x = (a + i*b) %l;
        int prize = x;
        while (x != a)
        {
            i++;
            x = (a + i*b) %l;
            if (prize < x)
                prize = x;

        }
        cout<< prize <<"\n";
    }
}