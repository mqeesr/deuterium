#include <iostream>
using namespace std;

int main () {

int n, m, x, y;
cin >> n >> m >> x >> y;

int k;
    if(n>m){
    k = n;
    n = m;
    m = k;
    } 
    
int short_side;
if (x < n - x) {
    short_side = x;
} else {
    short_side  = n - x;
}

int long_side;
if (y < m - y) {
    long_side = y;
} else {
    long_side = m - y;
}

int min_dist;
if (long_side > short_side) {
    min_dist = short_side;
} else {
    min_dist = long_side;
}

cout << min_dist; 

    return 0;
}