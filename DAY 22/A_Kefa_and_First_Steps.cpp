#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_len = 1, cur_len = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] >= a[i-1]) {
            cur_len++;
        } else {
            cur_len = 1;
        }
        if (cur_len > max_len) max_len = cur_len;
    }

    cout << max_len << endl;
    return 0;
}