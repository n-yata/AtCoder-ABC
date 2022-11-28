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
    vector<string> s(h),t(h);
    rep(i,h) cin >> s[i];
    rep(i,h) cin >> t[i];
    vector<string> sw(w),tw(w);
    rep(i,w){
        string ts,tt;
            rep(j,h){
            ts += s[j][i];
            tt += t[j][i];
        }
        sw[i] = ts;
        tw[i] = tt;
    }
    sort(sw.begin(),sw.end());
    sort(tw.begin(),tw.end());
    if(sw == tw) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}