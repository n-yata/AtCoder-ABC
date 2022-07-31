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
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int cnt = 0;
    repn(i,l1,r1+1)repn(j,l2,r2+1) if(i == j) cnt++;
    cnt = (cnt <= 0) ? 0 : cnt-1;
    cout << cnt << endl;
    return 0;
}