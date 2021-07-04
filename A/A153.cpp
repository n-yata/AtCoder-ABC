#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int h, a;
    cin >> h >> a;
    int ans = h/a;
    if(h%a > 0) ans++;
    cout << ans << endl; 
    return 0;
}