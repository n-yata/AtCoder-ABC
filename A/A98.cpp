#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    int a1 = a+b;
    int a2 = a-b;
    int a3 = a*b;
    cout << max({a1, a2, a3}) << endl;
    return 0;
}