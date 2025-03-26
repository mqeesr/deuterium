#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define pb push_back

#define f first
#define s second
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
using namespace std;

int main()
{
    fast;

    int n;
    cin >> n;

    int max = 0;

    vector<int> pogoda(n);

    for (int i = 0; i < n; i++) {
        cin >> pogoda[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (pogoda[i] > 0)
            cnt++;
        else
            cnt = 0;
        if (max <= cnt)
            max = cnt;
    }
    cout << max;

}
