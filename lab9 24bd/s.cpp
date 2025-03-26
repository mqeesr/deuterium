#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    set<int> st;
    vector<int> v;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x;
        st.insert(x);
    }

    for(set<int>::iterator it = st.begin(); it != st.end(); ++it){
        v.push_back(*it);
    }

    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
    cout << endl;

    while(next_permutation(v.begin(), v.end())){
        for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
        cout << endl;
    }
}