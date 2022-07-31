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
    int h,w,r,c;
    cin >> h >> w >> r >> c;
    int rm = r-1;
    int rp = r+1;
    int cm = c-1;
    int cp = c+1;
    int cnt = 0;
    if(1 <= rm) cnt++;
    if(rp <= h) cnt++;
    if(1 <= cm) cnt++;
    if(cp <= w) cnt++;
    cout << cnt << endl;
    return 0;
}