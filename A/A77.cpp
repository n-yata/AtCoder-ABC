#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string c1, c2;
    cin >> c1 >> c2;
    swap(c1[0], c1[2]);
    if(c1 == c2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}