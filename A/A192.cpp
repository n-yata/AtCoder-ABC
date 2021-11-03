#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x;
    cin >> x;
    int ans = 100-(x%100);
    cout << ans << endl;
    return 0;
}