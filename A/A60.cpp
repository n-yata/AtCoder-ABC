#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    char la = a[a.size()-1];
    char fb = b[0];
    char lb = b[b.size()-1];
    char fc = c[0];
    if(la == fb && lb == fc) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}