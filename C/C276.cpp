#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];
    int j = n-2;
    while(p[j] < p[j+1]) j -= 1;
    int k = n-1;
    while(p[j] < p[k]) k -= 1;
    swap(p[j],p[k]);
    reverse(begin(p)+j+1, end(p));
    rep(i,n) cout << p[i] << ' ';
    cout << '\n';
    return 0;
}