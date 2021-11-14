#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int x;
    cin >> x;
    int ans = 1;
    for(int b = 2; b < x; b++){
        int y = b*b;
        while(y <= x){
            ans = max(ans,y);
            y *= b;
        }
    }
    cout << ans << endl;
    return 0;
}