#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n,k;
    cin >> n >> k;
    vector<map<int,int>> a;
    rep(i,k){
        int d;
        cin >> d;
        map<int,int> m;
        rep(j,d){
            int e;
            cin >> e;
            m[e]++;
        }
        a.push_back(m);
    }
    int ans = 0;
    rep(i,n){
        bool b = true;
        rep(j,k){
            map<int, int> m = a[j];
            if(m[i+1] == 1){
                b = false;
                break;
            } 
        }
        if(b) ans++;
    }
    cout << ans << endl;
    return 0;
}