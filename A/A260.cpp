#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    map<char,int> mp;
    rep(i,0,3){
        char c;
        cin >> c;
        mp[c]++;
    }
    for(auto a : mp){
        if(a.second == 1){
            cout << a.first << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}