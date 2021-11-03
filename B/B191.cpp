#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> b;
    for(int i = 0; i < n; i++){
        if(a[i] == x) continue;
        b.push_back(a[i]);
    }
    if(b.size() == 0){
        cout << endl;
        return 0;
    }
    for(int i : b){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}