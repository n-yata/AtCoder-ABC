#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    int sumN = 0;
    rep(i,25){
        sumN += 4;
        int cnt = sumN;
        rep(j,15){
            if(cnt == n){ cout << "Yes" << endl; return 0;}
            if(cnt > n) break;
            cnt += 7;
        }
        if(sumN > n) break;
    }
    sumN = 0;
    rep(i,15){
        sumN += 7;
        int cnt = sumN;
        rep(j,25){
            if(cnt == n){ cout << "Yes" << endl; return 0;}
            if(cnt > n) break;
            cnt += 4;
        }
        if(sumN > n) break;
    }
    cout << "No" << endl;
    return 0;
}