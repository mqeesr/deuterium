#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    bool is_palindrome = false;

    do {
        int size = s.length();
        bool palindrome = true;
        for (int i = 0; i < size / 2; i++) {
            if (s[i] != s[size - i - 1]) {
                palindrome = false;
                break;
            }
        }

        if (palindrome) {
            is_palindrome = true;
            cout << "ZA WARUDO TOKI WO TOMARE" << endl;
            break;
        }
    } while (next_permutation(s.begin(), s.end()));

    if (!is_palindrome) {
        cout << "JOJO" << endl;
    }

    return 0;
}