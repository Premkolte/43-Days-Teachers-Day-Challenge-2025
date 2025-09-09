#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    vector<int> a(t);
    for (int i = 0; i < t; ++i) {
        cin >> a[i];
    }
 
    int maxx = 1, curr = 1;
    for (int i = 1; i < t; ++i) {
        if (a[i] >= a[i-1]) {
            curr++;
        } else {
            curr = 1;
        }
        if (curr > maxx) maxx = curr;
    }
 
    cout << maxx << endl;
    return 0;
}