#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans = 0;

    for(int i = 1; i <= b; i++){
        ans = a*i;
        if(ans%b == c){ 
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}