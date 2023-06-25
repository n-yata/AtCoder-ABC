#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<string> v(n);
    int idx = 0;
    ll p = 9999999999;
    rep(i,n){
        string s;
        int a;
        cin >> s >> a;
        v[i] = s;
        if(a < p){
            idx = i;
            p = a;
        }
    }
    vector<string> ans;
    repn(i,idx,n) ans.push_back(v[i]);
    rep(i,idx) ans.push_back(v[i]);
    rep(i,n) cout << ans[i] << endl;
    return 0;
}