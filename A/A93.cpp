#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    vector<int> a(3);
    rep(i,s.size()){
        if(s[i] == 'a') a[0]++;
        else if(s[i] == 'b') a[1]++;
        else a[2]++;
    }
    bool ok = true;
    rep(i,a.size()){
        if(a[i] != 1) ok = false;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}