#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/**
 * 数値の前半後半を組み合わせ
 * */
ll f(ll x){
    string s = to_string(x);
    return stoll(s+s);
}

int main(){
    ll n;
    cin >> n;
    ll x = 1;
    // n以下までループする
    while(f(x) <= n) ++x;
    ll ans = x-1;
    cout << ans <<endl;
    return 0;
}