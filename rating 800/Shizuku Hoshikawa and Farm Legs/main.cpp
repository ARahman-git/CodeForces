#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector <int> m (100);
         
        int count = 0;

        for (int i = 0; i <= n / 4; i++) {
            int rem = n - 4 * i;

            if (rem % 2 == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}