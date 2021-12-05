#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int main(){
    string x;
    int n;
    cin >> x >> n;
    vector<int> pos(26);
    rep(i,26) pos[x[i]-'a'] = i;
    vector<string> s(n);
    rep(i,n)cin >> s[i];
    sort(s.begin(),s.end(),[&](const string& s, const string& t){
        int len = min(s.size(),t.size());
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