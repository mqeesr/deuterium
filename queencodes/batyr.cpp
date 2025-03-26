#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, k, count = 0;
   cin >> n >> k;

   vector <int> ba(n);
   for(int i = 0; i < n; i++){
    cin >> ba[i];
   }

   for(int i = 0 ; i < n ; i++){
    if((ba[i+1] - ba[i]) <= k){
        count++;
    }
    }

    cout << count;

    
}