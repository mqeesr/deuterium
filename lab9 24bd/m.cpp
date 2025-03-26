#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sequence;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            sequence.push_back(i);
        }
    }

    for (int i = 0; i < sequence.size(); i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    return 0;
}