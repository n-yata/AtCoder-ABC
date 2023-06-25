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
    int n;
    string s;
    cin >> n >> s;
    map<string,int> mp;
    pair<int,int> p = {0,0};
    mp[to_string(p.first)+to_string(p.second)]++;
    rep(i,n){
        if(s[i] == 'R') p = {p.first+1,p.second};
        else if(s[i] == 'L') p = {p.first-1,p.second};
        else if(s[i] == 'U') p = {p.first,p.second+1};
        else if(s[i] == 'D') p = {p.first,p.second-1};
        string k = to_string(p.first)+to_string(p.second);
        if(mp[k]){
            cout << "Yes" << endl;
            return 0;
        }
        mp[k]++;
    }
    cout << "No" << endl;
    return 0;
}