#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s1, s2;
    cin >> s1;
    s2 = s1;
    reverse(s1.begin(), s1.end());
    if(s1 == s2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}