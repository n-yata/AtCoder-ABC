#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    char b;
    cin >> b;
    if(b == 'A') cout << 'T' << endl;
    else if(b == 'C') cout << 'G' << endl;
    else if(b == 'G') cout << 'C' << endl;
    else cout << 'A' << endl;
    return 0;
}