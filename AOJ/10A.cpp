#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    int F[50];
    F[0] = F[1] = 1;
    for(int i = 2; i <= n; i++) F[i] = F[i-1]+F[i-2];
    cout << F[n] << endl;
    return 0;
}