#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    set<int> s;
    rep(i,k){
        s.insert(a+i);
        s.insert(b-i);
    }
    for(auto i : s){
        if(i < a || b < i) continue;
        cout << i << endl;
    }
    return 0;
}