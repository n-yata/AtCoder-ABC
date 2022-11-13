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
    int n,x,y;
    cin >> n >> x >> y;
    vector<vector<int>> to(n+1);
    rep(i,n-1){
        int a,b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    vector<int> ans;
    auto dfs = [&](auto f, int v, int p = -1) -> bool {
        if(v == x){
            ans.push_back(v);
            return true;
        } 
        for(int u : to[v]){
            if(u == p) continue;
            if(f(f, u, v)){
                ans.push_back(v);
                return true;
            } 
        }
        return false;
    };
    dfs(dfs,y);

    rep(i,ans.size()) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}