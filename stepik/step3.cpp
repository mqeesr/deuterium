#include <iostream>
using namespace std;

int main() {
    int A1, B1, C1, A2, B2, C2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;

    bool firstInSecond = (A1 <= A2 && B1 <= B2 && C1 <= C2) ||
                         (A1 <= A2 && C1 <= B2 && B1 <= C2) ||
                         (B1 <= A2 && A1 <= B2 && C1 <= C2) ||
                         (B1 <= A2 && C1 <= B2 && A1 <= C2) ||
                         (C1 <= A2 && A1 <= B2 && B1 <= C2) ||
                         (C1 <= A2 && B1 <= B2 && A1 <= C2);

    bool secondInFirst = (A2 <= A1 && B2 <= B1 && C2 <= C1) ||
                         (A2 <= A1 && C2 <= B1 && B2 <= C1) ||
                         (B2 <= A1 && A2 <= B1 && C2 <= C1) ||
                         (B2 <= A1 && C2 <= B1 && A2 <= C1) ||
                         (C2 <= A1 && A2 <= B1 && B2 <= C1) ||
                         (C2 <= A1 && B2 <= B1 && A2 <= C1);

    if (firstInSecond && secondInFirst) {
        cout << "Boxes are equal";
    } else if (firstInSecond) {
        cout << "The first box is smaller than the second one";
    } else if (secondInFirst) {
        cout << "The first box is larger than the second one";
    } else {
        cout << "Boxes are incomparable";
    }

    return 0;
}
