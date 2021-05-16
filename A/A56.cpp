#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    char a, b;
    cin >> a >> b;
    bool t = false;
    if(a == 'H'){
        if(b == 'H') t = true;
    }else{
        if(b == 'D') t = true;
    }
    if(t) cout << 'H' << endl;
    else cout << 'D' << endl;
    return 0;
}