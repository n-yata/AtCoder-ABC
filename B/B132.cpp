#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    int p[20];
    rep(i,n) cin >> p[i];
    int ans = 0;
    for(int i = 1; i < n-1; i++){
        int maxN = max({p[i-1],p[i],p[i+1]});
        int minN = min({p[i-1],p[i],p[i+1]});
        if(p[i] != maxN && p[i] != minN) ans++;
    }
    cout << ans << endl;
    return 0;
}