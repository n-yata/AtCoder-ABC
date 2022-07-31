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
    int n;
    cin >> n;
    vector<string> s(n),t(n);
    rep(i,n) cin >> s[i] >> t[i];
    rep(i,n){
        bool sans = true,tans = true;
        rep(j,n){
            if(i == j) continue;
            if(s[i] == s[j] || s[i] == t[j]) sans = false;
            if(t[i] == t[j] || t[i] == s[j]) tans = false;
        }
        if(sans == false && tans == false){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}