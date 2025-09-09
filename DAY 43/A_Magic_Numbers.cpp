#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();

    for(int i = 0; i < n; i++){
        if(s[i] == '1' && i + 2 < n && s[i+1] == '4' && s[i+2] == '4'){
            i += 2;
            continue;
        }
        else if(s[i] == '1' && i + 1 < n && s[i+1] == '4'){
            i += 1;
            continue;
        }
        else if(s[i] == '1'){
            continue;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}