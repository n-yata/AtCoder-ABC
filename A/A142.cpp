#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    double n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 != 0) cnt++;
    }
    double sum = 100/n*cnt;
    double ans = sum/100;
    cout << ans << endl;
    return 0;
}