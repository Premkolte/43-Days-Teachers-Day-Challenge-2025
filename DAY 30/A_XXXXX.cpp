#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int total = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total += a[i];
        }
        if (total % x != 0) {
            cout << n << "\n";
            continue;
        }
        int left = 0, right = n - 1;
        while (left < n && a[left] % x == 0) ++left;
        while (right >= 0 && a[right] % x == 0) --right;
        int ans = max(n - left - 1, right);
        if (ans <= 0) cout << -1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}