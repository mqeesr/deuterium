#include <iostream>
using namespace std;

int main(){
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;

    if(r1 > r2 && r1 > r3){
        if((r2 + r3) <= r1) cout << "YES";
        else cout << "NO";
    } 
    else cout << "NO";



    return 0;
}