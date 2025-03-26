#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;   

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    int minVal = 30000, maxVal = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < minVal) minVal = arr[i];
        if(arr[i] > maxVal) maxVal = arr[i];
    }

    cout << minVal << " " << maxVal;
}
