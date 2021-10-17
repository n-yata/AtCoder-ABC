#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,d;
    cin >> n >> d;
    d *= 2;
    d++;
    int cnt = n/d;
    if(n%d != 0) cnt++;
    cout << cnt << endl;
    return 0;
}