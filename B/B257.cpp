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
    int n,k,q;
    cin >> n >> k >> q;
    vector<bool> vec(n+1,false);
    vector<int> idx(k+1);
    rep(i,k){
        int a;
        cin >> a;
        vec[a] = true;
        idx[i+1] = a;
    }
    rep(i,q){
        int l;
        cin >> l;
        int a = idx[l];
        if(a == n) continue;
        bool fl = vec[a+1];
        if(fl) continue;
        vec[a] = false;
        vec[a+1] = true;
        idx[l] = a+1;
    }
    rep(i,n+1)if(vec[i]) cout << i << " ";
    cout << endl;
    return 0;
}