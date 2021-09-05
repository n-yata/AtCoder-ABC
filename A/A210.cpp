#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    int cntY = n-a > 0 ? n-a : 0;
    int cntX = n-cntY;
    cout << x*cntX+y*cntY << endl;
    return 0;
}