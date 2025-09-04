#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int last = 0;
    for (int i = 0; i < n; ++i) {
        int rounds = (a[i] + m - 1) / m;
        if (rounds >= (a[last] + m - 1) / m) last = i;
    }
    cout << last + 1 << endl;
    return 0;
}