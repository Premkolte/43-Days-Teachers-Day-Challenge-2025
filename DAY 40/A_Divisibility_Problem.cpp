#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a, b;
        cin >> a >> b;
        long long rem = a % b;
        if (rem == 0) {
            cout << 0 << "\n";
        } else {
            cout << b - rem << "\n";
        }
    }
    return 0;
}