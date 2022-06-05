#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> v(3);
    v[0] = a;v[1] = b;v[2] = c;
    sort(v.begin(),v.end());
    if(v[1] == b) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}