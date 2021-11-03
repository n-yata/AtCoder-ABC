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
    int ans = 1e9;
    for(int i = 0; i < s.size()-2; i++){
        int x = stoi(s.substr(i,3));
        ans = min(ans,abs(x-753));
    }
    cout << ans << endl;
    return 0;
}