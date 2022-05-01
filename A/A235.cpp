#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    char a,b,c;
    cin >> a >> b >> c;
    string abc = string({a,b,c});
    string bca = string({b,c,a});
    string cab = string({c,a,b});
    int ans = stoi(abc)+stoi(bca)+stoi(cab);
    cout << ans << endl;
    return 0;
}