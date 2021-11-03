#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string c;
    cin >> c;
    if(c[0] == c[1] && c[0] == c[2] && c[1] == c[2]) cout << "Won" << endl;
    else cout << "Lost" << endl; 
    return 0;
}