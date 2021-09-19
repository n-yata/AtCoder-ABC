#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    int sumA = 0;
    rep(i,m){
        int a;
        cin >> a;
        sumA += a;
    } 
    if(n < sumA) cout << -1 << endl;
    else cout << n-sumA << endl;
    return 0;
}