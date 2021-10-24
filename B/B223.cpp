#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    vector<string> x(s.size());
    rep(i,s.size()){
        char c = s[0];
        s = s.erase(0,1);
        s += c;
        x[i] = s;
    }
    sort(x.begin(),x.end());
    cout << x[0] << endl;
    cout << x[s.size()-1] << endl;
    return 0;
}