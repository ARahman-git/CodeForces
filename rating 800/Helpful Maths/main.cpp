#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> arr;
    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == '1' || c == '2' || c == '3')
            arr.push_back(c);
    }
    ranges::sort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
        if (i + 1 < arr.size())
            cout << "+";
    }

}