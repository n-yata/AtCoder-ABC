#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string x;
    int n;
    cin >> x >> n;
    vector<string> s(n);
    vector<int> pos(26);
    rep(i,26) pos[x[i]-'a'] = i;
    rep(i,n) cin >> s[i];
    sort(s.begin(),s.end(), [&](const string& s, const string& t){
        int len = min(s.size(), t.size());
        rep(i,len){
            if(s[i] != t[i]) return pos[s[i]-'a'] < pos[t[i]-'a'];
        }
        return s.size() < t.size();
    });
    for(auto ss : s){
        cout << ss << endl;
    }
    return 0;
}