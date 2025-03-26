#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int i = 0, count = 0;
        
        while (count < k) {
            i++;
            if (i % 3 == 0 || i % 10 == 3) continue;
            count++;
        }
        
        cout << i << '\n';
    }
}
