#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k1, k2;
    cin >> n >> k1;
    queue<int> q1, q2;
    for (int i = 0, x; i < k1; ++i) {
        cin >> x;
        q1.push(x);
    }
    cin >> k2;
    for (int i = 0, x; i < k2; ++i) {
        cin >> x;
        q2.push(x);
    }

    int rounds = 0;
    set<pair<vector<int>, vector<int>>> seen;

    while (!q1.empty() && !q2.empty()) {
        vector<int> v1, v2;
        queue<int> tmp1 = q1, tmp2 = q2;
        while (!tmp1.empty()) { v1.push_back(tmp1.front()); tmp1.pop(); }
        while (!tmp2.empty()) { v2.push_back(tmp2.front()); tmp2.pop(); }
        if (seen.count({v1, v2})) {
            cout << -1 << endl;
            return 0;
        }
        seen.insert({v1, v2});

        int a = q1.front(); q1.pop();
        int b = q2.front(); q2.pop();
        if (a > b) {
            q1.push(b);
            q1.push(a);
        } else {
            q2.push(a);
            q2.push(b);
        }
        rounds++;
    }

    if (q1.empty())
        cout << rounds << " 2" << endl;
    else
        cout << rounds << " 1" << endl;
}