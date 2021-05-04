#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v;
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int tot = 0;
        rep(i, s.size()) tot += s[i]-'0';
        if(a <= tot && tot <= b) v.push_back(i);
    }
    int ans = 0;
    rep(i,v.size()) ans += v[i];
    cout << ans << endl;
    return 0;
}