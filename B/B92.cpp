#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,d,x;
    cin >> n >> d >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = 0;
    rep(i,n){
        vector<int> at;
        int y = 1;
        while(y <= d){
            at.push_back(y);
            y += a[i];
        }
        int day = 1; 
        ans++;
        while(day <= d){
            day++;
            if(find(at.begin(),at.end(), day) == at.end()) continue;
            ans++;
        }
    }
    cout << ans+x << endl;
    return 0;
}