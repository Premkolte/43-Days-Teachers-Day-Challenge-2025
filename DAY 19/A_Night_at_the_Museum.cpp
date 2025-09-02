#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    char cur = 'a'; // Start from 'a'

    for (char c : s) {
        int diff = abs(cur - c);
        ans += min(diff, 26 - diff);
        cur = c;
    }

    cout << ans << endl;
    return 0;
}