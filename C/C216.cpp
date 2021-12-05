#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;

template<class t> inline bool chmax(t& a, t b) { if (a < b) { a = b; return 1; } return 0; }
template<class t> inline bool chmin(t& a, t b) { if (a > b) { a = b; return 1; } return 0; }

const ll inf = 1ll<<60;
const ll mod = 1'000'000'007;

int main(){
    ll n;
    cin >> n;
    string ans;
    while(n > 0){
        if(n%2){
            ans += 'A';
            n--;
        }else{
            ans += 'B';
            n /= 2;
        }
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}