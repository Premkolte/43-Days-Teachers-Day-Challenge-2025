#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int> v;

    for(auto i:s){
        if(i!='+'){
            v.push_back(i-'0');
        }
    }

    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i != v.size()-1) cout<<"+";
    }

    return 0;
}