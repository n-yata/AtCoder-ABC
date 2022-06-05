#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    map<int,int> x;
    map<int,int> y;
    rep(i,0,6){
        int xy;
        cin >> xy;
        if(i%2 == 0) x[xy]++;
        else y[xy]++;
    }
    int xa,ya;
    for(auto mi : x) if(mi.second == 1) xa = mi.first;
    for(auto mi : y) if(mi.second == 1) ya = mi.first;
    cout << xa << " " << ya << endl;
    return 0;
}