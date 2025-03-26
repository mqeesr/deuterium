#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    srand(time(NULL));

    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n <= 0) {
        cout << "The number must be greater than 0!" << endl;
        return 1;
    }

    string S = "";
    cout << "Generated sequence: ";
    for (int i = 0; i < n; i++) {
        char c = 'a' + rand() % 26;
        S += c;
        cout << c << " ";
    }
    cout << endl;

    unordered_set<char> processed; 
    bool foundRepeat = false;

    for (int i = 0; i < n; i++) {
        char currentChar = S[i];

        if (processed.count(currentChar)) continue;
        processed.insert(currentChar);

        for (int j = i + 1; j < n; j++) {
            if (S[j] == currentChar) {
                foundRepeat = true;
                bool foundAB = false;

                for (int k = i + 1; k < j; ++k) {
                    if (S[k] == 'a' || S[k] == 'b') {
                        foundAB = true;
                        break;
                    }
                }

                if (foundAB) {
                    cout << "Character '" << currentChar << "' appears more than once, and 'a' or 'b' is found between occurrences." << endl;
                } else {
                    cout << "Character '" << currentChar << "' appears more than once, but there is no 'a' or 'b' between occurrences." << endl;
                }
                break;
            }
        }
    }

    if (!foundRepeat) {
        cout << "No character appears more than once." << endl;
    }

    return 0;
}
