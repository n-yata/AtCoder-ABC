#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int main(){
    int n;
    cin >> n;
    n = 1<<n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    map<int,int> m;
    rep(i,n) m[a[i]] = i+1;
    while(a.size() > 2){
        vector<int> b;
        for(int i = 0; i < a.size(); i += 2){
            b.push_back(max(a[i], a[i+1]));
        }
        swap(a,b);
    }
    int ans = min(a[0],a[1]);
    cout << m[ans] << endl;
    return 0;
}