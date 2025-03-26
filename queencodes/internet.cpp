#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> videos(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> videos[i];
    }
    
    sort(videos.begin(), videos.end());
    
    int total = 0, count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (total + videos[i] <= s) {
            total += videos[i];
            count++;
        } else {
            break;
        }
    }
    
    cout << count;
    

}