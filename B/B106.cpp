#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

vector<int> enumdiv(int n){
    vector<int> S;
    for(int i = 1; 1LL*i*i <= n; i++) if(n%i == 0) { S.push_back(i); if(i*i != n) S.push_back(n/i); }
    sort(S.begin(), S.end());
    return S;
}

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i <= n; i++) if(i%2 == 1){
        auto ed = enumdiv(i);
        if(ed.size() == 8) ans++;
    }
    cout << ans << endl;
    return 0;
}