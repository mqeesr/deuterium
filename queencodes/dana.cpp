#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> prib(n);
    for (int i = 0; i < n; i++) {
        cin >> prib[i];
    }
    
    sort(prib.rbegin(), prib.rend());
    
    long long max_prib = 0;
    for (int i = 0; i < k; i++) {
        max_prib += prib[i];
    }
    
    cout << max_prib << endl;

}
