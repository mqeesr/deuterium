#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t, sum = 0;
    cin >> n >> t;

    vector <int> kilem(n);
    for(int i = 0 ; i < n ; i++){
        cin >> kilem[i];
    }
    
    for(int i = 0 ; i < n ; i++){
        sum += (t/kilem[i]);
    }

    cout << sum;
}