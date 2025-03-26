#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        long long power;
        power = powl(i, i);
        cout << power;
        if (i != n)
        {
            cout << " ";
        }
    }

    return 0;
}