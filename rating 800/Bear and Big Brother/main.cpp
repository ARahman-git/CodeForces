#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>> a>> b;
    int year = 0;
    while (true)
    {
        year ++;
        a = a*3;
        b = b*2;
        if (a > b)
            break;
    }
    cout<< year;
    return 0;
}