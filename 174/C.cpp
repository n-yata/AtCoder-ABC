#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int k;
    cin >> k;
    int x = 7%k;
    set<int> s;
    int i = 1;
    while(s.count(x) == 0){
        if(x == 0){
            cout << i << endl;
            return 0;
        }
        s.insert(x);
        x = (x*10+7)%k;
        ++i;
    }
    cout << -1 << endl;
    return 0;
}