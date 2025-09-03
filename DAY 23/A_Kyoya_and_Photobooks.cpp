#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<string> photobooks;
    int n = s.size();

    for (int i = 0; i <= n; ++i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            string t = s.substr(0, i) + c + s.substr(i);
            photobooks.insert(t);
        }
    }

    cout << photobooks.size() << endl;
    return 0;
}