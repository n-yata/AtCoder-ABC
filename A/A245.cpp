#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    bool t = true;
    if(a > c) t = false;
    else if(a == c && b > d) t = false;
    if(t) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
    return 0;
}