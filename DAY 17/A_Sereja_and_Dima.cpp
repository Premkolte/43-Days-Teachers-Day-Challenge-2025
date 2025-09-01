#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; 
    while(l <= r) {
        if(arr[l] > arr[r]) {
            if(turn) sereja += arr[l];
            else dima += arr[l];
            l++;
        } else {
            if(turn) sereja += arr[r];
            else dima += arr[r];
            r--;
        }
        turn = !turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}