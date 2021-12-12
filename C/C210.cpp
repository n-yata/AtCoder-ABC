#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> c(n+1);
    for(int i = 1; i <= n; i++) cin >> c[i];
    map<int,int> mp;
    for(int i = 1; i <= k; i++) mp[c[i]]++;
    int ans = mp.size();
    for(int i = k+1; i <= n; i++){
        mp[c[i]]++;
        mp[c[i-k]]--;
        if(mp[c[i-k]] == 0) mp.erase(c[i-k]);
        ans = max(ans,(int)mp.size());
    }
    cout << ans << endl;
    return 0;
}