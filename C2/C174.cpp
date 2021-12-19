#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int a[1000001];

int main(){
    int k;
    cin >> k;
    a[1] = 7%k;
    for(int i = 2; i <= k; i++) a[i] = (a[i-1]*10+7)%k;
    for(int i = 1; i <= k; i++)if(a[i] == 0){
        cout << i << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}