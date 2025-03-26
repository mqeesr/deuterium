#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int fr, sc, th;

    if (a <= b && a <= c) {
        fr = a;

        if (b <= c) {
            sc = b;
            th = c;
        } else {
            sc = c;
            th = b;
        }

    } else if (b <= a && b <= c) {
        fr = b;

        if (a <= c) {
            sc = a;
            th = c;
        } else {
            sc = c;
            th = a;
        }
    } else {
        fr = c;
        if (a <= b) {
            sc = a;
            th = b;
        } else {
            sc = b;
            th = a;
        }
    }

    cout << fr << " " << sc << " " << th;
    return 0;
}
