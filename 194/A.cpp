#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    a = a+b;
    int ans = 4;
    if(a >= 15 && b >= 8){
        ans = 1;
    }else if(a >= 10 && b >= 3){
        ans = 2;
    }else if(a >= 3){
        ans = 3;
    }
    cout << ans << endl;
    return 0;
}