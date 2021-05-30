#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x, a, b;
    cin >> x >> a >> b;
    int xx = x-a;
    int xxx = xx%b;
    cout << xxx << endl;
    return 0;
}