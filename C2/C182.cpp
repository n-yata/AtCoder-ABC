#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    ll n;
    cin >> n;
    int cnt[3] = {0};
    while(n){
        cnt[n%10%3]++;
        n /= 10;
    }
    int cur = (cnt[1]+2*cnt[2])%3;
    int k = cnt[0]+cnt[1]+cnt[2];
    int res = 0;
    if(!cur) res = 0;
    else if(cur == 1){
        if(cnt[1]){
            if(k == 1) res = -1;
            else res = 1;
        }else{
            if(k == 2) res = -1;
            else res = 2;
        }
    }else{
        if(cnt[2]){
            if(k == 1) res = -1;
            else res = 1;
        }else{
            if(k == 2) res = -1;
            else res = 2;
        }
    }
    cout << res << endl;
    return 0;
}