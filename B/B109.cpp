#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<string> w(n);
    rep(i,n) cin >> w[i];
    vector<string> x;
    bool ans = true;
    string prev = w[0].substr(0,1);
    rep(i,n){
        if(find(x.begin(),x.end(),w[i]) != x.end()){
            ans = false;
            break;
        }
        if(prev != w[i].substr(0,1)){
            ans = false;
            break;
        }
        x.push_back(w[i]);
        prev = w[i].substr(w[i].size()-1,1);
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}