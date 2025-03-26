#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, gcd;
    cin >> a >> b >> c;
    
    vector <int> vec;
    for(int i = 0 ; i < 3 ; i++){
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
    }

    for(int i = 0 ; i < 3 ; i++){
        gcd = __gcd(vec[i], vec[i+1]);
    }

    cout << 1;
}