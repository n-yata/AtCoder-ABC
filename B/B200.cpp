#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll n;
    int k;
    cin >> n >> k;
    rep(i,k){
        if(n%200 == 0) n /= 200;
        else{
            string s = to_string(n);
            s += "200";
            n = stoull(s);
        }
    }
    cout << n << endl;
    return 0;
}