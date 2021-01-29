#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    int ans = n%1000;
    if(ans != 0) ans = 1000-ans;
    cout << ans << endl;
    return 0;
}