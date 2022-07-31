#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    double x,y,d;
    cin >> x >> y >> d;
    double s = sin(d*PI/180);
    double c = cos(d*PI/180);
    printf("%.6f %.6f\n",(x*c)-(y*s),(x*s)+(y*c));
    return 0;
}