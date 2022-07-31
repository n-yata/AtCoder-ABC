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
    int n,a,b;
    cin >> n >> a >> b;
    int h = n*a;
    int w = n*b;
    vector<string> ans(h);
    bool blA = false;
    int cntA = a;
    rep(i,h){
        string s;
        bool blB = blA;
        int cntB = b;
        rep(j,w){
            if(blB) s.push_back('#');
            else s.push_back('.');
            cntB--;
            if(cntB == 0){
                blB = !blB;
                cntB = b;
            }
        }
        ans[i] = s;
        cntA--;
        if(cntA == 0){
            blA = !blA;
            cntA = a;
        }
    }
    for(auto au : ans) cout << au << endl;
    return 0;
}