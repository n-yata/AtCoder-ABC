#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x;
    cin >> x;
    if(x == 0){
        cout << "No" << endl;
        return 0;
    }
    if(x%100 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}