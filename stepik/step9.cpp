#include <iostream>
using namespace std;

int main() {

int n;
cin >> n;

int a = 0, b = 1, fib = 0;

    if (n == 0) {
        fib = 0;
    } else if (n == 1) {
        fib = 1;
    } else {

int i = 2;

while (i <= n) {
     fib = a + b;
     a = b;
     b = fib;
    i++;
}
    }

cout << fib;


    return 0;
}
