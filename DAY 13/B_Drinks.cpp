#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int orin = n;

    int sum=0;
    while(n--){
        int a;cin>>a;

        sum = sum + a;
    }
    double ans = double(sum)/orin;
    cout<<fixed<<setprecision(12)<<ans<<endl;

    return 0;
}