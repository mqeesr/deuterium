#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> reversesequence = v;
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (v[i] == reversesequence[i])
        {
            cout << "OK" << endl;
        }
        else
        {

            cout << "Instead of" << " " << reversesequence[i] << " " << "here was" << " " << v[i] << endl;
        }
    }

    cout << endl;

    return 0;
}