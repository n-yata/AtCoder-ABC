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

const string ALF = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> vec(h);
    rep(i,h){
        string s = "";
        rep(j,w){
            int a; cin >> a;
            if(a == 0){
                s += ".";
                continue;
            }
            s += ALF[--a];
        }
        vec[i] = s;
    }
    rep(i,h) cout << vec[i] << endl;
    return 0;
}