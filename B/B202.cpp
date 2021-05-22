#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    rep(i,s.size()){
        if(s[i] == '6'){
            s[i] = '9';
            continue;
        } 
        if(s[i] == '9'){
            s[i] = '6';
            continue;
        } 
    }
    cout << s << endl;
    return 0;
}