#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double radius, area;
    const double pi = 3.14;
    cin >> radius;
    area = pi * pow(radius, 2);
    cout << area;



    return 0;
}