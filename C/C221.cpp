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
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int ans = 0;
    do{
        for(int i = 1; i < s.size(); i++){
            string l = "", r = "";
            for(int j = 0; j < i; j++) l += s[j];
            for(int j = i; j < s.size(); j++) r += s[j];
            if(l[0] == '0' || r[0] == '0') continue;
            ans = max(ans, stoi(l)*stoi(r));
        }
    }while(next_permutation(s.begin(),s.end()));
    cout << ans << endl;
    return 0;
}