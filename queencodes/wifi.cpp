#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    int left = 1, right = 10000, attempts = 0;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        attempts++;
        if (mid == X) break;
        if (mid < X) left = mid + 1;
        else right = mid - 1;
    }

    cout << attempts << endl;
    
}
