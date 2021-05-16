#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x, a, b;
    cin >> x >> a >> b;
    int c = a-b;
    if(0 <= c) cout << "delicious" << endl;
    else if(abs(c) <= x) cout << "safe" << endl;
    else cout << "dangerous" << endl;
    return 0;
}