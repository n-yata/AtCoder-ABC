#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int n = s.find(".");
    if(n == string::npos) cout << s << endl;
    else cout << s.erase(n) << endl;
    return 0;
}