#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    if(0 < a && b == 0) cout << "Gold";
    if(a == 0 && 0 < b) cout << "Silver";
    if(0 < a && 0 < b) cout << "Alloy";
    cout << endl;
    return 0;
}