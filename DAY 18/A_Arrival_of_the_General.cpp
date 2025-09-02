#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int mn = -1, mx = -1;
    for (int i = 0; i < n; ++i) {
        if (mn == -1 || arr[i] <= arr[mn]) {
            mn = i;
        }
        if (mx == -1 || arr[i] > arr[mx]) {
            mx = i;
        }
    }

    int ans = 0;
    if (mx < mn) {
        ans = mx + (n - mn - 1);
    } else {
        ans = mx + (n - mn - 2);
    }
    cout << ans << endl;
    return 0;
}