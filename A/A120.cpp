#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = b/a;
    if(c > cnt) cout << cnt << endl;
    else cout << c << endl;
    return 0;
}