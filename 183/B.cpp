#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;
    double ans = (sx*gy+gx*sy)/(sy+gy);
    printf("%.10f\n", ans);
    return 0;
}