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

const string NUM = "123456789";

int main(){
    int r,c;
    cin >> r >> c;
    vector<string> b(r);
    rep(i,r) cin >> b[i];
    rep(i,r)rep(j,c){
        char ch = b[i][j];
        if(find(NUM.begin(),NUM.end(),ch) == NUM.end()) continue;
        int x = ch-'0';
        b[i][j] = '.';
        rep(k,r)rep(l,c){
            if(b[k][l] != '#') continue;
            if(x >= (abs(i-k)+abs(j-l))) b[k][l] = '.';
        }
    }
    rep(i,r) cout << b[i] << endl;
    return 0;
}