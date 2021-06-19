#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b, t;
    cin >> a >> b >> t;
    int cnt = t/a;
    cout << cnt*b << endl;
    return 0;
}