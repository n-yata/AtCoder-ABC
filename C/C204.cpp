#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> to(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
    }
    int ans = 0;
    rep(sv,n){
        queue<int> q;
        vector<int> used(n);
        used[sv] = 1;
        ++ans;
        q.push(sv);
        while(q.size()){
            int v = q.front(); q.pop();
            for(int u : to[v]){
                if(used[u]) continue;
                ++ans;
                used[u] = 1;
                q.push(u);
            }
        }
    }
    cout << ans << endl;
    return 0;
}