#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    int n,m;
    cin>>n;
    vector<int>v;
    int x,k;
    for (int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
     cin>>m;
    for (int i=0; i<m; i++){
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;



    return 0;
}