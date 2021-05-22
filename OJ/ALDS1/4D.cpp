#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

/* Allocation */
int n, k;
ll w[100000];

int f(ll p){
   int i = 0;
   for(int j = 0; j < k; j++){
        ll sum = 0;
        while(sum+w[i] <= p){
            sum += w[i];
            i++;
            if(i == n) return n;
        }
    }
    return i;
}

ll solve(){
    ll left = 0;
    ll right = 100000*10000;
    ll mid;
    while(right-left > 1){
        mid = (left+right)/2;
        int v = f(mid);
        if(v >= n) right = mid;
        else left = mid;
    }
    return right;
}

int main(){
    cin >> n >> k;
    rep(i,n) cin >> w[i];
    cout << solve() << endl;
    return 0;
}