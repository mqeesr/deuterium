#include <iostream>
using namespace std;

int main(){
    int n, c1, c2;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int num;
        cin >> num;

        int exp1 = num/3;
        c1 = c2 = exp1;
        int exp2 = num%3;
        if(exp2 > 1){
            c2 = c1 + 1;        
        }
        else if(exp2 == 1){
            c1 = c2 + 1;
        }

        cout << c1 << " " << c2 << endl;
    }
}