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
    vector<int> s(n);
    rep(i,n) cin >> s[i];
    vector<int> a(n);
    rep(i,n){
        if(i == 0){a[i] = s[i]; continue;}
        a[i] = s[i]-s[i-1];
    }
    rep(i,n) cout << a[i] << ' ';
    cout << '\n';
    return 0;
}