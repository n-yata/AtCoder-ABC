#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    vector<vector<int>> a(3, vector<int>(3));
    rep(i,3)rep(j,3) cin >> a[i][j];
    int n;
    cin >> n;
    vector<vector<char>> x(3, vector<char>(3));
    rep(i,3)rep(j,3) x[i][j] = 'n';
    rep(i,n){
        int b;
        cin >> b;
        rep(i,3)rep(j,3){
            if(a[i][j] == b) x[i][j] = 'y';
        }
    }
    bool ok = false;
    rep(i,3){
        if(x[i][0] == 'y' && x[i][1] == 'y' && x[i][2] == 'y') ok = true;
        if(x[0][i] == 'y' && x[1][i] == 'y' && x[2][i] == 'y') ok = true;
    }
    if(x[1][1] == 'y'){
        if(x[0][0] == 'y' && x[2][2] == 'y') ok = true;
        if(x[0][2] == 'y' && x[2][0] == 'y') ok = true;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}