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
    int n,q;
    cin >> n >> q;
    map<string,bool> mp;
    vector<string> ans;
    rep(i,q){
        int t,a,b;
        cin >> t >> a >> b;
        if(t == 1) mp[to_string(a)+ "_" +to_string(b)] = true;
        else if(t == 2) mp[to_string(a)+ "_" +to_string(b)] = false;
        else if(t == 3){
            bool x = mp[to_string(a)+ "_" +to_string(b)];
            bool y = mp[to_string(b)+ "_" +to_string(a)];
            if(x && y) ans.push_back("Yes");
            else ans.push_back("No");
        }
    }
    for(string s : ans) cout << s << '\n';
    return 0;
}