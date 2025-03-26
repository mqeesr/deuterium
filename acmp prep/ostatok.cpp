#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long r = a % b;
    if (r < 0) {
        r += abs(b);
    }

    cout << r;

    return 0;
}
