#include <iostream>
using namespace std;

int main() {

int n, max1, max2;
max1 = 1, max2 = 0;
cin >> n;

while (n != 0) {
    if (n >= max1) {
        max2 = max1;
        max1 = n;
    } if (n < max1 && n > max2) {
        max2 = n;
    }
    cin >> n;
}
     cout << max2;

    return 0;
}
