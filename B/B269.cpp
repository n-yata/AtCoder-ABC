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
    char ch[10][10];
    rep(i,10)rep(j,10) cin >> ch[i][j];
    int a = 0,b = 0,c = 0,d = 0;
    bool firstb = true;
    bool firstd = true;
    rep(i,10){
        rep(j,10){
            if(ch[i][j] != '#') continue;
            if(a == 0) a = i+1;
            if(c == 0) c = j+1;
            int dcnt = 0;
            repn(k,j,10){
                if(ch[i][k] == '#') dcnt++;
            }
            if(d == 0) d = dcnt;
            int bcnt = 0;
            repn(k,i,10){
                if(ch[k][j] == '#') bcnt++;
            }
            if(b == 0) b = bcnt;
        }
    }
    cout << a << " " << a+b-1 << endl;
    cout << c << " " << c+d-1 << endl;
    return 0;
}