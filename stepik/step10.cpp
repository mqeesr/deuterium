#include <iostream>
using namespace std;

int main() {
    int current, previous, maxCount = 1, count = 1;

    cin >> previous;

    cin >> current;
    while (current != 0) {
        if (current == previous) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 1;
        }
        previous = current;
        cin >> current;
    }

    cout << maxCount << endl;
    return 0;
}
