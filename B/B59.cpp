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
    int size = a.size()-b.size();
    if(size < 0) rep(i,abs(size)) a = '0'+a;
    else if(size > 0) rep(i,size) b = '0'+b;
    if(a > b) puts("GREATER");
    else if(a < b) puts("LESS");
    else puts("EQUAL");
    return 0;
}