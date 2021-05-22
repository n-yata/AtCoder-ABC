#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
 
const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int aa, bb, cc;
    aa = 7-a, bb = 7-b, cc = 7-c;
    cout << aa+bb+cc << endl;
    return 0;
}