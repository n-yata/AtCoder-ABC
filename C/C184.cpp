#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int solve(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 == x2 && y1 == y2) return 0;
    if(x1+y1 == x2+y2) return 1;
    if(x1-y1 == x2-y2) return 1;
    if(abs(x1-x2)+abs(y1-y2) <= 3) return 1;
    if((x1+y1)%2 == (x2+y2)%2) return 2;
    if(abs(x1-x2)+abs(y1-y2) <= 6) return 2;
    if(abs((x1+y1)-(x2+y2)) <= 3) return 2;
    if(abs((x1-y1)-(x2-y2)) <= 3) return 2;
    return 3;
}

int main(){
    cout << solve() << endl;
    return 0;
}