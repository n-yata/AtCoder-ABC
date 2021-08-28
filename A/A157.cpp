#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    int cnt = n/2;
    if(n%2 == 0) cout << cnt << endl;
    else cout << ++cnt << endl;
    return 0;
}