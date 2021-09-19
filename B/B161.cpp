#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int sumA = 0;
    rep(i,n) sumA += a[i];
    sort(a.rbegin(), a.rend());
    rep(i,m){
        if(a[i]*4*m < sumA){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}