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

int h,w,ans;
int a[11][11];

void dfs(int i, int j, set<int> s){
    if(s.count(a[i][j])) return;
    s.insert(a[i][j]);
    if(i == h-1 && j == w-1){
        ans++;
        return;
    }
    if(j+1 < w) dfs(i,j+1,s);
    if(i+1 < h) dfs(i+1,j,s);
}

int main(){
    cin >> h >> w;
    rep(i,h)rep(j,w) cin >> a[i][j];
    dfs(0,0,set<int>());
    cout << ans << endl;
    return 0;
}