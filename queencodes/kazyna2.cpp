#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n, sum = 0;
   cin >> n;
 
   vector <int> ba(n);
   if(n > 7){
   for(int i = 0; i < n; i++){
    cin >> ba[i];
   }

   for(int i = 0 ; i < 7 ; i++){
    sum+=ba[i];
    }
 
    cout << sum;
   } 
   else {
    for(int i = 0; i < n; i++){
        cin >> ba[i];
       }
      
    sort(ba.begin(), ba.end());
    reverse(ba.begin(), ba.end());
        
    for(int i = 0 ; i < 7 ; i++){
        sum+=ba[i];
    }
     
    cout << sum;

   }
}