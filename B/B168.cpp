#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int k;
    string s;
    cin >> k >> s;
    if(s.size() <= k) cout << s << endl;
    else cout << s.substr(0, k) << "..." << endl;
    return 0;
}