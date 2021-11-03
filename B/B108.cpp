#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2-x1;
    int dy = y2-y1;
    int x = x2,y = y2;
    rep(i,2){
        int _dx = -dy;
        int _dy = dx;
        dx = _dx;
        dy = _dy;
        x = x+dx;
        y = y+dy;
        cout << x << " " << y;
        if(i == 0) cout << " ";
        else cout << endl;
    }
    return 0;
}