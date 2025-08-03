#include<bits/stdc++.h>
using namespace std;    

bool isLucky(int num) {
    if (num == 0) return false;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    int lc = 0;
    for(auto i : s){
        if(i == '4' || i == '7'){
            lc++;
        }
    }

    if(isLucky(lc)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}