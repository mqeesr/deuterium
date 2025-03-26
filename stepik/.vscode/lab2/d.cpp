#include <iostream>
#include <cmath>
using namespace std;

int main () {

int n, k;
cin >> n >> k;

int tot_side = 2 * n;
int min = ceil((tot_side + k - 1) / k);

cout << min * 2;



    return 0;
}