#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    vector<ull> v(64);
    v[0] = 1;
    repn(i,1,64) v[i] = v[i-1]*2;
    ull ans = 0;
    rep(i,64){
        int a;
        cin >> a;
        if(a) ans += v[i];
    }
    cout << ans << endl;
    return 0;
}