#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int v, s;
    int counter = -1;
    int maxValue = 0;

    for (int i = 1; i <= n; i++) {
        cin >> v >> s;
        if (v && s > maxValue) {
            maxValue = v;
        counter = i;
        }
            
    }
    cout << counter;
}
