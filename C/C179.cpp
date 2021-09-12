#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n-1; i++){
        for(int j = 1; i*j <= n-1; j++){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}