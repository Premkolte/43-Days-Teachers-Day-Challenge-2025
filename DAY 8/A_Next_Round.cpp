#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int kth = a[k-1];
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0 && a[i] >= kth) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}