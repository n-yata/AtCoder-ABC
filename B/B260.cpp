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
    int n,x,y,z;
    cin >> n >> x >> y >> z;
    vector<int> a(n+5),b(n+5);
    repn(i,1,n+1) cin >> a[i];
    repn(i,1,n+1) cin >> b[i];
    vector<bool> passed(n+5,false);
    vector<int> c;

    repn(i,1,n+1) c.push_back(10000*(100-a[i])+i);
    sort(c.begin(),c.end());
    rep(i,x) passed[c[i]%10000] = true;

    c.clear();
    repn(i,1,n+1) if(!passed[i]) c.push_back(10000*(100-b[i])+i);
    sort(c.begin(),c.end());
    rep(i,y) passed[c[i]%10000] = true;

    c.clear();
    repn(i,1,n+1) if(!passed[i]) c.push_back(10000*(200-a[i]-b[i])+i);
    sort(c.begin(),c.end());
    rep(i,z) passed[c[i]%10000] = true;

    repn(i,1,n+1) if(passed[i]) cout << i << endl;
    return 0;
}