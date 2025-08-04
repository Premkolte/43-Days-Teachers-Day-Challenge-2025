#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;

    set<char> charset(s.begin(), s.end());

    if(charset.size() % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    } else{
        cout<<"IGNORE HIM!"<<endl;
    }

}