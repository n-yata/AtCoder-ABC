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
    int n,m,x,y;
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    string str;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    rep(i,n)rep(j,m){
        rep(k,8){
            str = "";
            rep(t,5){
                x = i+t*dx[k];
                y = j+t*dy[k];
                if(x < 0 || x >= n || y < 0 || y >= m) break;
                str += s[x][y];
            }
            if(str != "snuke") continue;
            rep(t,5){
                x = i+t*dx[k]+1;
                y = j+t*dy[k]+1;
                cout << x << " " << y << endl;
            }
            return 0;
        }
    }
    return 0;
}