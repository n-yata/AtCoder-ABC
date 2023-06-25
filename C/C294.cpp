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
    int n,m;
    cin >> n >> m;
    map<int,string> c;
    rep(i,n){
        int a;
        cin >> a;
        c[a] = "a";
    }
    rep(i,m){
        int b;
        cin >> b;
        c[b] = "b";
    }
    vector<int> a,b;
    int cnt = 0;
    for(auto x : c){
        cnt++;
        if(x.second == "a") a.push_back(cnt);
        else b.push_back(cnt);
    }
    for(auto x : a) cout << x << " ";
    cout << endl;
    for(auto x : b) cout << x << " ";
    cout << endl;
    return 0;
}