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
    int n;
    cin >> n;
    vector<int> p(n*2+2);
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        p[i*2] = p[i*2+1] = a;
    }
    vector<int> ans(n*2+2);
    for(int i = 2; i <= n*2+1; i++) ans[i] = ans[p[i]]+1;
    for(int i = 1; i <= n*2+1; i++) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}