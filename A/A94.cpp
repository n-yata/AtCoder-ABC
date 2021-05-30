#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b, x;
    cin >> a >> b >> x;
    bool ok = true;
    if(a > x) ok = false;
    if(a+b <= x) ok = false;
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}