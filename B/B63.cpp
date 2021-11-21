#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s;
    cin >> s;
    set<char> c;
    rep(i,s.size()){
        if(find(c.begin(),c.end(),s[i]) != c.end()){
            cout << "no" << endl;
            return 0;
        }
        c.insert(s[i]);
    }
    cout << "yes" << endl;
    return 0;
}