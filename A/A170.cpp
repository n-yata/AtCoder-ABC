#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    vector<int> x(5);
    rep(i,5) cin >> x[i];
    rep(i,5) if(x[i] == 0){
        cout << i+1 << endl;
        break;
    }
    return 0;
}