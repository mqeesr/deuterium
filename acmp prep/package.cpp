#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int l1, w1, h1, l2, w2, h2, lc, wc, hc;
    
    cin >> l1 >> w1 >> h1;
    if (l1 < w1) swap(l1, w1);
    
    cin >> l2 >> w2 >> h2;
    if (l2 < w2) swap(l2, w2);
    
    cin >> lc >> wc >> hc;
    if (lc < wc) swap(lc, wc);

    if (h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) {
        cout << "YES" << endl;
    }
    else if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc && h1 <= hc && h2 <= hc) {
        if (l1 <= lc && w1 <= wc) {
            if ((l2 <= wc - w1 && w2 <= lc) || (w2 <= wc - w1 && l2 <= lc) ||
                (l2 <= lc - l1 && w2 <= wc) || (w2 <= lc - l1 && l2 <= wc)) {
                cout << "YES" << endl;
            }
            else if (w1 <= lc && l1 <= wc) {
                if ((l2 <= wc - l1 && w2 <= lc) || (l2 <= lc && w2 <= wc - l1) ||
                    (l2 <= lc - w1 && w2 <= wc) || (w2 <= lc - w1 && l2 <= wc)) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
