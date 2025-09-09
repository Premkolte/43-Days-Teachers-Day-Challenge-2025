#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        
        int arr[5] = {100,20,10,5,1};
        int ans = 0;
        for(int i=0;i<5;i++){
            ans += n/arr[i];
            n = n%arr[i];
        }
        cout << ans << "\n";

        return 0;
    }
