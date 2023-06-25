#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int n,m,h,k;
    string s;
    cin >> n >> m >> h >> k >> s;
    map<string,int> mp;
    rep(i,m){
        int x,y;
        cin >> x >> y;
        mp[to_string(x)+to_string(y)]++;
    }
    pair<int,int> p = {0,0};
    rep(i,n){
        h--;
        if(h < 0){
            cout << "No" << endl;
            return 0;
        }
        char move = s[i];
        if(move == 'R') p = {p.first+1,p.second};
        if(move == 'L') p = {p.first-1,p.second};
        if(move == 'U') p = {p.first,p.second+1};
        if(move == 'D') p = {p.first,p.second-1};
        if(h >= k) continue;
        string now = to_string(p.first)+to_string(p.second);
        if(mp[now]){ h = k; mp[now]--; };
    }
    cout << "Yes" << endl;
    return 0;
}