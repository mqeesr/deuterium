#include <iostream>
using namespace std;

int main() {
    int n, max, count;
    max = 0;
    count = 0;
    cin >> n;

    while (n != 0) {
        if (n > max) {
            max = n;
            count = 1;
        } else if (n == max) {
            count++;
        }
        cin >> n;
    } 



 cout << count;

    return 0;
}
