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
    string s,t;
    cin >> n >> s >> t;
    rep(i,n){
        char c1 = s[i];
        char c2 = t[i];
        if(c1 == c2) continue;
        if(c1 == '1' && c2 == 'l') continue;
        if(c1 == 'l' && c2 == '1') continue;
        if(c1 == '0' && c2 == 'o') continue;
        if(c1 == 'o' && c2 == '0') continue;
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}