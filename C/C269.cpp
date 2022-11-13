#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    ll i = n;
    while(1){
        v.push_back(i);
        if(i == 0) break;
        i = (i-1)&n;
    }
    reverse(v.begin(),v.end());
    for(auto &x : v) cout << x << endl;
    return 0;
}