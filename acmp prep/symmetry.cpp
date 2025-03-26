#include <iostream>
using namespace std;

int main() {
    long long x1, y1, x2, y2, xA, yA, xB, yB;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> xA >> yA;
    
    if (x1 == x2) { 
        xB = 2 * x1 - xA;
        yB = yA;
    } else if (y1 == y2) { 
        xB = xA;
        yB = 2 * y1 - yA;
    }

    cout << xB << " " << yB;
    return 0;
}
