#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    for(int i = 1; i <= 1000; i++){
        int x = c*i;
        if(a > x) continue;
        if(x > b) break;
        if(a <= x && x <= b){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}