#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    double mdiff = 0;

    mdiff = max(mdiff, (double)arr[0]);
    mdiff = max(mdiff, (double)(l - arr[n - 1]));

    for (int i = 1; i < n; i++) {
        mdiff = max(mdiff, (arr[i] - arr[i - 1]) / 2.0);
    }

    cout << fixed << setprecision(10) << mdiff << "\n";
    return 0;
}