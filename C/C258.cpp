#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,q;
    string s;
    cin >> n >> q >> s;
    int p = 0;
    rep(qi,0,q){
        int type,x;
        cin >> type >> x;
        if(type == 1){
            p = (p-x+n)%n;
        }else{
            cout << s[(p+x-1)%n] << endl;
        }
    }
    return 0;
}