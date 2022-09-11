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
    int h1,w1,h2,w2;
    int a[15][15],b[15][15];
    cin >> h1 >> w1;
    repn(i,1,h1+1)repn(j,1,w1+1) cin >> a[i][j];
    cin >> h2 >> w2;
    repn(i,1,h2+1)repn(j,1,w2+1) cin >> b[i][j];
    rep(i,(1<<h1))rep(j,(1<<w1)){
        vector<int> hvec,wvec;
        repn(k,1,h1+1) if((i & 1<<(k-1)) == 0) hvec.push_back(k);
        repn(k,1,w1+1) if((j & 1<<(k-1)) == 0) wvec.push_back(k);
        if(hvec.size() != h2 || wvec.size() != w2) continue;

        bool match = true;
        repn(k,1,h2+1)repn(l,1,w2+1){
            if(a[hvec[k-1]][wvec[l-1]] != b[k][l]){
                match = false;
                break;
            }
        }
        if(match){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}