#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    rep(i,n){
        int a;
        cin >> a;
        v.push_back(make_pair(a,i+1));
    }
    sort(v.rbegin(),v.rend());
    cout << v[1].second << endl;
    return 0;
}