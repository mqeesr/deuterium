#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int heads = 0, tails = 0; 

    for (int i = 0; i < n; ++i) {
        int coin;
        cin >> coin;
        if (coin == 1) {
            ++heads;
        } else {
            ++tails; 
        }
    }

    cout << min(heads, tails);

    return 0;
}
