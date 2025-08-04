#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;cin>>t;
    int cnt=0;

    while(t--){
        int p,q;cin>>p>>q;

        if(q-p>=2){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}