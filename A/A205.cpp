#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    double a,b;
    cin >> a >> b;
    double kal = a/100;
    printf("%.8f", kal*b);
    return 0;
}