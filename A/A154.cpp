#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;
    if(u == s) cout << a-1 << " " << b << endl;
    else cout << a << " " << b-1 << endl;
}