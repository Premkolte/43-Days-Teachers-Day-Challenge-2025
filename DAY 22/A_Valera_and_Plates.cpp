#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            if (m > 0) m--;
            else ans++;
        } else {
            if (k > 0) k--;
            else if (m > 0) m--;
            else ans++;
        }
    }

    cout << ans << endl;
    return 0;
}