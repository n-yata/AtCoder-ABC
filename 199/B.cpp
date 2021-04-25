#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    vector<int> x;
    for(int j = a[0]; j <= b[0]; j++) x.push_back(j);
    for(int i = 1; i < n; i++){
        vector<int> y, z;
        for(int j = a[i]; j <= b[i]; j++){
            y.push_back(j);
        }
        rep(k, y.size()){
            vector<int>::iterator itr;
            itr = find(x.begin(), x.end(), y[k]);
            if(itr == x.end()) continue;
            z.push_back(y[k]);
        }
        swap(x,z);
    }
    if(x.size() <= 0) cout << 0 << endl;
    else cout << x.size() << endl;
    return 0;
}