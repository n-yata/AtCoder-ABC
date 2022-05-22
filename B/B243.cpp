#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    int cnt1 = 0,cnt2 = 0;
    rep(i,0,n)if(a[i] == b[i])cnt1++;
    rep(i,0,n){
        rep(j,0,n){
            if(i == j) continue;
            if(a[i] == b[j])cnt2++;
        }
    }
    cout << cnt1 << endl;
    cout << cnt2 << endl;
    return 0;
}