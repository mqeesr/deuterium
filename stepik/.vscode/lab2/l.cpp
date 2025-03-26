#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int power = 1;
    while (power <= n) {
        cout << power << " ";
        power *= 2;
    }

    return 0;
}
