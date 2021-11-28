#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string a,b;
    cin >> a >> b;
    int maxs = max(a.size(), b.size());
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    bool ok = true;
    rep(i,maxs){
        if(i >= a.size()) continue;
        if(i >= b.size()) continue;
        int sumN = (a[i]-'0')+(b[i]-'0');
        string sum = to_string(sumN);
        if(sum.size() > 1) ok = false;
    }
    if(ok) puts("Easy");
    else puts("Hard");
}