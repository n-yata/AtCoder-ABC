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

int n;

bool solve(vector<vector<int>> a, vector<vector<int>> b){
    rep(i,n)rep(j,n){
        if(a[i][j] == 0) continue;
        if(b[i][j] == 0) return false;
    }
    return true;
}

vector<vector<int>> roll(vector<vector<int>> a){
    vector<vector<int>> c(n,vector<int>(n));
    rep(i,n)rep(j,n) c[i][j] = a[n-1-j][i];
    return c;
}

int main(){
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n)),b(n,vector<int>(n));
    rep(i,n)rep(j,n) cin >> a[i][j];
    rep(i,n)rep(j,n) cin >> b[i][j];
    rep(i,4){
        if(solve(a,b)){
            cout << "Yes" << endl;
            return 0;
        }
        a = roll(a);
    }
    cout << "No" << endl;
    return 0;
}