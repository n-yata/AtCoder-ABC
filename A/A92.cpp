#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int train = min(a,b);
    int bus = min(c,d);
    cout << train+bus << endl;
    return 0;
}