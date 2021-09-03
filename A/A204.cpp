#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x,y;
    cin >> x >> y;
    int ans = 0;
    if(x == y) ans = x;
    else if(x == 0 && y == 1) ans = 2;
    else if(x == 0 && y == 2) ans = 1;
    else if(x == 1 && y == 0) ans = 2;
    else if(x == 1 && y == 2) ans = 0;
    else if(x == 2 && y == 0) ans = 1;
    else if(x == 2 && y == 1) ans = 0;
    cout << ans << endl;
    return 0;
}