#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    double a,b,c,x;
    cin >> a >> b >> c >> x;
    if(a >= x){
        cout << 1 << endl;
        return 0;
    }else if(b < x){
        cout << 0 << endl;
        return 0;
    }
    printf("%.10f\n",c/(b-a));
    return 0;
}