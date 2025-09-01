#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for(int i = 0; i < m; ++i) {
        cin >> arr[i];
    }
    long long time = 0;
    int current = 1;
    for(int i = 0; i < m; ++i) {
        if(arr[i] >= current) {
            time += arr[i] - current;
        } else {
            time += n - (current - arr[i]);
        }
        current = arr[i];
    }
    cout << time << endl;
    return 0;
}