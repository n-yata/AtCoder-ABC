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
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int ta = x/(a+c);
    int am = x%(a+c);
    int ansT = b*a*ta;
    int y = min(am,a);
    ansT += b*y;

    int ao = x/(d+f);
    int an = x%(d+f);
    int ansA = e*d*ao;
    int z = min(an,d);
    ansA += e*z;

    if(ansT > ansA) cout << "Takahashi" << endl;
    else if(ansA > ansT) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}