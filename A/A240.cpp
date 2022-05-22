#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    if(b-a == 1 || b-a == 9) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}