#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,k;
    cin >> n >> k;
    k -= 1;
    vector<int> p(n);
    for(int& x : p){
        int a,b,c;
        cin >> a >> b >> c;
        x = a+b+c;
    }
    vector<int> q = p;
    sort(q.rbegin(),q.rend());
    for(int x : p){
        cout << (x+300 >= q[k] ? "Yes" : "No") << endl;
    }
    return 0;
}