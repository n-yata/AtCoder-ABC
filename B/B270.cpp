#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(x > 0){
        if(y < 0 || x < y){
            cout << abs(x) << endl;
            return 0;
        }
        if(y < z){
            cout << -1 << endl;
            return 0;
        }
        if(z < 0) cout << (abs(z)*2)+abs(x) << endl;
        else cout << abs(x) << endl;
    }else{
        if(y > 0 || x > y){
            cout << abs(x) << endl;
            return 0;
        }
        if(y > z){
            cout << -1 << endl;
            return 0;
        }
        if(z > 0) cout << (abs(z)*2)+abs(x) << endl;
        else cout << abs(x) << endl;
    }
    return 0;
}