#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int s,t;
    cin >> s >> t;
    ll cnt = 0;
    int maxN = max(s,t);
    rep(i,maxN+1){
        if(i > s) break;
        rep(j,maxN+1){
            if(i+j > s) break;
            rep(k,maxN+1){
                if(i+j+k > s || i*j*k > t) break;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}