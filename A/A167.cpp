#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s,t;
    cin >> s >> t;
    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}