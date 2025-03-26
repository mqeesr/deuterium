#include <iostream>
using namespace std;

int main() {
    string num;
    cin >> num;

    if(num[0] + num[1] + num[2] == num[3] + num[4] + num[5] ) cout << "YES";
    else cout << "NO";
}
