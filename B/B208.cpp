#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int factorial(int k){
    int sum = 1;
    for(int i = 1; i <= k; i++) sum *= i;
    return sum;
}

int main(){
    int p;
    cin >> p;
    int x = 1;
    // 10の階乗を求めておく
    for(int i = 1; i <= 10; ++i)  x*= i;
    int ans = 0;
    for(int i = 10; i >= 1; --i){
        // 現在の階乗で何枚使うか
        ans += p/x;
        // 残りいくらか
        p %= x;
        // 1つ下の階乗を次に回す
        x /= i;
    }
    cout << ans << endl;
    return 0;
}