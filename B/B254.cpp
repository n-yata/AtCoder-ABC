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
    vector<vector<int>> v;
    rep(i,0,n){
        vector<int> a;
        rep(j,0,i+1){
            int x = 0;
            if(j == 0 || j == i) x = 1;
            else x = v[i-1][j-1]+v[i-1][j];
            a.push_back(x);
            cout << x;
            if(j < i) cout << " ";
        }
        v.push_back(a);
        cout << endl;
    }
    return 0;
}