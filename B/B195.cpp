#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a,b,w;
    cin >> a >> b >> w;
    w *= 1000;
    int m = 1e9, M = 0;
    for(int n = 1; n <= 1000000; n++){
        if(a*n <= w && w <= b*n){
            m = min(m,n);
            M = max(M,n);
        }
    }
    if(M == 0) cout << "UNSATISFIABLE" << endl;
    else cout << m << " " << M << endl;
    return 0;
}