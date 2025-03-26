#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    double x, y, z, t, sum = 0, cnt = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z >> t;
        cnt += t;
        if (int(z) < 20 || int(x + y) < 30)
        {
            continue;
        }
        sum += (1 + (x + y + z - 50 - (int(x + y + z) % 5)) / 5 * 1 / 3) * t;
    }
    cout << sum / cnt;
}