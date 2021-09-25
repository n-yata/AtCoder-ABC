#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    string ans;
    int p = n;
    while(1){
        int x = n%k;
        n /= k;
        if(p == n) break;
        p = n;
        ans += to_string(x);
    }
    cout << ans.size() << endl;
    return 0;
}