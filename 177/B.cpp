#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s, t;
    cin >> s >> t;
    int ans = t.size();

    for(int i = 0; i <= s.size()-t.size(); ++i){
        int diff = 0;
        for(int j = 0; j < t.size(); ++j){
            if(t[j] != s[i+j]) diff++;
        }
        ans = min(ans, diff);
    }
    cout << ans << endl;
    return 0;
}