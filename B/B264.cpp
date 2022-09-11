#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    vector<vector<bool>> fl(15,vector<bool>(15));
    rep(i,15)rep(j,15) if(i == 0 || i == 14 || j == 0 || j == 14) fl[i][j] = true;
    repn(i,2,13)repn(j,2,13) if(i == 2 || i == 12 || j == 2 || j == 12) fl[i][j] = true;
    repn(i,4,11)repn(j,4,11) if(i == 4 || i == 10 || j == 4 || j == 10) fl[i][j] = true;
    repn(i,6,9)repn(j,6,9) if(i == 6 || i == 8 || j == 6 || j == 8) fl[i][j] = true;
    int r,c;
    cin >> r >> c;
    r--;c--;
    if(fl[r][c]) cout << "black" << endl;
    else cout << "white" << endl;
    return 0;
}