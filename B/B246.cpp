#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int x,y;
    cin >> x >> y;
    int d2 = x*x+y*y;
    double d = d2;
    d = sqrt(d);
    double dx = x, dy = y;
    cout << dx/d << " " << dy/d << endl;
    return 0;
}