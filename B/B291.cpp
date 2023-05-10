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
    int n;
    cin >> n;
    vector<int> x(n*5);
    rep(i,n*5) cin >> x[i];
    sort(x.begin(),x.end());
    rep(i,n) x.pop_back();
    sort(x.rbegin(),x.rend());
    rep(i,n) x.pop_back();
    double ans = 0;
    rep(i,n*3) ans += x[i];
    printf("%.10f\n",ans/(n*3));
    return 0;
}