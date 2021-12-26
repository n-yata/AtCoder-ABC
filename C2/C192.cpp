#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int f(int x){
    string s = to_string(x);
    string ss = s;
    sort(ss.rbegin(),ss.rend());
    string rs = s;
    sort(rs.begin(),rs.end());
    return stoi(ss)-stoi(rs);
}

int main(){
    int n,k;
    cin >> n >> k;
    int ans = n;
    for(int i = 0; i < k; i++){
        ans = f(ans);
    }
    cout << ans << endl;
    return 0;
}