#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a[5];
    rep(i,5) cin >> a[i];
    vector<int> p = {0,1,2,3,4};
    int ans = 1e9;
    do{
        int t = 0;
        rep(i,5){
            while(t%10 != 0) t += 1;
            t += a[p[i]];
        }
        ans = min(ans, t);
    }while(next_permutation(p.begin(),p.end()));
    cout << ans << endl;
    return 0;
}