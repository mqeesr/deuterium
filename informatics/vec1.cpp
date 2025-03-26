#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
    cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++) { 
        if ((v[i] > 0 && v[i + 1] > 0) || (v[i] < 0 && v[i + 1] < 0)) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}
