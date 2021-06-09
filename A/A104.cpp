#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int r;
    cin >> r;
    if(r >= 2800) cout << "AGC" << endl;
    else if(r >= 1200) cout << "ARC" << endl;
    else cout << "ABC" << endl;
    return 0;
}