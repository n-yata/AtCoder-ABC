#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string r, g, b;
    cin >> r >> g >> b;
    string s = r+g+b;
    int x = atoi(s.c_str());
    if(x%4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}