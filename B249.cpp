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
    string s;
    cin >> s;
    bool low = false, up = false;
    map<char,int> mp;
    rep(i,s.size()){
        char c = s[i];
        mp[c]++;
        if(islower(c)) low = true;
        if(isupper(c)) up = true;
    }
    if(low && up){
        bool ok = true;
        for(auto au : mp){
            if(au.second > 1) ok = false;
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}