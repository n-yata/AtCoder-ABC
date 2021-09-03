#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;
    if(a == b) ans = c;
    if(a == c) ans = b;
    if(b == c) ans = a;
    cout << ans << endl;
    return 0;
}