#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    rep(i,s.size()){
        if(i%2 == 0) if(islower(s[i])) continue;
        if(i%2 == 1) if(isupper(s[i])) continue;
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}