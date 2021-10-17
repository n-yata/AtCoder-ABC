#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int r,d,x;
    cin >> r >> d >> x;
    ll ans = r*x-d;
    for(int i = 1; i <= 10; i++){
        cout << ans << endl;
        ans = r*ans-d;
    }
    return 0;
}