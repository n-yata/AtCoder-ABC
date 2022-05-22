#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    int maxN = 0;
    rep(i,0,n){
        int x;
        cin >> x;
        maxN = max(maxN,x);
        a[i] = x;
    } 
    vector<int> b;
    rep(i,0,n){
        int y = a[i];
        if(y == maxN) b.push_back(i+1);
    }
    int fl = 0;
    rep(i,0,k){
        int z;
        cin >> z;
        if(find(b.begin(),b.end(),z) != b.end()){
            fl = 1;
            break;
        }
    }
    if(fl) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}