#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2>> y2>> r2;
 
    double d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    if(r1 + r2 >= d && d + r2 >= r1 && d + r1 >= r2) cout << "YES";
    else cout << "NO";
 
    return 0;
}