#include <bits/stdc++.h>
using namespace std;

struct Seg {
    int len, l, r;
    bool operator<(const Seg& other) const {
        if (len != other.len) return len < other.len; 
        return l > other.l; 
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n, 0);

        priority_queue<Seg> PQ;
        PQ.push({n, 0, n - 1});
        int step = 1;

        while (!PQ.empty()) {
            Seg seg = PQ.top(); PQ.pop();
            int l = seg.l, r = seg.r, len = seg.len;
            int mid;
            if (len % 2 == 1) {
                mid = (l + r) / 2;
            } else {
                mid = (l + r - 1) / 2;
            }
            a[mid] = step++;
            if (l <= mid - 1)
                PQ.push({mid - l, l, mid - 1});
            if (mid + 1 <= r)
                PQ.push({r - mid, mid + 1, r});
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}