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

        vector<int> v(n);
        vector<int> pos(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            pos[v[i]] = i;
        }

        int a = n;

        for (int i = 0; i < n; i++) {
            if (v[i] != a - i) {
                reverse(v.begin() + i, v.begin() + pos[a - i] + 1);
                break;
            }
        }

        for (int x : v)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}