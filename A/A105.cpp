#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, k;
    cin >> n >> k;
    if(n%k == 0) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}