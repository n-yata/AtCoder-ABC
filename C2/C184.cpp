#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int r = r2-r1, c = c2-c1;
    int ans = 3;
    if(!r && !c) ans = 0;
    else if(r == c || r == -c || abs(r)+abs(c) <= 3) ans = 1;
    else if((r^c^1)&1 || abs(r+c) <= 3 || abs(r-c) <= 3  || abs(r)+abs(c) <= 6) ans = 2;
    cout << ans << endl;
    return 0;
}