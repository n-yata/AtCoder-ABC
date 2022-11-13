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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> x(m);
    rep(i,m){
        int k;
        cin >> k;
        x[i] = vector<int>(k);
        rep(j,k) cin >> x[i][j];
    }
    map<string,bool> mp;
    repn(i,1,n+1)repn(j,i+1,n+1){
        string key = to_string(i)+ "_" +to_string(j);
        mp[key] = false;
    }
    rep(i,m){
        vector<int> vec = x[i];
        rep(j,vec.size())repn(k,j+1,vec.size()){
            string k1 = to_string(vec[j]) + "_" + to_string(vec[k]);
            string k2 = to_string(vec[k]) + "_" + to_string(vec[j]);
            mp[k1] = true;
            mp[k2] = true;
        }
    }
    for(auto a : mp){
        if(!a.second){
            cout <<"No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}