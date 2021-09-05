#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    map<int, int> m;
    rep(i,n) m[p[i]] = i+1;
    rep(i,n){
        cout << m[i+1]; 
        if(i != n) cout << " ";
    } 
    cout << endl;
    return 0;
}