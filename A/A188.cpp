#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x, y;
    cin >> x >> y;
    int minN = min(x, y);
    int maxN = max(x, y);
    if(minN+3 > maxN) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}