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

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> a(h),b(h);
    rep(i,h) cin >> a[i];
    rep(i,h) cin >> b[i];
    rep(s,h)rep(t,w){
        int ok = 1;
        rep(i,h)rep(j,w){
            if(a[(i-s+h)%h][(j-t+w)%w] != b[i][j]) ok = 0;
        }
        if(ok){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}