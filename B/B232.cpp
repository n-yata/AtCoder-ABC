#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s,t;
    cin >> s >> t;
    if(s == t){cout << "Yes" << endl; return 0;}
    for(int i = 1; i <= 26; i++){
        string ss = "";
        for(auto a : s){
            int x = i;
            if(x+(a-'0') > 74) x -= 26;
            ss += a+x;
        } 
        if(ss == t){cout << "Yes" << endl; return 0;}
    }
    cout << "No" << endl;
    return 0;
}