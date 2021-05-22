#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

// ループによる最大公約数
int gcd(int x, int y){
    int r;
    if(x < y) swap(x, y); // y < xを保証する
    while(y > 0){
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
    return 0;
}