#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int lim = a[n-1];
    int ans = 0;
    int maxN = 0;
    for(int k = 2; k <= lim; ++k){
        int count = 0;
        for(int i = 0; i < n; ++i){
            if(a[i]%k == 0) count++;
        }
        if(maxN < count){
            maxN = count;
            ans = k;
        }
    }
    cout << ans << endl;
}