#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = x++; // first gonna store x and then +1
    int z = ++x; // fiirst gonna increase by 1 then store it
    cout << x;

    return 0;
}