#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int bills = 0;
    int denoms[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; ++i) {
        bills += n / denoms[i];
        n %= denoms[i];
    }
    cout << bills << endl;
    return 0;
}