#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool ok = true;
    rep(i,s.size()){
        if(s[i] == 'U' || s[i] == 'D') continue;
        if(i%2 == 0){
            if(s[i] != 'R') ok = false;
        }else{
            if(s[i] != 'L') ok = false;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}