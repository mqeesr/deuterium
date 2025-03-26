#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int n, k;

    vector<int> v;

    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        v.push_back(i);
    }
    int count = 0, ans = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == i + 1) count++;
    }
    if(count == k) ans++;

    while(next_permutation(v.begin(), v.end())){
        count = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == i + 1) count++;
        }
        if(count == k) ans++;
    }
    cout << ans;

}