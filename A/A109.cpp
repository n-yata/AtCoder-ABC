#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    bool ok = false;
    if((a*b*1)%2 == 1) ok = true;
    else if((a*b*2)%2 == 1) ok = true;
    else if((a*b*3)%2 == 1) ok = true;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}