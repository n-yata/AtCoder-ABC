#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;
    bool ok = true;
    int maxN = max({a, b, c, d, e});
    int minN = min({a, b, c, d, e});
    if(maxN-minN > k) ok = false;
    if(ok) cout << "Yay!" << endl;
    else cout << ":(" << endl;
    return 0;
}