#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if(a > b){
        ans += a;
        a--;
        ans += max(a,b);
    }else{
        ans += b;
        b--;
        ans += max(a,b);
    }
    cout << ans << endl;
    return 0;
}