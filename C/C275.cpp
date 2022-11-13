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
const ll MOD = 998244353;

int main(){
    set<P> st;
    vector<P> ps;
    rep(i,9){
        string s;
        cin >> s;
        rep(j,9){
            if(s[j] == '#'){
                st.emplace(i,j);
                ps.emplace_back(i,j);
            }
        }
    }
    int n = ps.size();
    int ans = 0;
    rep(ai,n)rep(bi,n) if(ai != bi){
        P a = ps[ai], b = ps[bi];
        int di = b.first-a.first;
        int dj = b.second-a.second;
        P c(b.first-dj, b.second+di);
        P d(c.first-di, c.second-dj);
        if(st.count(c) && st.count(d)){
            ans++;
        }
    }
    ans /= 4;
    cout << ans << '\n';
    return 0;
}