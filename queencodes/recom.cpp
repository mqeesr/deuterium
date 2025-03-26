#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 0) cout << 0 << endl;

    vector<vector<long long>> arr(n, vector<long long>(2, 0));
    arr[0][0] = a[0];
    arr[0][1] = a[0];

    for (int i = 1; i < n; ++i) {
        arr[i][0] = max(arr[i-1][0], arr[i-1][1]) + a[i];
        arr[i][1] = arr[i-1][0] + a[i];
    }

    long long max_gain = max(arr[n-1][0], arr[n-1][1]);
    cout << max_gain << endl;

    
}