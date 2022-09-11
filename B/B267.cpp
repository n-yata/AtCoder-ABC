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
    s = '$' + s;
    if(s[1] == '1'){cout << "No" << endl; return 0;}
    vector<bool> col(7);
    col[0] = (s[7] == '1');
    col[1] = (s[4] == '1');
    col[2] = (s[2] == '1') || (s[8] == '1');
    col[3] = (s[1] == '1') || (s[5] == '1');
    col[4] = (s[3] == '1') || (s[9] == '1');
    col[5] = (s[6] == '1');
    col[6] = (s[10] == '1');
    rep(i,7)rep(j,i){
        if(!col[i] || !col[j]) continue;
        repn(k,j+1,i){
            if(!col[k]){cout << "Yes" << endl; return 0;}
        }
    }
    cout << "No" << endl;
    return 0;
}