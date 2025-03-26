#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    string s;
    cin >> s;
    vector<string> v;

    sort(s.begin(), s.end());
    v.push_back(s);

    while(next_permutation(s.begin(), s.end())){
        v.push_back(s);
    }

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    return 0;
}