#include <iostream>
using namespace std;

int main() {
    int n, k, mod = 1e9 + 7;
    cin >> n >> k;
    
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = (res * k) % mod;
    }

    cout << res << endl;
    
}
