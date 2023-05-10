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
    int a,b;
    cin >> a >> b;
    bool ans;
    if(a == 1){
        ans = b == a*2 || b == (a*2)+1;
    }else{
        ans = b == a*2 || b == a*2+1 || b == a/2 || b == (a/2)+1;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}