#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end(), greater<>());
    int alice = 0, bob = 0;
    rep(i,n){
        if(i%2 == 0) alice += a[i];
        else bob += a[i];
    }
    cout << alice-bob << endl;
    return 0;
}