#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
bool is_prime(int n){
    if (n==0||n==1){
        return false;
    }
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            return false;
        }
    }
   return true;

}
int main () {
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
    }
    int sum=0;
    for (int i=0; i<n; i++){
    if (is_prime(abs(v[i]))){
        sum++;
    }}
    cout<<sum<<endl;



    return 0;
}