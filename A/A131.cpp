#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    char c;
    bool ok = true;
    rep(i,s.size()){
        if(s[i] == c) ok = false;
        c = s[i];
    }
    if(ok) cout << "Good" << endl;
    else cout << "Bad" << endl;
    return 0;
}