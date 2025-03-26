#include <iostream>
using namespace std;

int main() {

int n, k;
cin >> n >> k;

int m;
m = (k / 100) + (k % 10);

cout << n + m;

    return 0;
}