#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    bool ok = true;
    rep(i,n){
        if(a[i]%2 == 0){
            if(a[i]%3 != 0 && a[i]%5 != 0) ok = false;
        }
    }
    if(ok) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
    return 0;
}