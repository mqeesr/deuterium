#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool is_palindrome(const vector<int>& v) {
    int size = v.size();
    for (int i = 0; i < size / 2; i++) {
        if (v[i] != v[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    do {
        if (is_palindrome(v)) {
            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
            return 0;
        }
    } while (next_permutation(v.begin(), v.end()));

    cout << "Impossible" << endl;
    return 0;
}