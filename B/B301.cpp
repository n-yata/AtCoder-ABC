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
    vector<int> a(n);
    vector<int> ans;
    rep(i,n) cin >> a[i];
    rep(i,n){
        ans.push_back(a[i]);
        if(i == n-1) continue;
        if(abs(a[i]-a[i+1]) == 1) continue;
        if(a[i] < a[i+1]) for(int j = a[i]+1; j < a[i+1]; j++) ans.push_back(j);
        if(a[i] > a[i+1]) for(int j = a[i]-1; a[i+1] < j; j--) ans.push_back(j); 
    }
    for(auto x : ans) cout << x << " ";
    cout << endl;
    return 0;
}