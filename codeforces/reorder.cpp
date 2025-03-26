#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;

bool isEven(int x) {
    return x % 2 == 0;
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        stable_partition(a.begin(), a.end(), isEven);

        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (__gcd(a[i], 2 * a[j]) > 1) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
