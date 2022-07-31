#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,k;
    cin >> n >> k;
    vector<vector<int>> b(k);
    vector<int> a(n);
    rep(i,0,n){
        cin >> a[i];
        b[i%k].push_back(a[i]);
    }
    rep(i,0,k){
        sort(b[i].rbegin(),b[i].rend());
    }
    sort(a.begin(),a.end());
    vector<int> na;
    rep(i,0,n){
        na.push_back(b[i%k].back());
        b[i%k].pop_back();
    }
    if(a == na) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}