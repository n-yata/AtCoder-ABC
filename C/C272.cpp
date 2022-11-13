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
    ll n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    vector<ll> x,y;
    rep(i,n){
        if(a[i]%2 == 0) x.push_back(a[i]);
        else y.push_back(a[i]);
    }
    if(x.size() < 2 && y.size() < 2){
        cout << -1 << endl;
        return 0;
    }
    sort(x.rbegin(),x.rend());
    sort(y.rbegin(),y.rend());
    ll maxX = x.size() >= 2 ? x[0]+ x[1] : -1;
    ll maxY = y.size() >= 2 ? y[0]+ y[1] : -1;
    cout << max(maxX,maxY) << endl;
    return 0;
}