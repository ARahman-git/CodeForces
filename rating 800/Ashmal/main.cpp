#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string final = a[0];

        for (int i = 1; i < n; i++) {
            string x = a[i] + final;
            string y = final + a[i];

            if (x < y)
                final = x;
            else
                final = y;
        }

        cout << final << "\n";
    }

    return 0;
}