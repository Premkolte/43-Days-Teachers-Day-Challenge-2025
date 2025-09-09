#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost = 0;
    // Option 1: Only single tickets
    cost = n * a;

    // Option 2: Use as many m-tickets as possible, then singles for remainder
    int m_tickets = n / m;
    int remainder = n % m;
    int cost2 = m_tickets * b + remainder * a;
    
    // Option 3: Use only m-tickets (even if some rides are wasted)
    int cost3 = ((n + m - 1) / m) * b;
    cout << min({cost, cost2, cost3}) << endl;
    return 0;
}