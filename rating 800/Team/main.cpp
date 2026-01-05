#include <iostream>
using namespace std;
int main()
{
    int array[3];
    int n;
    int count = 0;
    cin>> n;
    while (n--)
    {
        for (int & i : array)
        {
            cin>>i;
        }
        if (array[0]+array[1]+array[2] >=2)
            count++;
    }
    cout<< count;
}