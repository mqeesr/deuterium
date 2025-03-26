#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, s, sum = 0, count = 0;
    cin >> n >> s;

    vector <int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
 
    sort(arr.begin(), arr.end());
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < s){
            sum += arr[i];
            if(sum <= s) count++;
        }
    }

    cout << count << endl;
    
}