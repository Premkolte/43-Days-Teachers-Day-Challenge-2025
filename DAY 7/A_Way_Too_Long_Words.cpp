#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        int n = word.length();
        if (word.length() > 10) {
            cout << word[0] << n - 2 << word[n - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
