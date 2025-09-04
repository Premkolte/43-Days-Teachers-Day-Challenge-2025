#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(8, 0);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        cnt[x]++;
    }

    vector<tuple<int, int, int>> res;

    while (cnt[1] > 0 && cnt[2] > 0 && cnt[4] > 0) {
        res.emplace_back(1, 2, 4);
        cnt[1]--; cnt[2]--; cnt[4]--;
    }
    while (cnt[1] > 0 && cnt[2] > 0 && cnt[6] > 0) {
        res.emplace_back(1, 2, 6);
        cnt[1]--; cnt[2]--; cnt[6]--;
    }
    while (cnt[1] > 0 && cnt[3] > 0 && cnt[6] > 0) {
        res.emplace_back(1, 3, 6);
        cnt[1]--; cnt[3]--; cnt[6]--;
    }
    if (res.size() * 3 != n) {
        cout << -1 << endl;
    } else {
        for (auto &g : res) {
            int a, b, c;
            tie(a, b, c) = g;
            cout << a << " " << b << " " << c << "\n";
        }
    }
    return 0;
}