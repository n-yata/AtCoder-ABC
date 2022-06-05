#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int v,a,b,c;
    cin >> v >> a >> b >> c;
    v %= a+b+c;
    string ans;
    if(v < a) ans = "F";
    else if(v < a+b) ans = "M";
    else if(v < a+b+c) ans = "T";
    cout << ans << endl;
    return 0;
}