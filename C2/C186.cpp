#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int a[100][100];

int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        string s10 = to_string(i);
        stringstream ss;
        ss << oct << i;
        string s8 = ss.str();
        if(s10.find("7") != string::npos) continue;
        if(s8.find("7") != string::npos) continue;
        ans++;
    }
    cout << ans << endl;
    return 0;
}