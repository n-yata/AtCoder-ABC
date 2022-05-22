#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];

    vector<int> fl(w+1);

    rep(i,0,n){
        int s = a[i];
        if(s <= w) fl[s] = 1;
    }

    rep(i,0,n)rep(j,i+1,n){
        int s = a[i]+a[j];
        if(s <= w) fl[s] = 1;
    }

    rep(i,0,n)rep(j,i+1,n)rep(k,j+1,n){
        int s = a[i]+a[j]+a[k];
        if(s <= w) fl[s] = 1;
    }

    int ans = 0;
    rep(i,1,w+1) ans += fl[i];
    cout << ans << endl;
    return 0;
}