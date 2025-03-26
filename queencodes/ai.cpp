#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    int n = s1.size(), count = 0;   

    for (int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            count++;
        }
    }
    
    if (count * 10 < n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
}
