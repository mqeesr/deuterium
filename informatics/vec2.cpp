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

    int counter = 0;
    for (int i = 0; i < n - 1; i++) {  
        if (v[i + 1] > v[i]) {
            counter++;
        }
    }

    cout << counter;
}
