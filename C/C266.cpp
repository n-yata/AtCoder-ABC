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

struct V {
    int x,y;
    V(int x = 0, int y = 0): x(x), y(y) {}
    V operator-(const V& a) const{
        return V(x-a.x, y-a.y);
    }
    int cross(const V& a) const {
        return x*a.y - y*a.x;
    }
    int ccw(const V& a) const {
        int area = cross(a);
        if(area > 0) return +1; // ccw
        if(area < 0) return -1; // cw
        return 0; // collinear
    }
};

int main(){
    vector<V> p(4);
    rep(i,4) cin >> p[i].x >> p[i].y;
    rep(i,4){
        V A = p[i];
        V B = p[(i+1)%4];
        V C = p[(i+2)%4];
        V b = B-A, c = C-A;
        if(b.ccw(c) != 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}