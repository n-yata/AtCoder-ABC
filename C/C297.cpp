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
    int h,w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    rep(i,h){
        string sh = s[i];
        repn(j,1,w){
            char c1 = sh[j-1];
            char c2 = sh[j];
            if(c1 != 'T' || c2 != 'T') continue;
            sh[j-1] = 'P';
            sh[j] = 'C';
        }
        s[i] = sh;
    }
    rep(i,h) cout << s[i] << endl;
    return 0;
}