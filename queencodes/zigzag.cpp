#include <iostream>
using namespace std;

int main(){
    int n, maxVal = 0, maxInd = 0;
    cin >> n;
    
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxInd = i+1;
        }
    }
    
    cout << maxInd << endl;
}