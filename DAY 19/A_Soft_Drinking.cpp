#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = k * l / nl;
    int slices = c * d;
    int salt = p / np;

    int ans = min({drinks, slices, salt}) / n;


    cout << ans << endl;
    return 0;
}