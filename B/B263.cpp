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
    int n;
    cin >> n;
    vector<int> p(n+1);
    p[0] = 0;
    p[1] = 0;
    repn(i,2,n+1) cin >> p[i];
    map<int,int> mp;
    mp[1] = 0;
    repn(i,2,n+1) mp[i] = p[i];

    int now = mp[n];
    int ans = 0;
    while(1){
        ans++;
        now = mp[now];
        if(now == 0) break;
    }
    cout << ans << endl;
    return 0;
}