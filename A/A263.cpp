#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    map<int,int> mp;
    rep(i,5){
        int x;
        cin >> x;
        mp[x]++;
    }
    if(mp.size() != 2){
        cout << "No" << endl;
        return 0;
    }
    bool ok = false;
    int first = 0,second = 0;
    int idx = 0;
    for(auto a : mp){
        if(idx == 0) first = a.second;
        if(idx == 1) second = a.second;
        idx++;
    }
    if(first == 2 && second == 3) cout << "Yes" << endl;
    else if(first == 3 && second == 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}