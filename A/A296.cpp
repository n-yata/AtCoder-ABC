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
    bool fl = s[0] == 'M';
    repn(i,1,n){
        bool b;
        if(fl) b = s[i] == 'F';
        else b = s[i] == 'M';
        fl = s[i] == 'M';
        if(b) continue;
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}