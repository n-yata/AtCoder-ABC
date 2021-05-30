#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n, q;
    string s;
    cin >> n >> s >> q;
    // 前半と後半入れ替えるかのフラグ
    int fl = 0;
    int n2 = n*2;
    rep(qi,q){
        int t, a, b;
        cin >> t >> a >> b;
        if(t == 1){
            --a; --b;
            if(fl) a = (a+n)%n2;
            if(fl) b = (b+n)%n2;
            swap(s[a], s[b]);
        }else{
            // フラグを反転させる
            fl ^= 1;
        }
    }
    // 前半と後半の入れ替えは実質1回で終わる
    if(fl){
        string s1 = s.substr(0,n);
        string s2 = s.substr(n);
        s = s2+s1;
    }
    cout << s << endl;
    return 0;
}