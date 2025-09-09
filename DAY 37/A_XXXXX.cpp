#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        long long totsum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totsum += a[i];
        }

        if (totsum % x != 0) {
            cout << n << "\n";
            continue;
        }

        int left = -1, right = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] % x != 0) {
                left = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (a[i] % x != 0) {
                right = i;
                break;
            }
        }

        if (left == -1) {
            cout << -1 << "\n";
        } else {
            cout << max(n - left - 1, right) << "\n";
        }
    }
    return 0;
}