#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    vector<string> v(4);
    rep(i,4) cin >> v[i];
    rep(i,4)rep(j,4){
        if(i == j) continue;
        if(v[i] == v[j]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}