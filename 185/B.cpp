#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, m, t;
    cin >> n >> m >> t;
    vector<int> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];

    int v = n;

    for(int i = 0; i < m; i++){
        if(i == 0) v -= a[i];
        else v -= (a[i]-b[i-1]);
        
        if(v <= 0){
            cout << "No" << endl;
            return 0;
        } 
        v += b[i]-a[i];
        if(v > n) v = n;
    }

    v -= (t-b[m-1]);
    if(v <= 0){
        cout << "No" << endl;
        return 0;
    } 

    cout << "Yes" << endl;
    return 0;
}