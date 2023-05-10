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
    int n,k;
    string s;
    cin >> n >> k >> s;
    rep(i,n){
        if(k == 0){
            s = s.replace(i,1,"x");
            continue;
        } 
        if(s[i] == 'x') continue;
        k--;
    }
    cout << s << endl;
    return 0;
}