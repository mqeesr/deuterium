#include<bits/stdc++.h>
using namespace std;

int main () {

int p, x, y, k;
cin >> p >> x >> y >> k;

int cop = x * 100 + y;

cop = cop * pow(1 + (double) p / 100.0, k);

int rub = cop / 100, cop2 = cop % 100;

cout << rub << " " << cop2;

    return 0;
}