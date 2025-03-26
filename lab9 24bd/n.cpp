#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

 int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>vs(k);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
     for (int i=0; i<k; i++){
        cin>>vs[i];
    }

    v.erase(unique(v.begin(), v.end()),v.end());
    vs.erase(unique(vs.begin(), vs.end()),vs.end());

    vector <int> merged;
    int max_size=max(v.size(), vs.size());

    for (int i=0; i<max_size; i++){
    if (i<v.size()){
        merged.push_back(v[i]);
    }
    if (i<vs.size()){
        merged.push_back(vs[i]);
    }

}
     merged.erase(unique(merged.begin(), merged.end()),merged.end());


    for (int i=0; i<merged.size(); i++){
        cout<<merged[i]<<" ";
    }
    cout <<endl;


    return 0;
 }