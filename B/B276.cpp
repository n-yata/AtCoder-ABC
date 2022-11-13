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
    int n,m;
    cin >> n >> m;
    map<int,set<int>> mp;
    rep(i,m){
        int a,b;
        cin >> a >> b;
        mp[a].insert(b);
        mp[b].insert(a);
    }
    for(int i = 1; i <= n; i++){
        set<int> st = mp[i];
        if(st.size() == 0){cout << 0 << '\n'; continue;}
        cout << st.size() << ' ';
        for(int j : st) cout << j << ' ';
        cout << '\n';
    }
    return 0;
}