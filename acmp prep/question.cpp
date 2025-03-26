#include <iostream>
using namespace std;

int main() {
    int s, p;
    cin >> s >> p;

    for (int x = 1; x <= 1000; x++) {  
        for (int y = 1; y <= 1000; y++) {  
            if (x + y == s && x * y == p) {
                cout << x << " " << y;
                return 0;
            }
        }
    }

    return 0;
}
