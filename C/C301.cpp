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

int cnt [2][256];
char s[2][200010];
char *t="atcoder";

int main(){
    scanf("%s %s",s[0],s[1]);
    for(int i = 0; s[0][i]; i++){
        cnt[0][s[0][i]]++;
        cnt[1][s[1][i]]++;
    }
    rep(i,7){
        int M = fmax(cnt[0][t[i]],cnt[1][t[i]]);
        rep(j,2){
            cnt[j]['@'] -= M-cnt[j][t[i]];
            cnt[j][t[i]] = M;
        }
    }
    int ans = cnt[0]['@'] >= 0;
    rep(i,256) ans &= cnt[0][i] == cnt[1][i];
    puts(ans ? "Yes" : "No");
    return 0;
}