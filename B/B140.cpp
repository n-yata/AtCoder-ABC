#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int n,a[20],b[20],c[20];

int main(){
    cin >> n;
    rep(i,n) cin >> a[i], a[i]--;
    rep(i,n) cin >> b[i];
    rep(i,n-1) cin >> c[i];
    int ans = 0;
    int pre = -2;
   rep(i,n){
       int eat = a[i];
       ans += b[eat];
       if(pre+1 == eat) ans += c[eat-1];
       pre = eat;
   }
    cout << ans << endl;
    return 0;
}