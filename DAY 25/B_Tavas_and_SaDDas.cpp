#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int len = n.size();
    int idx = 0;

    for (int i = 1; i < len; i++) {
        idx += (1 << i);
    }

    int val = 0;
    for (char c : n) {
        val = val * 2 + (c == '7');
    }
    idx += val + 1;

    cout << idx << endl;
    return 0;
}