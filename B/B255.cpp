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
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    rep(i,k) cin >> a[i];
    vector<pair<double,double>> none;
    vector<pair<double,double>> light;
    rep(i,n){
        double x,y;
        cin >> x >> y;
        if(find(a.begin(),a.end(),i+1) == a.end()) none.push_back({x,y});
        else light.push_back({x,y});
    }
    double ans = 0;
    for(auto pairN : none){
        double mn = 999999;
        for(auto pairL : light){
            double x1 = pairN.first;
            double y1 = pairN.second;
            double x2 = pairL.first;
            double y2 = pairL.second;
            double xx = pow(x1-x2,2);
            double yy = pow(y1-y2,2);
            // ユークリッド距離: sqrt(pow(x1-x2,2)+pow(y1-y2,2));
            mn = min(mn,sqrt(xx+yy));
        }
        ans = max(ans,mn);
    }
    printf("%.10f\n",ans);
    return 0;
}