#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n >= 1){
        cout << (n * (n + 1)) / 2;
    }
    else {
        if(n <= 1){
            cout << (n * (1 - n)) / 2 + 1;
        }
    }
    return 0;
}
