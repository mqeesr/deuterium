#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> num(2 * n);
        int odd_count = 0, even_count = 0;
        
        for (int i = 0; i < 2 * n; i++) {
            cin >> num[i];  
            if (num[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
        
        if (odd_count == even_count)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}
