#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool ok = false;
    for(char c : s) if(c == '7') ok = true;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}