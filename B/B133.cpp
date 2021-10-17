#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

bool isSquare(ll n){
    ll d = (ll)sqrt(n)-1;
    while(d*d < n) ++d;
    return d*d == n;
}

int main(){
    int n,d;
    cin >> n >> d;
    int x[10][10];
    rep(i,n)rep(j,d)cin >> x[i][j];
    int ans = 0;
    rep(i,n){
        for(int j = i+1; j < n; j++){
        int yz = 0;
            rep(k,d){
                int a = x[i][k]-x[j][k];
                yz += a*a;
            }
        if(isSquare(yz)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}