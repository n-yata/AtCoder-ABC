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
    int b1 = -1,b2 = -1,r1 = -1,r2 = -1, k = -1;
    rep(i,8){
        char c;
        cin >> c;
        if('B' == c && b1 == -1) b1 = i;
        else if('B' == c) b2 = i;
        if('R' == c && r1 == -1) r1 = i;
        else if('R' == c) r2 = i;
        if('K' == c) k = i;
    }
    bool ans = true;
    if((b1+b2)%2 == 0) ans = false;
    if(r1 > k || k > r2) ans = false;
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}