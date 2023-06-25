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
    int a[m][n];
    rep(i,m)rep(j,n) cin >> a[i][j];
    set<string> st1;
    rep(i,m)repn(j,1,n){
        string s1 = to_string(a[i][j-1]) + "_"+ to_string(a[i][j]);
        string s2 = to_string(a[i][j]) + "_"+ to_string(a[i][j-1]);
        st1.insert(s1);
        st1.insert(s2);
    }
    set<string> st2;
    rep(i,m){
        for(int j = 1; j <= n; j++){
            for(int k = j+1; k <= n; k++){
                string s1 = to_string(j) + "_" + to_string(k);
                string s2 = to_string(k) + "_" + to_string(j);
                st2.insert(s1);
                st2.insert(s2);
            }
        }
    }
    int ans = 0;
    for(auto s : st2){
        if(st1.find(s) != st1.end()) continue;
        ans++;
    }
    cout << ans/2 << endl;
    return 0;
}