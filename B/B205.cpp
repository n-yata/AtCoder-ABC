#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i,n) cin >> v[i];
    map<int,int> m;
    rep(i,n){
        auto x = find(v.begin(), v.end(),i+1);
        if(x == v.end()){
            cout << "No" << endl;
            return 0;
        }
        m[v[i]]++;
    }
    rep(i,n){
        if(m[i+1] != 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}