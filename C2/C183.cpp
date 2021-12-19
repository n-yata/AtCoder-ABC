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
    vector<vector<int>> t(n,vector<int>(n));
    rep(i,n)rep(j,n) cin >> t[i][j];
    vector<int> index;
    rep(i,n) index.push_back(i);
    int ans = 0;
    do{
        int time = 0;
        rep(i,n) time += t[index[i]][index[(i+1)%n]];
        if(time == k) ans++;
    }while(next_permutation(index.begin()+1,index.end()));
    cout << ans << endl;
    return 0;
}