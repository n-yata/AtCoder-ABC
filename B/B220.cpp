#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll f(string s, ll k){
    ll ans = 0;
    for(char x : s){
        ans *= k;
        ans += x-'0';
    }
    return ans;
}

int main(){
    ll k;
    string a,b;
    cin >> k >> a >> b;
    ll A = f(a,k);
    ll B = f(b,k);
    cout << A*B << endl;
    return 0;
}