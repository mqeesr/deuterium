#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    k = k % n;
    rotate(v.begin(), v.begin() + k, v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}