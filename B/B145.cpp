#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    string s1 = s.substr(0,n/2);
    string s2 = s.substr(n/2,n);
    if(s1 == s2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}