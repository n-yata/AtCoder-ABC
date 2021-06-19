#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if(a >= 13) ans += b;
    else if(6 <= a && a < 13) ans += b/2;
    cout << ans << endl;
    return 0;
}