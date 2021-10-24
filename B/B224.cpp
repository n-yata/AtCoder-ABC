#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int h,w;
    cin >> h >> w;
    ll x[h][w];
    rep(i,h)rep(j,w) cin >> x[i][j];

    for(int i_1 = 0; i_1 < h; i_1++){
        for(int i_2 = i_1+1; i_2 < h; i_2++){
            for(int j_1 = 0; j_1 < w; j_1++){
                for(int j_2 = j_1+1; j_2 < w; j_2++){
                    if(x[i_1][j_1]+x[i_2][j_2] > x[i_2][j_1]+x[i_1][j_2]){
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}