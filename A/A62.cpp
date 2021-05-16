#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x, y;
    cin >> x >> y;
    int gx, gy;
    if(x == 2) gx = 3;
    else if(x == 4 || x == 6 || x == 9 || x == 11) gx = 2;
    else gx = 1;
    if(y == 2) gy = 3;
    else if(y == 4 || y == 6 || y == 9 || y == 11) gy = 2;
    else gy = 1;
    if(gx == gy) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}