#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum_upper = 0, sum_lower = 0;
    bool has_odd_pair = false;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        sum_upper += x;
        sum_lower += y;
        if ((x % 2) != (y % 2)) has_odd_pair = true;
    }

    if (sum_upper % 2 == 0 && sum_lower % 2 == 0) {
        cout << 0 << endl;
    } else if ((sum_upper % 2 == 1) && (sum_lower % 2 == 1) && has_odd_pair) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
}