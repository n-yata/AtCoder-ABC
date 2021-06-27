#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, a ,b;
    cin >> n >> a >> b;
    int aa = a*n;
    int minS = min(aa, b);
    cout << minS << endl;
    return 0;
}