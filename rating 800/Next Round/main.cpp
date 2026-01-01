#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    cin >>n >> b;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for (int i=0; i< n; i++)
    {
        if (arr[b-1] <= arr[i] && arr[i] > 0)
        {
            count++;
        }
    }
    cout<< count;
}