#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll x;
    int k;
    cin >> x >> k;
    rep(i,k){
        string s = to_string(x);
        reverse(s.begin(),s.end());
        if(s.size() <= i) break;
        int a = s[i]-'0';
        ll y = pow(10,i+1);
        ll z = x%y;
        x -= z;
        if(a > 4) x += y;
    }
    cout << x << endl;
    return 0;
}