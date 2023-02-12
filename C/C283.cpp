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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    for(int i = 0; i < n;){
        ans++;
        if(s[i] == '0' && i+1 < n && s[i+1] == '0'){
            i += 2;
        }else{
            i += 1;
        }
    }
    cout << ans << endl;
    return 0;
}