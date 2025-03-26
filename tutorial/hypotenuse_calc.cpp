#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    double c;

    cin >> a >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    cout << c;


    return 0;
}