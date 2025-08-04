#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;

    int low=0, upp=0;

    for(auto i:s){
        if(islower(i)){
            low++;
        } else {
            upp++;
        }
    }

    if(low>=upp){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }

    cout<<s<<endl;
}