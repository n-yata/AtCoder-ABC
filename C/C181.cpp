#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i,n) cin >> x[i] >> y[i];
    int ans = 0;
    for(int xy1 = 0; xy1 < n; xy1++){
        for(int xy2 = 0; xy2 < xy1; xy2++){
            for(int xy3 = 0; xy3 < xy2; xy3++){
                int dx1 = x[xy1] - x[xy2];
                int dx2 = x[xy1] - x[xy3];
                int dy1 = y[xy1] - y[xy2];
                int dy2 = y[xy1] - y[xy3];
                if(dx2*dy1 == dx1*dy2){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}