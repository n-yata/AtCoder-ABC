#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    bool yes = false;
    if(a == b && b != c) yes = true;
    else if(a == c && b != c) yes = true;
    else if(b == c && a != c) yes = true;
    if(yes) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}