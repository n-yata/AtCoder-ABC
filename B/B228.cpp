#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int n,x;
int a[100001];
bool b[100001];

int main(){
    cin >> n >> x;
    for(int i = 1; i <= n; i++) cin >>a[i];
    int i = x;
    do{
        b[i] = true;
        i = a[i];
    }while(!b[i]);
    int ans = 0;
    for(int i = 1; i <= n; i++) if(b[i]) ans++;
    cout << ans << endl;
    return 0;
}