#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

static const int MMAX = 20;
static const int NMAX = 50000;
static const int INFTY = (1<<29);

int main(){
    int n, m;
    int C[MMAX+1];
    int T[NMAX+1];
    cin >> n >> m;
    for(int i = 1; i <= m; i++) cin >> C[i];
    rep(i, NMAX+1) T[i] = INFTY;
    T[0] = 0;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j+C[i] <= n; j++){
            T[j+C[i]] = min(T[j+C[i]], T[j]+1);
        }
    }
    cout << T[n] << endl;
    return 0;
}