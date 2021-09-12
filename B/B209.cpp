#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int sum = 0;
    rep(i,n){
        int ai = a[i];
        if(i%2 == 1) ai -= 1;
        sum += ai;
    }
    if(x >= sum) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}