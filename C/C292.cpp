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

ll f(int x){
    ll res = 0;
    for(int i = 1; i*i <= x; i++){
        if(x%i != 0) continue;
        int j = x/i;
        if(i == j) res++;
        else res += 2;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    for(int x = 1; x < n; x++){
        ans += f(x)*f(n-x);
    }
    cout << ans << endl;
    return 0;
}