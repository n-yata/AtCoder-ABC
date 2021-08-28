#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int k, a, b;
    cin >> k >> a >> b;
    bool ok = false;
    int sum = k;
    while(1){
        if(a <= sum && sum <= b){
            ok = true;
            break;
        }
        if(b < sum) break;
        sum += k;
    }
    if(ok) cout << "OK" << endl;
    else cout << "NG" << endl;
    return 0;
}