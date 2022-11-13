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
    int a,b;
    cin >> a >> b;
    vector<bool> fl(3);
    if(a == 1 || b == 1) fl[0] = true;
    if(a == 2 || b == 2) fl[1] = true;
    if(a == 3 || b == 3){fl[0] = true; fl[1] = true;}
    if(a == 4 || b == 4) fl[2] = true;
    if(a == 5 || b == 5){fl[0] = true; fl[2] = true;}
    if(a == 6 || b == 6){fl[1] = true; fl[2] = true;}
    if(a == 7 || b == 7) rep(i,3) fl[i] = true;
    int ans = 0;
    if(fl[0]) ans += 1;
    if(fl[1]) ans += 2;
    if(fl[2]) ans += 4;
    cout << ans << endl;
    return 0;
}