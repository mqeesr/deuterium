#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, vector<int>> mp;
    int n, x, y;
    string s, t;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s >> x >> t >> y;
        mp[s + " and " + t].push_back(x + y);
    }

    for (map<string, vector<int>>::iterator it = mp.begin(); it != mp.end(); ++it)
    {
        vector<int> v = it->second;
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << it->first << ' ' << v[i] << '\n';
        }
    }

    return 0;
}