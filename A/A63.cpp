#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = a+b;
    if(10 <= ans) cout << "error" << endl;
    else cout << ans << endl;
    return 0;
}