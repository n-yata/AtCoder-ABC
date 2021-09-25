#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    string sa,sb;
    rep(i,b) sa += to_string(a);
    rep(i,a) sb += to_string(b);
    if(sa < sb) cout << sa << endl;
    else cout << sb << endl;
    return 0;
}