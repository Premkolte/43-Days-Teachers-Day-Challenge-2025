#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> students(n); // {rating, index}
    for (int i = 0; i < n; ++i) {
        cin >> students[i].first;
        students[i].second = i;
    }

    sort(students.rbegin(), students.rend()); // sort by rating descending

    vector<int> position(n);
    int rank = 1;
    for (int i = 0; i < n; ++i) {
        if (i > 0 && students[i].first != students[i-1].first) {
            rank = i + 1;
        }
        position[students[i].second] = rank;
    }

    for (int i = 0; i < n; ++i) {
        cout << position[i] << " ";
    }
    cout << endl;
    return 0;
}