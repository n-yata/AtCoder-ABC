#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    if(s.back() != 's') s += "s";
    else s += "es";
    cout << s << endl;
    return 0;
}