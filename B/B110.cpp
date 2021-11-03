#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<int> a(n),b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    bool ans = false;
    int z = x+1;
    if(z > y) ans = true;
    if(ans){
        cout << "War" << endl;
        return 0;
    }
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
    int maxX = a[0];
    int minY = b[0];
    ans = true;
    while(z < y){
        if(maxX < z && z <= minY){
            ans = false;
            break;
        }
        z++;
    }
    if(ans) cout << "War" << endl;
    else cout << "No War" << endl;
    return 0;
}