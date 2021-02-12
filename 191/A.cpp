#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    int start = v*t;
    int end = v*s;
    if(start <= d && d <= end) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}