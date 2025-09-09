#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0,j=0;
    int cnt=0;

    while(i<n && j<m){
        if((a[i] == b[j]) || (a[i] == b[j] - 1) || (a[i] == b[j] + 1)){
            cnt++;
            i++;
            j++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout<<cnt<<endl;
    return 0;

}
