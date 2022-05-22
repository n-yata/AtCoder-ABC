#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    string t;
    cin >> n >> t;
    string d = "xp";
    int x = 0, y = 0;
    rep(i,0,n){
        if('S' == t[i]){
            if(d == "xp") x++;
            else if(d == "xm") x--;
            else if(d == "yp") y++;
            else if(d == "ym") y--;
        }
        if('R' == t[i]){
            if(d == "xp") d = "ym";
            else if(d == "xm") d = "yp";
            else if(d == "yp") d = "xp";
            else if(d == "ym") d = "xm";
        }
    }
    cout << x << " " << y << endl;
    return 0;
}