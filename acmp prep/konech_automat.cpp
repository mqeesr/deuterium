#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    while (k--) {
        int n, m;
        cin >> n >> m;

        long long d = 19 * m + ((long long)(n + 239) * (n + 366)) / 2;
    
        cout << d;
    }

    return 0;
}
