#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool e = false;
    rep(i,s.size()){
        if(s[i] == '9') e = true;
    }
    if(e) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}