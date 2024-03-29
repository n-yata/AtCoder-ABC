#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<bool> fl(360,false);
    fl[0] = true;
    int p = 0;
    rep(i,n){
        int a;
        cin >> a;
        p += a;
        p %= 360;
        fl[p] = true;
    }
    int res = 0, cur = 0;
    for(int i = 0; i <= 360; i++){
        if(fl[i%360]){
            res = max(res,cur);
            cur = 0;
        }
        cur++;
    }
    cout << res << endl;
    return 0;
}