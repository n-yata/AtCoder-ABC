#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= k; j++){
            string s = "";
            s += to_string(i)+"0"+to_string(j);
            ans += atoi(s.c_str());
        }
    }
    cout << ans << endl;
    return 0;
}