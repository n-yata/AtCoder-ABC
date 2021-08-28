#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    ans += n*(n-1)/2;
    ans += m*(m-1)/2;
    cout << ans << endl;
    return 0;
}