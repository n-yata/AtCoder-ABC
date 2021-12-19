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
    vector<pair<int,int>> p(n);
    for(auto& [x,y]: p) cin >> x >> y;
    for(int i = n; i--;)for(int j = i; j--;)for(int k = j; k--;){
        auto [x1,y1] = p[i];
        auto [x2,y2] = p[j];
        auto [x3,y3] = p[k];
        x1 -= x3;
        x2 -= x3;
        y1 -= y3;
        y2 -= y3;
        if(x1*y2 == x2*y1){
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}