#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    string ans;
    n *= 2;
    rep(i,n){
        if(i%2 == 0) ans += s[i/2];
        else ans += t[i/2];
    }
    cout << ans << endl;
    return 0;
}