#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x;
    cin >> x;
    int ans;
    if(90 <= x) ans = -1;
    if(70 <= x && x < 90) ans = 90-x;
    if(40 <= x && x <70) ans = 70-x;
    if(x < 40) ans = 40-x;
    if(ans == -1) cout << "expert" << endl;
    else cout << ans << endl;
    return 0;
}