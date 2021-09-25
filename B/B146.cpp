#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    rep(i,s.size()){
        s[i] = (s[i]-'A'+n)%26+'A';
    }
    cout << s << endl;
    return 0;
}