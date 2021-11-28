#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int N,M;
    cin >> N >> M;

    const int nmax = 50;
    char A[nmax][nmax],B[nmax][nmax];

    rep(y,N)rep(x,N) cin >> A[y][x];
    rep(y,M)rep(x,M) cin >> B[y][x];

    bool exist = false;

    rep(ly,N)rep(lx,N){
        if(ly+M-1 >= N or lx+M-1 >= N)continue;

        bool match = true;
        rep(y,M)rep(x,M){
            if(A[ly+y][lx+x] != B[y][x]) match = false;
        }
        if(match) exist = true;
    }
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}