#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

int main(){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int ans = 0;
    rep(i,a+1)rep(j,b+1)rep(k,c+1){
        if(500*i+100*j+50*k == x) ans++;
    }
    cout << ans << endl;
    return 0;
}