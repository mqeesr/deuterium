#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
        cout << 0;

    if (a != 0)
        cout << a;

    if (b != 0)
    {
        if (a != 0 && b > 0)
            cout << "+";
        if (abs(b) != 1)
            cout << b;
        else if (b == -1)
            cout << "-";
        cout << "x";
    }

    if (c != 0)
    {
        if ((a != 0 || b != 0) && c > 0) 
        cout << "+";
        if (abs(c) != 1)
            cout << c;
        else if (c == -1)
            cout << "-";
        cout << "y";
    }

    return 0;
}