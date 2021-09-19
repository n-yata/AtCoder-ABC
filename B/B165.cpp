#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll x;
    cin >> x;
    ll sum = 100;
    int cnt = 0;
    while(1){
        cnt++;
        sum = sum+sum/100;
        if(sum >= x){
            cout << cnt << endl;
            return 0;
        }
    }
    return 0;
}