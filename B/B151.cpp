#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,k,m;
    cin >> n >> k >> m;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    int sum = 0;
    rep(i,n-1) sum += a[i];
    int avgSum = m*n;
    int goal = avgSum-sum;
    if(goal <= 0) cout << 0 << endl;
    else if(goal > k) cout << -1 << endl;
    else cout << goal << endl;
    return 0;
}