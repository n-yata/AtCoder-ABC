#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    string s;
    vector<pair<int,int>> a;
    cin >> n >> s;
    int ans = 0;
    rep(i,n){
        int x;
        cin >> x;
        a.push_back({x,s[i]});
        if(s[i] == '1') ans++;
    }
    sort(a.begin(),a.end());
    int cnt = ans;
    rep(i,n){
        if(a[i].second == '1') cnt--;
        else cnt++;
        if(i < (n-1)){
            if(a[i].first != a[i+1].first) ans = max(ans,cnt);
        } 
        else ans = max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
} 