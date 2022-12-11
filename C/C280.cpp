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
    string s,t;
    cin >> s >> t;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        char c1 = s[i];
        char c2 = t[i];
        if(s[i] == t[i]) continue;
        ans = i+1;
        break;
    }
    if(!ans) ans = t.size();
    cout << ans << '\n';
    return 0;
}