#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int ans = 700;
    rep(i,3){
        if(s[i] == 'o') ans += 100;
    }
    cout << ans << endl;
    return 0;
}