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
    int n,d;
    cin >> n >> d;
    vector<int> t(n);
    rep(i,n) cin >> t[i];
    rep(i,n-1){
        if(t[i+1]-t[i] > d) continue;
        cout << t[i+1] << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}