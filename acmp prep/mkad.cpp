#include <bits/stdc++.h>
using namespace std;

int main() {

    int v, t;
    cin >> v >> t;

    int position = (1 + v * t) % 109;

    if (position <= 0) position += 109;

    cout << position;
} 
