#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin>> k>> n>> w;
    int total_price = 0;

    for (int i= 1; i<= w; i++)
    {
        total_price += i*k;
    }
    //cout<< total_price - n;

    int x = total_price - n;
    if (x >= 0)
        cout<< x;
    else
        cout<< 0;

}