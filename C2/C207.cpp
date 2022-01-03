#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int N,A[2010],B[2010];

int main(){
    cin >> N;
    rep(i,N){
        int t,l,r;
        cin >> t >> l >> r;
        if(t == 1) A[i] = l*2, B[i] = r*2+1;
        else if(t == 2) A[i] = l*2, B[i] = r*2;
        else if(t == 3) A[i] = l*2+1, B[i] = r*2+1;
        else A[i] = l*2+1, B[i] = r*2;
    }
    int ans = 0;
    rep(i,N)for(int j = i+1; j < N; j++){
        int AA = max(A[i],A[j]);
        int BB = min(B[i],B[j]);
        if(AA < BB) ans++;
    }
    cout << ans << endl;
    return 0;
}