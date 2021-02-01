#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int main(){
    int n, s, d;
    cin >> n >> s >> d;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    rep(i,n){
        if(x[i] >= s) continue;
        if(y[i] <= d) continue;
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}