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
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);
    rep(i,0,n) cin >> s[i] >> t[i];
    vector<bool> org(n);
    set<string> st;
    rep(i,0,n){
        if(st.count(s[i]) == 0) org[i] = true;
        st.insert(s[i]);
    }

    int score = -1, ans = -1;
    rep(i,0,n){
        if(!org[i]) continue;
        if(score < t[i]){
            score = t[i];
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}