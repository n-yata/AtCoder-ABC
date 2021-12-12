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
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    map<string,int> m;
    rep(i,n) m[s[i]]++;
    string maxS = "";
    int maxI = 0;
    for(auto a : m){
        maxI = max(maxI,a.second);
        if(maxI == a.second) maxS = a.first;
    }
    cout << maxS << endl;
    return 0;
}