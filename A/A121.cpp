#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    int hh = H-h;
    int ww = W-w;
    cout << hh*ww << endl;
    return 0;
}