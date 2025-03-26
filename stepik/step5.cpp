#include <iostream>
using namespace std;

int main () {

int n;
cin >> n;

int power = 1;
while (power < n) {
    power *= 2;
}

if (power == n) {
    cout << "YES";
} else {
    cout << "NO";
}


   return 0;
}