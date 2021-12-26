#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,q;
    string s;
    cin >> n >> s >> q;
    int fl = 0;
    int n2 = n*2;
    rep(qi,q){
        int t,a,b;
        cin >> t >> a >> b;
        if(t == 1){
            --a; --b;
            if(fl) a = (a+n)%n2;
            if(fl) b = (b+n)%n2;
            swap(s[a],s[b]);
        }else if(t == 2){
            fl ^= 1;
        }
    }
    if(fl){
        string s1 = s.substr(0,n);
        string s2 = s.substr(n);
        s = s2+s1;
    }
    cout << s << endl;
    return 0;
}