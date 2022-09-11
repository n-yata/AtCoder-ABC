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
    vector<int> v(4);
    int n;
    cin >> n;
    int ans = 0;
    rep(i,n){
        int a;
        cin >> a;
        v[0] = 1;
        vector<int> v2(4);
        rep(j,4){
            if(!v[j]) continue;
            int b = j+a;
            if(b>3) ans++;
            else v2[b] = 1;
        }
        v = v2;
    }
    cout << ans << endl;
    return 0;
}