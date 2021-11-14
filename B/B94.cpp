#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    int c1 = 0;
    for(int i = x; i > 0; i--){
        if(find(a.begin(),a.end(),i) == a.end()) continue;
        c1++;
    }
    int c2 = 0;
    for(int i = x; i <= n; i++){
        if(find(a.begin(),a.end(),i) == a.end()) continue;
        c2++;
    }
    cout << min(c1,c2) << endl;
    return 0;
}