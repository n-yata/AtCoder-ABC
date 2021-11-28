#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string o,e;
    cin >> o >> e;
    int maxSize = max(o.size(),e.size());
    rep(i,maxSize){
        if(o.size() > i) cout << o[i];
        if(e.size() > i) cout << e[i];
    }
    cout << endl;
    return 0;
}