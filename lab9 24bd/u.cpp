#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
    int n,m;
    cin>>n;
    vector<int>v;
    
    for (int i=0; i<n; i++){
        cin>>m;
        v.push_back(m);}

        vector<int> sorted=v;

        sort(sorted.begin(), sorted.end());
        vector<int>mismatch;
        for (int i=0; i<n; i++){
            if (v[i]!=sorted[i]){
                mismatch.push_back(i);
            }
        }
        if (mismatch.size()==0){
            cout<<"YES";
        }
        else if( mismatch.size()==2){
            int i =mismatch[0];
            int j=mismatch[1];
            swap(v[i],v[j]);
        
            if (v==sorted){
                cout<<"YES";
            }
            else {cout<<"NO";}
           
        }
         else{ cout<<"NO";}

    

    return 0;
    
}
