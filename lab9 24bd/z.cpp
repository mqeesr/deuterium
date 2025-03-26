#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(pair<pair<int, int>,int>p1, pair<pair<int, int>,int>p2 ){
    if (p1.first.first!=p2.first.first)
    return p1.first.first<p2.first.first;
    else if (p1.first.second!=p2.first.second)
    return p1.first.second < p2.first.second;
    else 
    return p1.second < p2.second;

}
int main (){
    int n,x,y,z;
    cin>>n;
    pair<pair<int,int>,int> p[105];
    for (int i=0; i<n; i++){
        cin>>x>>y>>z;
        p[i]={{x,y},z};
    }
    sort(p, p+n,cmp);
    for (int i=0; i <n; i++){
        cout<< p[i].first.first<<" "<< p[i].first.second<<" "<< p[i].second <<endl;
    }


    return 0;

}