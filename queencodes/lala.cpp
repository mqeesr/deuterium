#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map <string, int> m;
    for(int i = 0 ; i < n ; i++){
        string s;
        int ch;
        cin >> s >> ch;

        m[s] = ch;
    }

    map <string, int>::iterator it = m.begin();
    for(it ; it != m.end() ; it++){
        cout << it->second << endl;
    }


}