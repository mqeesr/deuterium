#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int maxZero = 0, counter = 0;

    for (char a : s) {
        if (a == '0') {
            counter++;
            if(counter > maxZero){
                maxZero = counter;
            }
        } else {
            counter = 0;
        }
    }

    cout << maxZero;
    return 0;
}
