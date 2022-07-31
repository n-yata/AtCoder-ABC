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

bool check(char c1, char c2){
    if(c1 == 'W') return c2 == 'L';
    else if(c1 == 'D') return c2 == 'D';
    else return c2 == 'W';
}

int main(){
    int n;
    cin >> n;
    vector<vector<char>> a(n,vector<char>(n));
    vector<vector<char>> b(n,vector<char>(n));
    
    rep(i,n)rep(j,n) cin >> a[i][j];
    rep(i,n)rep(j,n) b[i][j] = a[j][i];
    rep(i,n)rep(j,n){
        if(i == j) continue;
        if(!check(a[i][j],b[i][j])){
            cout << "incorrect" << endl;
            return 0;
        }
    }
    cout << "correct" << endl;
    return 0;
}