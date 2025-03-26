#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;
    long long d = b * b - 4 * a * c;

    if (a == 0 && b == 0 && c == 0) {
        cout << -1;
    } else if (a == 0 && b == 0 || d < 0) {
        cout << 0;
    } else if (a == 0) {
        cout << 1 << "\n";
        cout << -c * 1.0 / b;
    } else if (d == 0) {
        cout << 1 << "\n";
        cout << fixed << setprecision(10) << -b * 1.0 / (2 * a);
    } else {
        cout << 2 << "\n";
        cout << fixed << setprecision(10) 
             << (-b - sqrt(d)) / (2.0 * a) << "\n"
             << (-b + sqrt(d)) / (2.0 * a) << "\n";
    }
}
