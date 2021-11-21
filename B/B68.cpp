#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    int y = 0;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        int x = i;
        while(x%2 == 0){
            x = x/2;
            cnt++;
        }
        y = max(y,cnt);
        if(y == cnt) ans = i;
    }
    cout << ans << endl;
    return 0;
}