#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        if (n == 2 || n== 3)
        {
            cout << n << "\n";
        }
        else
        {
            cout << n%2 <<"\n";
        }
    }
    return 0;
}
