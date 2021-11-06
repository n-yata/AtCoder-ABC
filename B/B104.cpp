#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string s;
    cin >> s;
    if(s[0] != 'A'){cout << "WA" << endl; return 0;}
    int idx = 0;
    int cnt = 0;
    for(int i = 2; i <= s.size()-2; i++){
        if(s[i] == 'C'){idx = i; cnt++;}
    }
    if(cnt != 1){cout << "WA" << endl; return 0;}
    rep(i,s.size()){
        if(i == 0) continue;
        if(i == idx) continue;
        if(!islower(s[i])){cout << "WA" << endl; return 0;}
    }
    cout << "AC" << endl;
    return 0;
}