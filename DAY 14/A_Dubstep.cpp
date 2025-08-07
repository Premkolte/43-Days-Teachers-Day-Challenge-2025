#include<bits/stdc++.h>
using namespace std;    

int main(){
    string s;
    cin >> s; 
    
    string ans = "";
    int c = 0;

    for(int i=0;i<s.length();i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(ans.length() > 0 && (i == 0 || s[i-1] != ' ') && c==0) {
                ans.push_back(' ');
                c=1;
            }
            i += 2;
        }
        else{
            c = 0;
            ans.push_back(s[i]); 
        }
    }
    cout << ans << endl;
}