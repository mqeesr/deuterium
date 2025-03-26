#include <iostream>
using namespace std;

int main (){

int n;
cin >> n;

if (n % 2){
    cout << "Super";
} else if (n != n % 2 && n > 2 && n < 5){
    cout << "Not Super";
} else if (n != n % 2 && n > 6 && n < 20) {
    cout << "Super";
} else if (n != n % 2 && n > 20){
    cout << "Not Super";
}


    return 0;
}