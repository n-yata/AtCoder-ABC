#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int search(vector<int> s, int n, int key){
    int i = 0;
    s[n] = key;
    while(s[i] != key) i++;
    return i != n;
}

int main(){
    int n, q, t;
    int ans = 0;
    cin >> n;
    vector<int> s(n+1);
    rep(i,n){
        cin >> s[i];
    }
    cin >> q;
    rep(i,q){
        cin >> t;
        if(search(s, n, t)) ans++;
    }
    cout << ans << endl;
    return 0;
}