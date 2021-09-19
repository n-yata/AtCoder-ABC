#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x;
    cin >> x;
    int a = x/500*1000;
    x %= 500;
    int b = x/5*5;
    cout << a+b << endl;
    return 0;
}