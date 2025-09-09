#include <bits/stdc++.h>
using namespace std;

// Sieve to precompute all primes up to 1e6
const int MAX = 1e6 + 1;
vector<bool> is_prime(MAX, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i)
                is_prime[j] = false;
        }
    }
}

int main() {
    sieve();
    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        long long sq = sqrt(x);
        if (sq * sq == x && is_prime[sq])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}