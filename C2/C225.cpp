#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> b(n,vector<int>(m));
    rep(i,n)rep(j,m) cin >> b[i][j];
    rep(i,n)rep(j,m) b[i][j]--;
    int si = b[0][0]/7;
    int sj = b[0][0]%7;
    if(sj+m-1 >= 7){ cout << "No" << endl; return 0;}
    rep(i,n)rep(j,m){
        int nb = (si+i)*7+(sj+j);
        if(b[i][j] != nb){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}