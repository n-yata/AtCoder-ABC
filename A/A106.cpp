#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    int d = a*b;
    int r = a+b-1;
    cout << d-r << endl;
    return 0;
}