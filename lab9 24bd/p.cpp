#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, x;
    string s;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        s = "";
        while(x > 0){
            s += char((x % 2) + '0');
            x /= 2;
        }
        reverse(s.begin(), s.end());
    }

}