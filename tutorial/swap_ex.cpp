#include <iostream>
using namespace std;

int main(){

    int a = 1, b = 2;
    int temp = a;
    a = b;
    b = temp;

    cout << a;
    return 0;
}