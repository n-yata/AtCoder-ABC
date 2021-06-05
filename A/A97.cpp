#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool ok = false;
    if(abs(a-c) <= d) ok = true;
    if(abs(a-b) <= d && abs(b-c) <= d) ok = true;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}