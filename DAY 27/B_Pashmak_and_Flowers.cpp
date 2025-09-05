#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    int a=0,b=0;

    for(int i=0;i<n;i++){
        if(arr[i]==arr[0]) a++;
        if(arr[i]==arr[n-1]) b++;
    }

    if(arr[0]==arr[n-1]){
        cout << 0 << " " << 1LL * n * (n - 1) / 2 << endl;
    }
    else{
        cout<<(arr[n-1]-arr[0])<<" ";
        cout<<1LL * a * b<<endl;
    }
}