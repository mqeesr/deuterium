#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;

   vector <int> ba(n);
   for(int i = 0; i < n; i++){
    cin >> ba[i];
   }

   sort(ba.begin(), ba.end());
   for(int i = 0 ;  i < n ; i++){
    cout << ba[ba.size()-1] - ba[i];
    break;
   }
}