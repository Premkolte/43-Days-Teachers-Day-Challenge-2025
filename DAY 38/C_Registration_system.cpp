#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    map<string,int> mp;
    while (t--) {
        string s;
        cin>>s;
        mp[s]++;

        if(mp[s]>1){
            cout<<s<<mp[s]-1<<"\n";
        }
        else{
            cout<<"OK"<<"\n";
        }
    }
    
    return 0;
}