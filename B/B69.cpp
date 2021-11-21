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
    string s1 = s.substr(0,1);
    string s2 = s.substr(1,s.size()-2);
    string s3 = s.substr(s.size()-1,1);
    cout << s1 << s2.size() << s3 << endl;
    return 0;
}