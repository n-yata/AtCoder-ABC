#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    string a[3][10];
    char tmp[30][31];
    int h[3],w[3];
    bool flag;
    rep(k,3){
        cin >> h[k] >> w[k];
        for(int i = 0; i < h[k]; i++) cin >> a[k][i];
    } 
    for(int dh0 = 1; dh0 < 20; dh0++){
        for(int dw0 = 1; dw0 < 20; dw0++){
            for(int dh1 = 1; dh1 < 20; dh1++){
                for(int dw1 = 1; dw1 < 20; dw1++){
                    for(int i = 0; i < 30; i++)for(int j = 0; j < 30; j++) tmp[i][j] = '.';
                    for(int i = 0; i < h[0]; i++)for(int j = 0; j < w[0]; j++)if(a[0][i][j] == '#') tmp[i+dh0][j+dw0] = '#';
                    for(int i = 0; i < h[1]; i++)for(int j = 0; j < w[1]; j++)if(a[1][i][j] == '#') tmp[i+dh1][j+dw1] = '#';

                    flag = true;
                    for(int i = 0; i < 30; i++){
                        for(int j = 0; j < 30; j++){
                            if((0<=(i-10)) && ((i-10)<h[2]) && ((0 <= (j-10))) && ((j-10) < w[2])){
                                if(tmp[i][j] != a[2][i-10][j-10]) flag = false;
                            }else{
                                if(tmp[i][j] != '.') flag = false;
                            }
                        }
                    }
                    if(flag){
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}