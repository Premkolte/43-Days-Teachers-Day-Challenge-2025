#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if(n<=30){
            cout<<"NO\n";
            continue;
        }
        else{
            if(n==36 || n==40 || n==44){
                cout<<"YES\n";
                cout<<"6 10 15 "<<n-31<<"\n";
            }
            else{
                cout<<"YES\n";
                cout<<"6 10 14 "<<n-30<<"\n";
            }
        }

    }
    return 0;
}