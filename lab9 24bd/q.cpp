#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    int n,x;
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i=0; i<v.size(); i++){
        cout<< v[i]<< " ";
    }
    cout<<endl;



    return 0;
}