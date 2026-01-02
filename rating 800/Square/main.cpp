#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int arr[4];
        set<int> isSquare;

        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
            isSquare.insert(arr[i]);
        }

        if (isSquare.size() == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
