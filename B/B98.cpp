#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i = 1; i < s.size(); i++){
        string x = s.substr(0,i);
        string y = s.substr(i,s.size()-x.size());
        set<char> setX;
        set<char> setY;
        rep(j,x.size()) setX.insert(x[j]);
        rep(j,y.size()) setY.insert(y[j]);
        int cnt = 0;
        for(auto xx : setX) if(setY.find(xx) != setY.end()) cnt++;
        ans = max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}