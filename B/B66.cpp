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
    s = s.substr(0,s.size()-2);
    string s1 = s.substr(0,s.size()/2);
    string s2 = s.substr(s.size()/2,s.size()/2);
    while(s1 != s2){
        s = s.substr(0,s.size()-2);
        s1 = s.substr(0,s.size()/2);
        s2 = s.substr(s.size()/2,s.size()/2);
    }
    cout << s.size() << endl;
    return 0;
}